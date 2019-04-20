#include<stdio.h>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int cases;
    scanf("%i",&cases);
    long lsx[cases],lsy[cases];
    for(int i=0;i<cases;i++){
        scanf("%li %li",&lsx[i],&lsy[i]);
    }
    if(cases==1){
        puts("0");
    }else if (cases==2){
        int res1 = abs(lsx[0]-lsx[1]);
        int res2 = abs(lsy[0]-lsy[1]);
        printf("%li\n",res1<res2?res1:res2);
    }else{
        sort(lsx,lsx+cases);
        sort(lsy,lsy+cases);
        long mediox,medioy,sumx=0,sumy=0;
        long m = cases/2;
        if(cases%2==0){
            mediox = (abs(lsx[m]-lsx[m-1])+abs(lsx[m+1]-lsx[m]))<abs(lsx[m]-lsx[m-1])+abs(lsx[m-1]-lsx[m-2])?lsx[m]:lsx[m-1];
            medioy = (abs(lsy[m]-lsy[m-1])+abs(lsy[m+1]-lsy[m]))<abs(lsy[m]-lsy[m-1])+abs(lsy[m-1]-lsy[m-2])?lsy[m]:lsy[m-1];
        }else{
            mediox=lsx[m];
            medioy=lsy[m];
        }
        for(int i=0;i<cases;i++){
            sumx +=abs(mediox-lsx[i]);
            sumy +=abs(medioy-lsy[i]);
        }
        printf("%li\n",sumx<sumy?sumx:sumy);
    }
    
    return 0;
}
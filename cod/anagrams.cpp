#include<stdio.h>
#include<string.h>
#include<unordered_map>
using namespace std;

int main(){
    int cases,ta,tb;
    char a[10005],b[10005];
    unordered_map<char,int> ma;
    scanf("%i",&cases);
    while(cases){
        scanf("%s",a);
        scanf("%s",b);
        ta = strlen(a);
        tb= strlen(b);
        for(int i=0;i<ta;i++){
            int ant = ma[a[i]];
            ma[a[i]]=ant+1;
        }
        int res =0;
        for(int i=0;i<tb;i++){
            auto x = ma.find(b[i]);
            if(x!=ma.end()){
                if((*x).second==1)ma.erase(x);
                else (*x).second -=1;
            }else{  
                res++;
            }
        }
        for(auto& x:ma){
            res +=x.second;
        }
        printf("%i\n",res);
        cases--;
        ma.clear();
    }
    return 0;
}
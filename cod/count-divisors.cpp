#include<stdio.h>

using namespace std;

int main(){
    int l,r,k,res=0;
    scanf("%i %i %i",&l,&r,&k);
    for(int i=l;i<=r;i++){
        if(i%k==0)res++;
    }
    printf("%i\n",res);
    return 0;
}
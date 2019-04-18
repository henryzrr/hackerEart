#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int n,q;
    unsigned  long ls[1000001],aux=0,a,b;
    scanf("%d %d",&n,&q);
    for(int i=1;i<=n;i++){
        scanf("%lu",&ls[i]);
        ls[i] +=aux;
        aux = ls[i];
    }
    while(q--){
        scanf("%lu %lu",&a,&b);
        if(a==1){
            printf("%lu\n",ls[b]/b);
        }else{
            printf("%lu\n",(ls[b]-ls[a-1])/(b-a+1));
        }
    }

    return 0;
}
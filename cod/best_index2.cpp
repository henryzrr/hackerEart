#include<stdio.h>

using namespace std;

int main(){
    long n,i;
    scanf("%li",&n);
    long ls[n+1];
    for(i=0;i< n;i++){
         scanf("%li",&ls[i]);
    }
    long sum,max=-10000000,lim;
    //printf("--------\n");
    for(i=0;i<n;i++){
        sum=0;
        lim = n-((n-i)%3);
        for(int j=i;j<lim;j++){
            sum +=ls[j];
        }
        printf("--%li %li %li --",ls[i],ls[lim-1],sum);
        max = sum>max?sum:max;
        max = ls[i]>max?ls[i]:max;
        
    }
    if(i-lim==2) max = sum>max?sum:max;
    printf("%li\n",max);
    return 0;
}
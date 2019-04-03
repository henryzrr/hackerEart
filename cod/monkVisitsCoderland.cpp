#include<stdio.h>

using namespace std;
int main(){
    int cases,cp;
    scanf("%i",&cases);
    while(cases){
        scanf("%i",&cp);
        int lscost[cp];
        int lspetrol[cp];
        for(int i=0;i<cp;i++){
            scanf("%i",&lscost[i]);
        }
        for(int i=0;i<cp;i++){
            scanf("%i",&lspetrol[i]);
        }
        long men=lscost[0];
        unsigned long long int minCost = 0;
        for(int i=0;i<cp;i++){
            if(lscost[i]<men) men = lscost[i];
            minCost +=men * lspetrol[i];
        }
        printf("%llu\n",minCost);
        cases--;
    }
    return 0;
}

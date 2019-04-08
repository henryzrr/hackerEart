#include<stdio.h>
using namespace std;

int main(){
    int n;
    unsigned long res=1;
    scanf("%i",&n);
    for(int i=2;i<=n;i++){
        res *=i;
    }
    printf("%lu",res);
    return 0;
}
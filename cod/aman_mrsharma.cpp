#include<stdio.h>

using namespace std;

int main(){
    int d,r,x,dias=0;
    scanf("%i",&d);
    while(d--){
        scanf("%i %i",&r,&x);
        int res = (100*x)-((44*r)/7);
        if(res>=0)dias++;
    }
    printf("%i",dias);
    return 0;
}
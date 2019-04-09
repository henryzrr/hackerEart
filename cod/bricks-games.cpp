#include<stdio.h>

using namespace std;

int main(){
    int n,res=0,i=0;
    scanf("%i",&n);
    while(true){
        res +=i;
        if(res>=n){
            puts("Patlu");
            break;
        }else{
            res+=i*2;
            if(res>=n){
                puts("Motu");
                break;
            }
        }
        i++;
    }
    return 0;
}
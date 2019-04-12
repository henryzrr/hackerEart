#include<stdio.h>

using namespace std;

int main(){
    char a;
    int i=1,res=0;
    while(scanf("%c",&a)!=EOF){
        res+=(a-48)*i;
        i++;
    }
    if(res%11==0 && i==11) puts("Legal ISBN");
    else puts("Illegal ISBN");
    return 0;
}
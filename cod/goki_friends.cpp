#include<stdio.h>

using namespace std;
int main(){
    int n,skill,i;
    scanf("%i %i",&n,&skill);
    while(n--){
        scanf("%i",&i);
        if(i>=skill) puts("YES");
        else puts("NO");
    }
    return 0;
}
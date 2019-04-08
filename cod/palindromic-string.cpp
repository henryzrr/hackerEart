#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
    char ls[105];
    scanf("%s",ls);
    int tam = strlen(ls);
    int i=0,j=tam-1,dif=0;
    while(j>=i&&!dif){
        if(ls[i]!=ls[j])dif++;
        j--;
        i++;
    }
    printf("%s\n",dif==0?"YES":"NO");
    return 0;
}
#include<stdio.h>
#define convert(a)a<91?a+32:a-32
using namespace std;

int main(){
    char ls [101];
    scanf("%s",ls);
    for(int i=0;ls[i]!='\0';i++){
        ls[i]=convert(ls[i]);
    }
    printf("%s\n",ls);
    return 0;
}
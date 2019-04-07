#include<stdio.h>
#include<string.h>
using namespace std;
bool esDigito(char d){
    return d=='1'||d=='2'||d=='3'||d=='4'||d=='5'||d=='6'||d=='7'||d=='8'||d=='9'||d=='0';
}
int main(){
    char ls[101];
    int res[10]={0};
    scanf("%s",ls);
    int tam = strlen(ls);
    for(int i=0;i<tam;i++){
        if(esDigito(ls[i])){
            res[ls[i]-48]+=1; 
        }
    }
    for(int i=0;i<10;i++){
        printf("%i %i\n",i,res[i]);
    }
    return 0;
}
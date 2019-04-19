#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
    int clave;
    char cad[200],res[201];
    scanf("%s %i",cad,&clave);
    int i,tam = strlen(cad),letra=clave%26,num=clave%10,sum;
    for( i=0;i<tam;i++){
        if(cad[i]>='a'&&cad[i]<='z') {
            sum = cad[i]+letra;
            if(sum>122){
                sum -=122;
                sum = 96+sum;
            }
        }else if(cad[i]>='A'&&cad[i]<='Z') {
            sum = cad[i]+letra;
            if(sum>90){
                sum -=90;
                sum = 64+sum;
            }
        }else if(cad[i]>='0'&&cad[i]<='9') {
            sum = cad[i]+num;
            if(sum>57){
                sum -=57;
                sum = 47+sum;
            }
        }else{
            sum = cad[i];
        }
        res[i]=sum;
    }
    res[i]='\0';
    printf("%s\n",res);
    return 0;
}
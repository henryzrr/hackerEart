#include<stdio.h>
#define getnum(n) n=='1'?2:n=='2'||n=='3'||n=='5'?5:n=='4'?4:n=='6'||n=='0'||n=='9'?6:n=='7'?3:7 
using namespace std;

int main(){
    int cases,num,suma,i;
    char cad[105];
    scanf("%i",&cases);
    while(cases--){
        i=suma=0;
        scanf("%s",cad);
        while(cad[i]!='\0'){
            suma +=getnum(cad[i]);
            i++;
        }
        
        if(suma%2!=0){
            suma-=3;
            printf("7");
        }
        suma= suma/2;
        for(i=0;i<suma;i++){
            printf("1");
        }
        puts("");
    }
    return 0;
}
#include<stdio.h>
#include<array>
using namespace std;
int lsprimos[]={-100, 67, 71, 73, 79, 83, 
                89, 97, 101, 103, 107, 109, 113,500};


char busqueda(int i, int f,char c){
    int medio=((f-i+1)/2)+i;
    ///printf("%c ",lsprimos[medio]);
    if(c>=lsprimos[medio]){
        if(c<=lsprimos[medio+1]) return c-lsprimos[medio]<=lsprimos[medio+1]-c?lsprimos[medio]:lsprimos[medio+1];
        else return busqueda(medio+1,f,c);
    }else if(c>=lsprimos[medio-1])return c-lsprimos[medio-1]<=lsprimos[medio]-c?lsprimos[medio-1]:lsprimos[medio];
    else return busqueda(i,medio-1,c);
}


int main(){
    int cases,tam,i,res1,res2;
    char cad[501],res[501];
    scanf("%i",&cases);
    while(cases--){
        scanf("%i %s",&tam,cad);
        for(i=0;i<tam;i++){
            res[i]=busqueda(0,13,cad[i]);
           //printf("%c ",res[i]);
        }
        res[i]='\0';
        printf("%s\n",res);
    }
    return 0;
}
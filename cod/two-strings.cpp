#include<stdio.h>

using namespace std;

int main(){
    int cases,i;
    char cad[100005],cad2[100005];
    scanf("%i",&cases);
   
    while(cases){
        int ls [26]={0};
        scanf("%s %s",cad,cad2);
        i=0;
        while(cad[i]!='\0'){
            ls[cad[i]-'a']+=1;
            i++;
        }
        i=0;
        while(cad2[i]!='\0'){
            ls[cad2[i]-'a']-=1;
            i++;
        }
        i=0;
        bool isok=true;
        while(i<26){
            if(ls[i]!=0){
                isok=false;
                break;
            }
            i++;
        }
        printf("%s\n",isok?"YES":"NO");
        cases--;
    }
    return 0;
}
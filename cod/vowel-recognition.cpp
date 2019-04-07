#include<stdio.h>
#include<string.h>
using namespace std;
char cad [100005];
int cases;
long tam;
unsigned long long res;
bool esVocal(char v){
    return v=='a'||v=='e'||v=='i'||v=='o'||v=='u'||v=='A'||v=='E'||v=='I'||v=='U'||v=='O';
}
int main(){
    
    scanf("%i",&cases);
    while(cases){
        res = 0;
        scanf("%s",cad);
        tam = strlen(cad);
        for(long i=0;i<tam;i++){
            if(esVocal(cad[i])){
                res +=(tam-i)*(i+1);
            }
        }
        printf("%llu\n",res);
        cases--;
    }
    return 0;
}
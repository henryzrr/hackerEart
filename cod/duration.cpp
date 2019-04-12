#include<stdio.h>

using namespace std;

int main(){
    int cases,hi,mi,hf,mf;
    scanf("%i",&cases);
    while(cases--){
        scanf("%i %i %i %i",&hi,&mi,&hf,&mf);
        int res = ((hf*60)+mf)-((hi*60)+mi);
        printf("%i %i\n",res/60,res%60);
    }
    return 0;
}
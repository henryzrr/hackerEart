#include<stdio.h>
#include<vector>
using namespace std;

int tam;
vector<long>ls,lsum;

void update(int pos,long val){
    pos++;
    while(pos<=tam){
        lsum[pos-1] +=val;
        pos += pos&-pos; 
    }
}
long query(int n){
    long res=0;
    n++;
    while(n){
        res +=lsum[n-1];
        n -= n&-n;
    }
    return res;
}
long query(int a,int b){
    return a==0?query(b):query(b)-query(a-1);
}
int main(){
    int q;
    long aux;
    scanf("%i %i",&tam,&q);
    ls.reserve(tam);
    lsum.assign(tam,0);
    for(int i=0;i<tam;i++){
        scanf("%li",&ls[i]);
        update(i,ls[i]);
    }

    int t,a,b;
    while(q--){
        scanf("%i %i %i",&t,&a,&b);
        if(t==1){
            update(a,-ls[a]);
            update(a,b);
            ls[a]=b;
        }else{
            printf("%li\n",query(a,b));
        }
    }
    
    return 0;
}
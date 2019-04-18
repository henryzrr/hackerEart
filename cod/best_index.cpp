#include<stdio.h>
#include<vector>

using namespace std;
vector<long> acum;
int buscar(int e,int i,int f){
    long mitad = i+((f-i-1)/2);
    if(e==0) return 0;
    else if(e>=acum[mitad]){
        if(e>=acum[mitad]&&e<acum[mitad+1]) return acum[mitad];
        else return buscar(e,mitad+1,f);
    }else if(e<acum[mitad]&&e>=acum[mitad-1]) return acum[mitad-1];
    else return buscar(e,i,mitad-1);
}
int main(){
    long n,i,aux2=0,j=1,k=0;
    scanf("%li",&n);
    long ls[n];
    acum.reserve(n);
    
    for(i=0;i< n;i++){
         scanf("%li",&ls[i]);
         aux2 +=ls[i]; 
         ls[i]=aux2;
         k++;
         if(k==j){
             acum[j]=i+1;
             j++;
             k=0;
         }
    }
    acum[j]=10000000;
    acum[0]=0;
    long max=-10000000;
    for(i=0;i<n;i++){
        long busq = buscar(n-i,0,j)+i-1;
        if(i!=0){
            aux2 = ls[busq] - ls[i-1];
        }else{
            aux2 = ls[busq];
        }
        
        max = aux2>max?aux2:max;
    }
    printf("%li\n",max);
    return 0;
}
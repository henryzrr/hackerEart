#include<stdio.h>

using namespace std;

int main(){
    int n;
    long product=1,num;
    scanf("%i",&n);
    while(n){
        scanf("%li",&num);
        product =(product * num)%1000000007;
        n--;
    }
    printf("%li\n",product);
    return 0;
}
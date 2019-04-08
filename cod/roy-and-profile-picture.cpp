#include<stdio.h>

using namespace std;

int main(){
    int l,n,a,b;
    scanf("%i %i",&l,&n);
    while(n){
        scanf("%i %i",&a,&b);
        printf("%s\n",a==b&&a>=l?"ACCEPTED":a<l||b<l?"UPLOAD ANOTHER":"CROP IT");
        n--;
    }
    return 0;
}
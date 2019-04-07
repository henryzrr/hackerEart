#include<stdio.h>
#include<set>

using namespace std;

int main(){
    int n;
    set<int>primos;
    scanf("%i",&n);
    primos.insert(2);
    for(int i=3;i<=n;i+=2){
        primos.insert(i);
    }
    set <int>::iterator x = primos.begin();
    x++;
    while((*x)*2<=n){
        int i=2;
        int value=0;
        while(value<=n){
            value = (*x)*i;
            i++;
            primos.erase(value);
        }
        x++;
    }
    for(auto&y:primos){
        printf("%i ",y);
    }
    return 0;
}
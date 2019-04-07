#include<stdio.h>
#include<set>
using namespace std;
set<unsigned int> ls;
int main(){
    unsigned int a,b;
    scanf("%u %u",&a,&b);
    ls.insert(2);
    for(unsigned int i=1;i<=b;i+=2){
        ls.insert(i);
    }
    set<unsigned int>::iterator x = ls.begin();
    x++;
    x++;
    int val;
    while((*x)*2<=b){
        int i=2;
        val=(*x);
        while(val<b){
            val = (*x)*i;
            ls.erase(val);
            i++;
        }
        x++;
    }
    x = ls.end();
    while(x==ls.end()){
        x=ls.find(a);
        a++;
    }
    while(x!=ls.end()){
        unsigned int aux = *x;
        unsigned int res= 0;
        while(aux){
            res +=aux %10;
            aux/=10;
        }
        if(ls.find(res)!=ls.end()){
            printf("%u ",(*x));
        }
        x++;
    }
    return 0;
}
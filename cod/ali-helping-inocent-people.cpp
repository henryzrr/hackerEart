#include <stdio.h>

using namespace std;

bool vocal(char c){
    return c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='Y';
}

int main(){
    char ls [20];
    scanf("%s",ls);
    int n1,n2,n4,n5,n6,n8,n9;
    
    if(!vocal(ls[2])){
        n1=ls[0]&1;
        n2=ls[1]&1;
        n4=ls[3]&1;
        n5=ls[4]&1;
        n6=ls[5]&1;
        n8=ls[7]&1;
        n9=ls[8]&1;
        if(n1==n2 && n4==n5 && n5==n6 && n8==n9){
            puts("valid");
        }else{
            puts("invalid");
        }
    }else{
        puts("invalid");
    }
    return 0;
}
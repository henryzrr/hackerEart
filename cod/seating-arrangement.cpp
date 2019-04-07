#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int cases,n;
    scanf("%i",&cases);
    while(cases){
        cin>>n;
        int n3=n%3,n6=n%6,n12=n%12,comp=(n/12)*12,res=0;
        if(n6==n12 && n6==0){
            res = comp-12+1;
        }else if(n6==0 && n12==6){
            res = comp+7;
        }else if(n6==n12){
            res = (comp+12)-n6+1;
        }else{
            res = (comp +6)-n6+1;
        }
        string cadres;
        if(n3==2){
            cadres ="MS";
        }else if(n3==n6 && n3==0){
            cadres = "WS";
        }else if(n3==n6 && n3==1){
            cadres = "WS";
        }else{
            cadres = "AS";
        }
        cout<<res<<" "<<cadres<<"\n";
        cases--;
    }
    return 0;
}
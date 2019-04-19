#include<stdio.h>
using namespace std;

typedef struct pos{
    int a;
    int b;
}pos;

int n,m;
char ls [100][100];
pos lpos [10000];

bool diagDown(pos p){
    if(p.a+3<n && p.b+3<m) return ls[p.a+1][p.b+1]=='a' && ls[p.a+2][p.b+2]=='b' && ls[p.a+3][p.b+3]=='a';
    else return false;
}
bool diagUp(pos p){
    if(p.a-3>=0 && p.b+3<m) return ls[p.a-1][p.b+1]=='a' && ls[p.a-2][p.b+2]=='b' && ls[p.a-3][p.b+3]=='a';
    else return false;
}
bool ver(pos p){
    if(p.a+3<n) return ls[p.a+1][p.b]=='a' && ls[p.a+2][p.b]=='b' && ls[p.a+3][p.b]=='a';
    else return false;
}
bool hor(pos p){
    if(p.b+3<m) return ls[p.a][p.b+1]=='a' && ls[p.a][p.b+2]=='b' && ls[p.a][p.b+3]=='a';
    else return false;
}
int main(){
    int i,j,k=0;
    char trash[5];
    scanf("%i %i",&n,&m);
    fgets(trash,4,stdin);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%c",&ls[i][j]);
            if(ls[i][j]=='s'){
                pos s;
                s.a=i;
                s.b=j;
                lpos[k]=s;
                k++;
            }
            //printf("%c ",ls[i][j]);
        }
        fgets(trash,4,stdin);
    }
    int res=0;
    for(i=0;i<k;i++){
        if(diagUp(lpos[i])) res++;
        if(diagDown(lpos[i])) res++;
        if(hor(lpos[i])) res++;
        if(ver(lpos[i])) res++;
    }
    printf("%i\n",res);
    return 0;
}
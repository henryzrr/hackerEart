#include<stdio.h>

using namespace std;

int main(){
    char cad[205];
    scanf("%s",cad);
    int i=0,posx=0,posy=0;;
    while(cad[i]!='\0'){
        switch (cad[i])
        {
            case'L':
                posx -=1;
                break;
            case'R':
                posx +=1;
                break;
            case'U':
                posy +=1; 
                break;
            default:
                posy -=1;
                break;
        }
        i++;
    }
    printf("%i %i\n",posx,posy);
    return 0;
}
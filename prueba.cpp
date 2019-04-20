#include<stdlib.h>
#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;

typedef struct arista{
    int dato;
    string sig;
    arista * siguiente;
}arista;
typedef struct nodo{
    string nombre;
    arista * aristas;
    nodo *sig;
}nodo;
typedef struct grafo{
    bool dirigido;
    nodo * listaNodos;
}grafo;

grafo nuevoGrafo(bool dirigido){
    grafo g;
    g.dirigido=dirigido;
    g.listaNodos =NULL;
    return g;
}

nodo* addNodo(grafo& g,string nombre){
    if(g.listaNodos==NULL){
        g.listaNodos =(nodo*) malloc(sizeof(nodo));
        g.listaNodos->nombre = nombre;
        g.listaNodos->aristas = NULL;
        g.listaNodos->sig = NULL;
    }else{
        nodo * aux = g.listaNodos;
        g.listaNodos = (nodo*)malloc(sizeof(nodo));
        g.listaNodos->nombre = nombre;
        g.listaNodos->aristas = NULL;
        g.listaNodos->sig = aux;
    }
    return g.listaNodos;
}

void addArista(nodo& n,int dato, string nom){
    if(n.aristas==NULL){
        n.aristas = (arista*) malloc(sizeof(arista));
        n.aristas->dato=dato;
        n.aristas->sig=nom;
        n.aristas->siguiente = NULL;  
    }else{
        arista * a=n.aristas;
        n.aristas = (arista*)malloc(sizeof(arista));
        n.aristas->dato = dato;
        n.aristas->sig = nom;
        n.aristas->siguiente = a;
    }
}
nodo* findNodo(grafo& g,string nombre){
    nodo* it = g.listaNodos;
    while(it!=NULL){
        if(it->nombre==nombre) return it;
        it=it->sig;
    }
    return NULL;
}
int main(){
    grafo g=nuevoGrafo(true);
    nodo *n = addNodo(g,"nodo1");
    addArista(*n,1,"nodo2");
    addArista(*n,2,"nodo3");
    n = addNodo(g,"nodo2");
    addArista(*n,3,"nodo1");
    addArista(*n,4,"nodo5");
    cout<<g.listaNodos->aristas->sig<<" "<<g.listaNodos->sig->aristas->sig<<endl;
    n = findNodo(g,"nodo2");
    addArista(*findNodo(g,"nodo2"),5,"nodo7");
    cout<<g.listaNodos->aristas->sig<<" "<<g.listaNodos->sig->aristas->sig<<endl;
    return 0;
}
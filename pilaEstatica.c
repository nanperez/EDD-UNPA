#include<stdio.h>
#define TAM 100

typedef struct pila
{
  int tope;
  int elementos[TAM];
}Pila;

// Funciones básicas
void insertar(Pila *p, int valor); // push()
int eliminar(Pila *p);         // pop()
// Funciones auxiliares
int vacia(Pila *p);
void imprimir(Pila *p);

int main(){
    // Declarando e inicializando una variable de tipo Pila
    Pila pila1={-1,{0}};
    insertar(&pila1,10);
    insertar(&pila1,52);
    insertar(&pila1,10);
    imprimir(&pila1);
}

void insertar(Pila *p, int valor){
    p->tope++;
    p->elementos[p->tope]=valor;

}

void imprimir(Pila *p){
    for (int i = p->tope; i >=0; i--)
    {
        printf("|%d \n",p->elementos[i]);
        
    }
    

}

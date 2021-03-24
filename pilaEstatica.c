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
int longitud(Pila *p);


int main(){
    // Declarando e inicializando una variable de tipo Pila
    Pila pila1={-1,{0}};
    insertar(&pila1,10);
    insertar(&pila1,20);
    insertar(&pila1,150);
    insertar(&pila1,200);
    imprimir(&pila1);
    printf("ELIMINANDO ...............");
    printf("El elemento eliminado es: %d \n",eliminar(&pila1));
   // printf("La pila esta vacia: %d",vacia(&pila1));
   imprimir(&pila1);
   printf("La longitud de la pila es: %d \n",longitud(&pila1));
 
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

int vacia(Pila *p){
    // 1 pila este vacia, 0 pila este llena
    int r = 0;
    if (p->tope == -1)
    {
        r = 1;
    }
    
    return r;

}

int eliminar(Pila *p){
    int dato;
    if (p->tope >-1)
    {
        dato = p->elementos[p->tope];
        p->tope--;
    }
    
    return dato;

}

int longitud(Pila *p){
    int x =0;
    
    if (p->tope>-1)
    {
        x=p->tope+1;
    
    }
    
 return x;
}



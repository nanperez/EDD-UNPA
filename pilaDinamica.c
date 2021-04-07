#include<stdio.h>
#include<stdlib.h>
// La estructura del nodo
typedef struct Nodo
{
    int dato;       // contenido del nodo
    struct Nodo *siguiente; // Apuntador auto-referenciable  
}Nodo;

Nodo *tope = NULL;
void insertar(int valor);
void imprimir();
int eliminar();
int vacia();

int main(){
    insertar(100);
    insertar(50);
    insertar(3);
    insertar(80);
    imprimir();
    printf("Elemento eliminado: %d",eliminar());
    imprimir();

}

void insertar(int valor){
    Nodo *nuevo;
    // reservamos espacio en memoria
    nuevo = (Nodo*)malloc(sizeof(Nodo));

    if (nuevo==NULL)
    {
       printf("No hay espacio en memoria.");
    }else{
        nuevo->dato = valor;
        nuevo->siguiente = tope;
        tope = nuevo;

    }
    

}

void imprimir(){
    Nodo *r = tope;
    printf("ELEMENTOS DE LA PILA \n");

    while(r!=NULL)
    {
       printf("|%d",r->dato);
       printf("\n");
       r = r->siguiente;
    }
    


}


int eliminar(){
    if (tope!=NULL)
    {
           int aux = tope->dato;
    Nodo *auxiliar = tope;
    tope = tope->siguiente;
    free(auxiliar);
    return aux;
    }else{
        return -1;
    }
    

}



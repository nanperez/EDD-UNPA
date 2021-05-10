#include<stdio.h>
#include<stdlib.h>

//declarar una estructura
typedef struct Nodo
{
    int elemento;
    struct Nodo *siguiente;
    
}Nodo;

Nodo *inicio = NULL;
Nodo *fin = NULL;


//operaciones
void insertar(int x);
void eliminar();
int vacia(); //1 - llena 0 - vacia
void imprimir();


int main(){
    // llamado a mis funciones
    insertar(10);
    insertar(5);
    insertar(3);
    imprimir();
    eliminar();
    eliminar();
    eliminar();
    printf("--------------------------------------------");
    imprimir();
    
}

void insertar(int x){
    Nodo *nuevo;
    // reservado el espacio e forma dinámica
    nuevo = malloc(sizeof(Nodo));
    nuevo->elemento = x;

    if (inicio==NULL)
    {
        inicio = nuevo;
        fin = nuevo;
    }else{
        fin->siguiente = nuevo;
        fin = nuevo;

    }
    

}

void eliminar(){
    // verificar si hay elementos que eliminar en la estructura de cola
    Nodo *aux  = inicio;
    if (inicio == NULL)
    {
        printf("NO HAY ELEMENTOS EN LA COLA");
        exit(EXIT_FAILURE);
    }else{
        // actualizando el apuntador del frente de la cola
        inicio = inicio->siguiente;
        free(aux);
    }
    


}

int vacia(){ //1 - llena 0 - vacia
    if (inicio == NULL)
    {
       return 0;
    }

    return 1;
    
}

void imprimir(){
    Nodo *aux = inicio;
    printf("ELEMENTOS DE LA ESTRUCTURA COLA \n");
    while (aux!=NULL)
    {
        printf("| %d",aux->elemento);
        aux = aux->siguiente;
    }
    

}




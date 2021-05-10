#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// Estructura que representa una cola
typedef struct cola
{
    int *elementos;     // arreglo que almacenará los elementos
    int maxE;    // capacidad máxima de elementos
    int frente;      //  controla el indice del frente
    int fin;       // controla el indice del fin de la cola
    int capacidad;       // capacidad actual de la cola
}Cola;
// Prototipo de las funciones
Cola* nuevaCola(int capacidad);
int longitud(Cola *ncola);
char* isEmpty(Cola *ncola);
void insertar(Cola *pt, int x);
void imprimir(Cola *c);
int frente(Cola *pt);
void eliminar(Cola *pt);

int main(){
    Cola *cola = nuevaCola(4);
    insertar(cola,50);
    insertar(cola,80);
    insertar(cola,3);
    insertar(cola,70);
    printf("Longitud  = %d\n", longitud(cola));
    eliminar(cola);
    eliminar(cola);
    insertar(cola,111);
    insertar(cola,1010);
    insertar(cola,5555);
    imprimir(cola);
  
}
 
// Función que ayuda a crear una nueva estructura de cola
Cola* nuevaCola(int capacidad)
{
    Cola *ncola = NULL;
    ncola = (Cola*)malloc(sizeof(Cola));

    ncola->elementos = (int*)malloc(capacidad * sizeof(int));
    ncola->maxE = capacidad;
    ncola->frente = 0;
    ncola->fin = -1;
    ncola->capacidad = 0;
 
    return ncola;
}
 
// Función que retorna el tamaño de la cola
int longitud(Cola *ncola) {
    return ncola->capacidad;
}
 
// función que permite saber si la cola está vacia o llena
// retorne 1 cuando esta vacia y 0 cuando está llena
char* isEmpty(Cola *ncola){
    char* cadena = malloc(10);
    if(!longitud(ncola))
    {
        return cadena = "Cola vacia";
    }

    return cadena="Cola llena";
    
}










// Función que inserta un elemento en la cola circular
void insertar(Cola *pt, int x)
{
    // Revisa si hay espacios disponibles
    if (longitud(pt) == pt->maxE)
    {
        printf("Overflow \n Programa Terminado\n");
        exit(EXIT_FAILURE);
    }
 
    printf("Insertando %d\t", x);
 
    pt->fin = (pt->fin + 1) % pt->maxE;    // circular queue
    pt->elementos[pt->fin] = x;
    pt->capacidad++;
 
    printf("frente = %d, fin = %d\n", pt->frente, pt->fin);
}

// Función que imprime el contenido de la cola circular
void imprimir(Cola *c){
   int j;
   for (int i = c->frente; i < c->frente + c->capacidad; i++){
    j = i % (c->maxE);
   
        printf("| %d |",c->elementos[j]);
    }

    printf("\n");
    

}

// Función que obtiene el elemento que está en el frente de la cola
int frente(Cola *pt)
{
    if (longitud(pt)==0)
    {
        printf("Underflow \n Programa Terminado\n");
        exit(EXIT_FAILURE);
    }
 
    return pt->elementos[pt->frente];
}

// Función que elimina un elemento de la cola
void eliminar(Cola *pt)
{
    // Verificar si existen elementos
    if (pt->capacidad==0)    // frente == fin
    {
        printf("Underflow \n Programa Terminado\n");
        exit(EXIT_FAILURE);
    }
 
   printf("Eliminando %d\t", frente(pt));
 
    pt->frente = (pt->frente + 1) % pt->maxE;  // cola circular
    pt->capacidad--;
 
    printf("frente = %d, fin = %d\n", pt->frente, pt->fin);
}



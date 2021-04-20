#include <stdio.h>
#include <stdlib.h>

 
typedef struct Nodo{
	int dato;
	struct Nodo *siguiente;
}Nodo;

Nodo *crearNodo();
void insertar(Nodo **t, int valor);
void eliminar();
void imprimir(Nodo *t);



int main(){
    // 3 torres
    // Crear e inicializar variables de tipo Nodo
    // * apuntador hacia una dirección de memoria
    // ** apuntador del apuntador
    Nodo *torre1 = NULL;
    Nodo *torre2 = NULL;
    Nodo *torre3 = NULL;

    // Paso de argumentos 
    // Paso por valor
    // Paso por referencia
    insertar(&torre1,10);
    insertar(&torre1,20);
    insertar(&torre1,50);

    insertar(&torre2,150);
    insertar(&torre3,500);
      printf("........TORRE 1.......");
    imprimir(torre1);
    printf("........TORRE 2.......");
    imprimir(torre2);
       printf("........TORRE 3.......");
    imprimir(torre3);




}

void insertar(Nodo **torre, int valor){

    Nodo *nuevo = NULL;
    nuevo = crearNodo();
    nuevo->dato = valor;
    nuevo->siguiente = NULL;
    // Indicar a que pila pertenece ese nodo
    // identificar si esa pila esta vacia o esta llena
    // Si esta vacía t = nuevo
    // si esta llena: tengo que actualizar el siguiente
    if (*torre==NULL)// Pila esta vacia
    {
      *torre = nuevo;
    }else{
       nuevo->siguiente = *torre;
       *torre = nuevo;
    }
    
    


}

Nodo *crearNodo(){
 return (Nodo*)malloc(sizeof(Nodo));
}

void imprimir(Nodo *torre){
    // torre1 x560
    while (torre!=NULL)
    {
       printf("%d \n",torre->dato);
       torre = torre->siguiente;
    }
    

}


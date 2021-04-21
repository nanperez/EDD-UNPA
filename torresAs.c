#include <stdio.h>
#include <stdlib.h>

 
typedef struct Nodo{
	int dato;
	struct Nodo *siguiente;
}Nodo;

Nodo *crearNodo();
void insertar(Nodo **t, int valor);
void eliminar(Nodo **t);
void imprimir(Nodo *t);
void movimiento(Nodo **origen, Nodo **destino, int disco);



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
    insertar(&torre1,3);
    insertar(&torre1,2);
    insertar(&torre1,1);
    imprimir(torre1);

    insertar(&torre2,150);
    insertar(&torre3,500);
      printf("........TORRE 1....... \n");
    imprimir(torre1);
    printf("........TORRE 2....... \n");
    imprimir(torre2);
       printf("........TORRE 3....... \n");
    imprimir(torre3);
     printf("........TORRE 1....... \n");
    eliminar(&torre1);
    imprimir(torre1);
  
 

   }


    




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

void eliminar(Nodo **torre){
    Nodo *aux = NULL;
    aux = *torre;

    if (*torre!=NULL)
    {
      *torre = aux->siguiente;
      aux ->siguiente = NULL;
      free(aux);
    }else{
      printf("No hay elementos en la torre \n");
    }
    

}


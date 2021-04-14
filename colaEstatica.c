#include<stdio.h>
#define MAX 100
typedef struct cola
{
    int frente; // indices cuando elimino
    int final;  // indices cuando agrego
    int elementos[MAX];
    
}Cola;

// Operaciones básicas de la Cola
void insertar(Cola *c, int valor);
int eliminar(Cola *c);
void imprimir(Cola *c);
void vacia(Cola *c);

int main(){
   // Crear una estructura de Cola
   Cola cola1; 
   // inicializar las variables de la estructura cola1
   cola1.frente = -1;
   cola1.final = 0;
   insertar(&cola1,10);
   insertar(&cola1,5);
   insertar(&cola1,80);
    imprimir(&cola1);
    printf("Elemento eliminado: %d \n",eliminar(&cola1));
    imprimir(&cola1);
    vacia(&cola1);
    eliminar(&cola1);
    eliminar(&cola1);
    imprimir(&cola1);
    vacia(&cola1);
    printf("----------------------------------");
    insertar(&cola1,1000);
    imprimir(&cola1);

}

void insertar(Cola *c, int valor){
    c->elementos[c->final]=valor;
    c->final++;

}

void imprimir(Cola *c){

    for (int i = c->frente+1; i < c->final; i++)
    {
       printf("| %d |",c->elementos[i]);
    }

    printf("\n");
    

}

int eliminar(Cola *c){
    int aux;
    c->frente++;
    aux = c->elementos[c->frente];
    return aux;

}

void vacia(Cola *c){
    if (c->frente+1 == c->final)
    {
        printf("Esta vacia");
    }else{
        printf("Hay elementos");
    }
    

}






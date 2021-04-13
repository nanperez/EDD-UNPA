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
int vacia(Cola *c);

int main(){
   // Crear una estructura de Cola
   Cola cola1; 
   // inicializar las variables de la estructura cola1
   cola1.frente = -1;
   cola1.final = 0;

}

void insertar(Cola *c, int valor){
    c->elementos[c->final]=valor;
    c->final++;

}


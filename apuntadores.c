#include <stdio.h>
#include <stdlib.h>

// doble apuntador- memoria dinámica
// Prototipo de las funciones 
void pasoSimple(int *val);
void pasoDoble(int **val);

int main(){
    // declarando un apuntador
    // reservé espacio en memoria de forma dinámica
    int *ap = (int*)malloc(sizeof(int)); 
    printf("DIRECCION MEMORIA ORIGINAL: %p \n",ap);
    // Paso por valor-copia de la variable
    pasoSimple(ap);
    // Paso por referencia-pasando la referencia exacta
    pasoDoble(&ap);

}

void pasoSimple(int *val){
    printf("Dame un valor: \n");
    scanf("%d",val);
    printf("DIRECCION PASO SIMPLE: %p \n",&val);

}

void pasoDoble(int **val){
    printf("Dame un valor: \n");
    scanf("%d",*val);
    printf("DIRECCION PASO DOBLE: %p \n",*val);
}





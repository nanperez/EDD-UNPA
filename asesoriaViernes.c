// ejercicio con arreglo

#include<stdio.h>
#include<stdlib.h>
// prototipo de mi función y definicion

int* llenadoArreglo(int *ap){
    for (int i = 0; i < 10; i++)
    {
       ap[i]=i*100;
    }
    return ap;

}

int main(){
    int *arr;   // declaracion del apuntador 
    // reservar espacion de forma dinámica
    arr = (int*)malloc(10*sizeof(int));
    // le asigno el llamado a la función
    arr = llenadoArreglo(arr);
    // imprimir el contenido del apuntador
    for (int i = 0; i < 10; i++)
    {
        printf("%d \n",arr[i]);
    }
     
}
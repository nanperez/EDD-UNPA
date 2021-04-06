#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    // Puedo usar la asignación dinamica de memoria
    int *arreglo;
    printf("Dame el tamaño del arreglo");
    scanf("%d",&n);
    // reservar espacio en memoria
    arreglo = (int*)malloc(n*sizeof(int));
    //arreglo = (int*)calloc(n,sizeof(int));
    // llenado del arreglo
    for (int i = 0; i < n; i++)
    {
        arreglo[i]=i+1;
    }
    // LIBERAR ESPACIO EN MEMORIA: free()
    free(arreglo);
    arreglo = NULL;
    // Redimensionar ese arreglo: realloc()
    //arreglo = realloc(arreglo,20*sizeof(int));
    // impresión del arreglo
    for (int i = 0; i < n; i++)
    {
        printf("%d \n",arreglo[i]);
    }
    
    



}


#include<stdio.h>
#define TAM 5

int sumaArreglo(int arr[]);
char validar6(int arr[], int val);
int main(){
    int i, arr[TAM],val;

    // Llenado del arreglo
    for (i = 0; i < TAM; i++)
    {
        printf("Valor %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < TAM; i++)
    {
        printf("%d \n",arr[i]);
    }
    
    printf("La suma es: %d",sumaArreglo(arr));
    printf("\n Valor a buscar:");
    scanf("%d",&val);
    printf("Resultado busqueda: %c",validar6(arr,val));
}

int sumaArreglo(int arr[]){
    int suma=0,i,actual;
    for (i = 0; i < TAM; i++){
        actual = arr[i];
        suma = suma + actual;
    }
    return suma;
}

char validar6(int arr[],int val){
    char r = 'N';
    for ( int i = 0; i < TAM; i++)
    {
        if (arr[i]==val)
        {
            r = 'S';
        }
        
    }
    return r;
}
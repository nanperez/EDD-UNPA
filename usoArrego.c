/* 
- Ejercicio con arreglos
- Autor: Nancy P.C.
- Enero 2021 */

#include<stdio.h>
#define TAM 5

int sumaArreglo(int arr[]);

int main(){
 // Declaración de un arreglo de tipo int
 int arr[TAM],i,suma=0;
// Llenado del arreglo
for (i = 0; i < TAM; i++)
{
    printf("Valor %d:",i);
    scanf("%d",&arr[i]);
   // suma = suma+arr[i];
}
// Llamado a la función
printf("La suma es: %d",sumaArreglo(arr));


}

int sumaArreglo(int arr[]){
    int i, suma=0;
    for ( i = 0; i < TAM; i++)
    {
        suma = suma+arr[i];
    }
    
return suma;

}
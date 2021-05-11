#include<stdio.h>
#include<stdlib.h>
// prototipo de función
void llenadoArreglo(int *arr, int inicio, int fin);
int sumaArreglo(int *arr,int i, int fin, int suma);

int main(){
    int longitud;
    printf("Longitud del arreglo: \n");
    scanf("%d",&longitud);

    //declarado el arreglo estatico
    int arreglo[longitud];
    // llamando a función para llenar el arreglo
    llenadoArreglo(arreglo,0,longitud);
    // suma de todos los elementos del arreglo
  
}

// función recursiva
void llenadoArreglo(int *arr, int inicio, int fin){
   if (inicio<fin)
   {
       printf("Dame un valor: ");
       scanf("%d",&arr[inicio]); 
       inicio++;
        // paso recursivo 
        llenadoArreglo(arr,inicio,fin);

   }
}

int sumaArreglo(int *arr,int i, int fin, int suma){
        if (i<fin)
        {
            suma = suma+arr[i];
            i = i+1;
            // paso recursivo
            return sumaArreglo(arr,i,fin,suma);
        }
     return suma;  
}



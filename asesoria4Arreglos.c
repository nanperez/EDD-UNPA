// ejercicio con arreglo

#include<stdio.h>

int main(){
    
    int arr[10]; 
    int suma = 0;

    // llenado del arreglo
  for (int i = 0; i < 10; i++)
  {
      printf("Dame un valor: \n");
      scanf("%d",&arr[i]);
      suma = suma+arr[i];
      
  }

  printf("La suma es: %d",suma);
  printf("El promedio del arreglo %d",suma/10);
    
  

}
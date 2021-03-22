#include<ctype.h>
#include<stdio.h>

int main(){
     char nombre[20];
     printf("Dame tu nombre:");
     scanf("%s",nombre);

     for (int i = 0; i < sizeof(nombre); i++)
     {
         nombre[i]=toupper(nombre[i]);
     }
     printf("Cadena despues de ser convertida: %s\n", nombre);




}
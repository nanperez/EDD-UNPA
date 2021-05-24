#include<stdio.h>
#include<stdlib.h>

int main(){
// variable de tipo apuntado FILE
FILE *archivo;
char caracter; // solamente un caracter a la vez
// Apertura del fichero
// nombre, modo
archivo = fopen("miArchivo.txt","r");
// Consultar y mostrar el contenido
if (archivo==NULL)
{

  printf("No se puede aperturar el fichero");
}else{
    printf("El contenido del fichero es: \n");
    while (feof(archivo)==0)
    {
        caracter = fgetc(archivo);
        printf("%c",caracter);
    }
    
}
// Hacer el cierre del fichero
fclose(archivo);



}
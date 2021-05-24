// Lectura y escritura
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *archivo;
    //char *cadena = (char*)malloc(100*sizeof(char));
    // Aperturar el fichero
    char caracter; // almacenar caracter por caracter
    archivo = fopen("archivoN.txt","a");
    printf("Escribe una caracter");
    scanf("%c",&caracter);
    // Inserción en un archivo (escritura en el archivo)
    fputc(caracter,archivo);
    fputc('N',archivo);
    fputc(66,archivo);

    // cerrer el fichero
    fclose(archivo);
    
   
    



}
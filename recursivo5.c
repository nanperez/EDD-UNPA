// Librerias
#include<stdio.h>       // lectura y escritura de datos
#include<string.h>   // funciones para el manejo de cadena de caracteres
#include<stdlib.h>   // funciones de la asignación dinámica de memoria
// prototipo de la función recursiva
int contarVocales(char *cadena, int longitud, int i, int cont);

int main(){
    // Leer desde teclado la cadena de caracteres
    //char cadena[100]; // declaración estática
    char *cadena;
    int longitud;
    cadena = (char*)malloc(sizeof(char));  // reservando memoria dinámica
    printf("Dame la cadena de caracteres: \n");
    scanf("%[^\n]s",cadena);
    longitud = strlen(cadena);
    //printf("La longitud es %d",longitud);
    // Llamado a la función recursiva
    
    printf("La cantidad de vocales: %d", contarVocales(cadena,longitud,0,0));
 
}

int contarVocales(char *cadena, int longitud, int i, int cont){
  
    if (i<longitud) // paso recursivo
    {
        
        if ((cadena[i]=='a') || (cadena[i]=='e') || (cadena[i]=='i') || (cadena[i]=='o') || (cadena[i]=='u'))
        {
            printf("ebtro");
            cont++;
            i++;
            return contarVocales(cadena,longitud,i,cont);
        }else{
            i++;
            return contarVocales(cadena,longitud,i,cont);
        }
        
       
    }else{
          return cont;
    }
      


}



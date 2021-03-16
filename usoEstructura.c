/* Ejercicio con estructuras
Autor: Nancy Pérez Castro
Materia: Estructuras de Datos
Fecha: Marzo 2021
Estudiante: char[50] nombre, int edad, float estatura
*/
// Declarar la estructura
#include<stdio.h>
#include<string.h>
struct estudiante
{
  char nombre[30];
  int edad;
  float estatura;
};

//Función principal
int main(){
    // Declarar e inicializar una variable de estrtuctura
    struct estudiante e1={"Juan",45,1.80};

    printf("Nombre: %s \n",e1.nombre);
    printf("Edad: %d \n",e1.edad);
    printf("Estatura: %f \n",e1.estatura);
    
    
    
    
    // Inicializar miembro por miembro de una variable de estructura
    struct estudiante e2;
    // asignación de variables tipo cadena de caracteres
    strcpy(e2.nombre,"Nancy");
    e2.edad = 33;
    e2.estatura = 1.55;
    
    printf("Nombre: %s \n",e2.nombre);
    printf("Edad: %d \n",e2.edad);
    printf("Estatura: %f \n",e2.estatura);







    // Leer desde teclado cada miembro de una variable de estructura
    struct estudiante e3;
    printf("Dame el nombre del(a) estudiante:");
    // primera forma para leer cadena de caracteres
    //scanf("%s",e3.nombre);
    // segunda forma para leer cadena de caracteres
    //gets(e3.nombre);
    // tercera forma para leer cadena de caracteres
    fgets(e3.nombre,30,stdin);
    printf("Dame la edad: ");
    scanf("%d",&e3.edad);
    printf("Dame la estatura:");
    scanf("%f",&e3.estatura);

    printf("El nombre del estudiante e3 es: %s",e3.nombre);
    printf("Edad de e3: %d",e3.edad);
    printf("Estatura de e3: %f",e3.estatura);

    

}













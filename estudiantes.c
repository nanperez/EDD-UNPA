#include <stdio.h>
int main()
{
 
    char Estudiantes[5];
    for (size_t i = 0; i < 5; i++)
    {
        while (getchar()!= '\n');  /* Vaciar el buffer de entrada desde teclado*/
        printf("Introduce tu nombre completo: ");
        fgets(Estudiantes[i], sizeof(Estudiantes[i]), stdin);  // read string
        printf("Nombre completo: ");
        puts(Estudiantes[i]);    // display string
    }
    

    
}
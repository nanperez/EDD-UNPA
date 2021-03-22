#include <stdio.h>


void escribe(Fecha f);
    printf("Fecha: %d / %s / %d \n",f.dia,f.mes,f.anyo);
}

int main()
{
    typedef struct fecha
    {
        int dia;
        int mes;
        int anyo;
        char mes[10];
    } Fecha;

    ff = {21,2021,"MARZO"};
    escribe(ff);
    return 1;
}
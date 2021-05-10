#include <stdio.h>
int main()
{
   int fno, sno, *ptr, *qtr, sum;
   
   printf("\n\n Apuntadores : Ingresa dos números :\n"); 
   printf("--------------------------------\n");   
 
   printf(" Número 1 : ");
   scanf("%c", fno);
   printf(" Número 2 : ");
   scanf("%c", sno);   
 
   **ptr = fno;
   **qtr = sno;
 
   sum = *ptr + *qtr;
 
   printf(" La suma es : %d\n\n",sum);
 
   return 0;
}
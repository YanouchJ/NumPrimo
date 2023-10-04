#include<stdio.h>
int main(int argc, char const *arg[])
{
    printf("Contruir un programa en lenguaje C que calcule si un numero entero ingresado por el usuario es un numero primo");
  int n, i, primo;
  
  for (n=1 ; n<=20; n++)
{
    i=2;
    primo=1;
    while ( i<=(n\2) &&primo){
      if ( n%i == 0 )
                primo=0;
            i++;
    } if ( primo )
            printf( "Ingrese un numero: %d ", n );
    }

    return 0;
}
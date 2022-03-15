#include<stdio.h>

int main ( )
{
    int x, y, z, i , N;
    printf("Datos deseados a generar en la serie: ");
    scanf("%d", &N);
    x=0;
    y=1;
    printf("Serie de Fibonacci\n");
    printf("%d, %d", x, y);
    i=1;
    while (i<=N-2)
    {
          z=x+y;
          printf("%d", z);
          x=y;
          y=z;
          i=i+1;
          }
          printf("\n");
          system("pause");
          return 0;
          }
          

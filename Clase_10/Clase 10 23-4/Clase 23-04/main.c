#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matriz[2][3];
    int i, j; //dato, dato1;

    for(i=0;i<2;i++)//llena primero las filas
    {
        for(j=0;j<3;j++)//llena las columnas
        {
            printf("M[%d][%d]: ",i,j);
            scanf("%f",&matriz[i][j]);
        }
    }

    for(i=0;i<2;i++)//muestra primero las filas
    {
        for(j=0;j<3;j++)//muestra las columnas
        {
            printf("%.2f",matriz[i][j]);
            /*dato = sizeof(matriz[i]);
            dato1 = sizeof(matriz[j]);
            printf("%d %d", dato, dato1);
            */
        }
        printf("\n");
    }
    return 0;
}

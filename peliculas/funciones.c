#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define VACIO 0
#define ACTIVO 1
#define BAJA -1

int menu (char texto[],int rangominimo,int rangomaximo)
{
    int opcion=0, aux=0;
    char buffer[4000];
    printf("%s",texto);
    printf("Opcion: ");

}

int contardirector (struct Pelicula arrayDirector[], int largo,int id)
{
    int i;
    int j=0;
    for(i=0;i<largo;i++)
    {
        if(arrayDirector[i].idDirector==id)
        {
            j++;
        }
    }
    return j;
}

int inciarArray (struct Pelicula array[])
{
    int i;
    for(i=0;i<10;i++)
    {
        array[i].idEstado=VACIO;
    }
    return 0;
}

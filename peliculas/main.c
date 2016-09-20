#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define VACIO 0
#define ACTIVO 1
#define BAJA -1






int main()
{
    int i;
    char seguir='s';
    int opcion=0;

    struct Pelicula arrayPeliculas[10];

    inciarArray(arrayPeliculas[10].idEstado);

    for(i=0;i<10;i++)
    {
        printf("%d",arrayPeliculas[i].idEstado);
    }
    while(seguir=='s')
    {

        printf("1- ALTAS PELÍCULAS\n");
        printf("2- MODIFICAR DATOS DE UNA PELÍCULA\n");
        printf("3- BAJA DE PELÍCULA\n");
        printf("4- NUEVO DIRECTOR\n");
        printf("5- ELIMINAR DIRECTOR\n");
        printf("6- INFORMAR\n");
        printf("7- LISTAR\n");
        printf("8- SALIR\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                seguir = 'n';
                break;
        }
    }
   peliculasPorDirector aux[10];


    strcpy(arrayPeliculas[0].titulo,"Batman");
    arrayPeliculas[0].idPelicula=100;
    arrayPeliculas[0].idNacionalidad=01;
    arrayPeliculas[0].idDirector=48;
    arrayPeliculas[0].idEstado='a';
    strcpy(arrayPeliculas[1].titulo,"Superman");
    arrayPeliculas[1].idPelicula=101;
    arrayPeliculas[1].idNacionalidad=01;
    arrayPeliculas[1].idDirector=49;
    arrayPeliculas[1].idEstado='a';


    struct Director arrayDirector[10];
    arrayDirector[0].idDirector=48;
    arrayDirector[0].idEstado='a';
    arrayDirector[0].idNacionalidad=01;
    strcpy(arrayDirector[0].nombre,"Vespignani");
    arrayDirector[1].idDirector=49;
    arrayDirector[1].idEstado='a';
    arrayDirector[1].idNacionalidad=01;
    strcpy(arrayDirector[1].nombre,"Ramirez");

 for(i=0;i<10;i++)
 {

     aux[i].cant=contardirector(arrayPeliculas,10,arrayDirector[i].idDirector);
     aux[i].idDir=arrayDirector[i].idDirector;

 }



//    struct Estado arrayEstado[3];
//    arrayEstado[0].idEstado='a';
//    arrayEstado[1].idEstado='i';
//    arrayEstado[2].idEstado='v';
//    strcpy(arrayEstado[0].descripcion,"Activo");
//    strcpy(arrayEstado[1].descripcion,"Inactivo");
//    strcpy(arrayEstado[2].descripcion,"Vacio");
//
//
//    struct Nacionalidad arrayNacionalidad[10];
//    arrayNacionalidad[0].idNacionalidad=01;
//    strcpy(arrayNacionalidad[0].descripcion,"Extranjera");
//    arrayNacionalidad[0].idEstado='a';
//
    for(i=1;i<10;i++)
    {
        arrayPeliculas[i].idEstado='v';
    }



        return 0;
}


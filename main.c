#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pelicula
{
        int idPelicula;
        char titulo[255];
        int idDirector;
        int idNacionalidad;
        char idEstado;

};

struct Director
{
        int idDirector;
        char nombre[50];
        int idNacionalidad;
        char idEstado;


};

struct Estado
{
    char idEstado;
    char descripcion[50];

};

struct Nacionalidad
{
    int idNacionalidad;
    char descripcion[50];
    char idEstado;
};


int main()
{
    int i;

    struct Pelicula arrayPeliculas[10];
    strcpy(arrayPeliculas[0].titulo,"Batman");
    arrayPeliculas[0].idPelicula=100;
    arrayPeliculas[0].idNacionalidad=01;
    arrayPeliculas[0].idDirector=48;
    arrayPeliculas[0].idEstado='a';


    struct Director arrayDirector[10];
    arrayDirector[0].idDirector=48;
    arrayDirector[0].idEstado='a';
    arrayDirector[0].idNacionalidad=01;
    strcpy(arrayDirector[0].nombre,"Vespignani");

    struct Estado arrayEstado[3];
    arrayEstado[0].idEstado='a';
    arrayEstado[1].idEstado='i';
    arrayEstado[2].idEstado='v';
    strcpy(arrayEstado[0].descripcion,"Activo");
    strcpy(arrayEstado[1].descripcion,"Inactivo");
    strcpy(arrayEstado[2].descripcion,"Vacio");


    struct Nacionalidad arrayNacionalidad[10];
    arrayNacionalidad[0].idNacionalidad=01;
    strcpy(arrayNacionalidad[0].descripcion,"Extranjera");
    arrayNacionalidad[0].idEstado='a';

    for(i=1;i<10;i++)
    {
        arrayPeliculas[i].idEstado='v';
    }



        return 0;
}


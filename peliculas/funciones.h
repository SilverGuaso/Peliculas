typedef struct
{
    int idDir;
    int cant;
}peliculasPorDirector;

struct Pelicula
{
        int idPelicula;
        char titulo[255];
        int idDirector;
        int idNacionalidad;
        int idEstado;

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
int contardirector (struct Pelicula arrayDirector[], int largo,int id);
int inciarArray (struct Pelicula array[]);

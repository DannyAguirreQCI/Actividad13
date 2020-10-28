#include <iostream>
#include "arreglo.h"
using namespace std;

int main()
{
    ArregloDinamico<string> arreglo;

    // agregar 4 string's a arreglo usando insertar_final e insersar_inicio()
    arreglo.insertar_final("Dissidia");
    arreglo.insertar_final("Final");
    arreglo.insertar_inicio("Fantasy");
    arreglo.insertar_inicio("Opera");

    // mostrar() los elementos de arreglo
    for (size_t i=0; i<arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;

    // insertar() el elemento en la posición 2
    arreglo.insertar("100",2);
    
    // mostrar los elementos de arreglo
    for (size_t i=0; i<arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;

    // eliminar_inicio() y eliminar_final()
    arreglo.eliminar_inicio();
    arreglo.eliminar_final();

    // eliminar() el elemento de la posición 1
    arreglo.eliminar(1);

    // mostrar() los elementos de arreglo
    for(size_t i = 0; i < arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;

    return 0;
}

        /*Ejemplo video 13
    for(int i = 0; i < 10; i++)
    {
        arreglo.insertar_final(i);
    }*/

    /*Codigo Actividad 12
    ArregloDinamico arreglo;
    arreglo.insertar_final("Danny");
    arreglo.insertar_final("Aguirre");
    arreglo.insertar_final("Vazquez");
    arreglo.insertar_final("Dissidia");
    arreglo.insertar_final("Final");
    arreglo.insertar_final("Fantasy");
    arreglo.insertar_final("Opera");
    arreglo.insertar_final("Omnia");

    for (size_t i=0; i<arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" ";
    }

    cout<<endl;

    arreglo.insertar_inicio("Brave");
    arreglo.insertar_inicio("Exvius");

    for (size_t i=0; i<arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" ";
    }*/
/*
*========================================================
* Practica 1: Hormiga de Langton
* Asignatura: Algoritmo y Estructura de Datos Avanzados (AEDA)
* Autor: Joel Francisco Escobar Socas
* Contacto: alu0101130408@ull.edu.es
* Grado: Ingeniería Informática (ETSII)
*========================================================
*/
#include "hormiga.h"
#include  "mundo.h"

int main(){
    int n,m;
    std::cout <<" Introduzca la dimensiones del mundo\n";
    std::cout <<"Filas:";
    std::cin >> n;
    std::cout << "Columnas:";
    std::cin>> m;
    
    Mundo Tablero(n,m);

}
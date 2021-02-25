/*
*========================================================
* Practica 1: Hormiga de Langton
* Asignatura: Algoritmo y Estructura de Datos Avanzados (AEDA)
* Autor: Joel Francisco Escobar Socas
* Contacto: alu0101130408@ull.edu.es
* Grado: Ingeniería Informática (ETSII)
*========================================================
*/#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Mundo
{
private:
    int n_, m_, pasos_;
    int xinicial, yinicial;
    std::vector<std::vector<int>> mapa;


public:
    Mundo(int n, int m);
    ~Mundo(void);

    int get_n_();
    int get_m_();
    int get_xinicial();
    int get_yinicial();

};



#include "mundo.h"

//Constructor por defecto
Mundo::Mundo(int n, int m):
    n_(n),
    m_(m)
{
    mapa.resize(n_);
    for(int i=0; i<n_; i++) {
        mapa[i].resize(m_);
    }

    for(int i=0; i<n_; i++){
     for(int j=0; j<m_; j++){
         mapa[i][j] = 0;
     }
    }
}

Mundo::~Mundo(void){}


// Getters
int Mundo::get_n_() {
    return n_;
}
int Mundo::get_m_() {
    return m_;
}
int Mundo::get_xinicial() {
    return xinicial;
}
int Mundo::get_yinicial(){
    return yinicial;
}


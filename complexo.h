#pragma once

#include <iostream>
using namespace std;

class numeroComplexo {
    public:
        float real;
        float imaginario;
        char sinal;

        void cria (float real, float imaginario);
        void imprimeComplexo ();

        void soma (numeroComplexo a, numeroComplexo b);
        void subtracao (numeroComplexo a, numeroComplexo b);

        // funçao de representar polar
        // funçao de representar retangular

};

/*
void numeroComplexo::cria (float r, float i) {
    real = r;
    sinal = (i > 0) ? '+' : '-';
    imaginario = (i > 0) ? i : -i;
} 

void numeroComplexo::imprimeComplexo() {
    cout << real << sinal << imaginario << endl;
}

void numeroComplexo::soma (numeroComplexo a, numeroComplexo b) {
    float tmpImgA = (a.sinal == '+') ? a.imaginario : -a.imaginario;
    float tmpImgB = (b.sinal == '+') ? b.imaginario : -b.imaginario;

    real = a.real + b.real;
    sinal = ((tmpImgA + tmpImgB) > 0) ? '+' : '-';
    imaginario = ((tmpImgA + tmpImgB) > 0) ? (tmpImgA + tmpImgB) : -(tmpImgA + tmpImgB);
}

void numeroComplexo::subtracao (numeroComplexo a, numeroComplexo b) {
    float tmpImgA = (a.sinal == '+') ? a.imaginario : -a.imaginario;
    float tmpImgB = (b.sinal == '+') ? b.imaginario : -b.imaginario;

    real = a.real - b.real;
    sinal = ((tmpImgA - tmpImgB) > 0) ? '+' : '-';
    imaginario = ((tmpImgA - tmpImgB) > 0) ? (tmpImgA - tmpImgB) : -(tmpImgA - tmpImgB);
}
*/
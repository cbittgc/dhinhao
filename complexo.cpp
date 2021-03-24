#include <iostream>
#include "complexo.h"

using namespace std;

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
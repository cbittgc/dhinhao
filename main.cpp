#include <iostream>
#include <bits/stdc++.h> 
#include "complexo.h"

using namespace std;

int main (void) {
    float real;
    float imag;
    numeroComplexo a, b, c, d;
    
    cout << "tester" << endl;

    cout << "enter complex a:" << endl;
    cout << endl << "real:";
    cin >> real;

    cout << endl << "imag:";
    cin >> imag;

    a.cria(real,imag);
    cout << endl << endl << endl;
    ///////////////////////
    cout << "enter complex b:" << endl;
    cout << endl << "real:";
    cin >> real;

    cout << endl << "imag:";
    cin >> imag;

    b.cria(real,imag);
    cout << endl << endl << endl;
    ///////////////////////

    cout << "printing" << endl << endl << endl;
    cout << "a:" << endl;
    a.imprimeComplexo();
    cout << "b:" << endl;
    b.imprimeComplexo();
    cout << "c = a+b:" << endl;
    c.soma(a,b);
    c.imprimeComplexo();
    cout << "d = a-b:" << endl;
    d.subtracao(a,b);
    d.imprimeComplexo();

    return 0;
}
/*#include <iostream>
#include "ncomplexo.h"

using namespace std;

int main() 
{
    n_complexo a = iniciar(10, 1);
    imprimir(a);
    n_complexo b = iniciar(14, 3);
    imprimir(b);
    n_complexo c = iniciar(9, 0);
    imprimir(c);

    n_complexo d = soma(a, b);
    imprimir(d);

    copia(&a, b);
    imprimir(a);

    isreal(a);
    isreal(c);
    
    return 0;
}

n_complexo iniciar(float r, float im){
    n_complexo x;
    x.real = r;
    x.img = im;
    return x;
}

void copia(n_complexo* destino, n_complexo origem){
    destino->real = origem.real;
    destino->img = origem.img;
    return;
}

n_complexo soma(n_complexo num1, n_complexo num2){
    n_complexo soma;
    soma.real = num1.real + num2.real;
    soma.img = num1.img + num2.img;
    return soma;
}

void imprimir(n_complexo num){
    cout << "num: " << num.real << " + " << num.img << "i" << endl;
    return;
}

void isreal(n_complexo num){
    if (num.img == 0){
        cout << "é real\n";
    }
    else{
        cout << "é complexo\n";
    }
    return;
}
*/
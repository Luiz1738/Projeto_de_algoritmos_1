/*#include <iostream>
#include "conta.h"

using namespace std;

int main() 
{
    conta conta_teste = iniciar(123, 1000.00);
    imprimir(conta_teste);
    saque(&conta_teste, 1190.78);
    imprimir(conta_teste);
    deposito(&conta_teste, 198.8);
    imprimir(conta_teste);
    
    return 0;
}

conta iniciar(int num, double s){
    conta c;
    c.numero = num;
    c.saldo = s;
    return c;
}

void saque(conta* c, double valor){
    c->saldo -= valor;
    return;
}

void deposito(conta* c, double d){
    c->saldo += d;
    return;
}

void imprimir(conta c){
    cout << c.numero << " " << c.saldo << endl;
    return;
}
*/
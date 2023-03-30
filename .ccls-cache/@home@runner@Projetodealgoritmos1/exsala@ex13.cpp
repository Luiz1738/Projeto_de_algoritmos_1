#include <iostream>
#include "agenda.h"

using namespace std;

int main() 
{
    contato x = inicializar("Max", "Galpão do lider", 100);
    imprimir(x);

    altera_nome(&x, "Maximilien");
    imprimir(x);

    altera_num(&x, 101);
    imprimir(x);

    
    return 0;
}

contato inicializar(char* novo_nome, char* novo_endereco, int novo_num){
    contato c_novo;
    c_novo.nome = novo_nome;
    c_novo.endereco = novo_endereco;
    c_novo.numero = novo_num;
    return c_novo;
}

void imprimir(contato c){
    cout << "nome: " << c.nome << ". Endereço: " << c.endereco << ". Número: " << c.numero << endl;
    return;
}

void altera_nome(contato* c, char* novo_nome){
    c->nome = novo_nome;
    return;
}

void altera_num(contato* c, int novo_num){
    c->numero = novo_num;
    return;
}

void checa_contato(char* nome_alvo, contato c){
    if(c.nome == nome_alvo){
        cout << "Existente." << endl;
    }
    else{
        cout << "Inexistente." << endl;
    }
}

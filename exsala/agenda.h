
typedef struct{
    char* nome;
    char* endereco;
    int numero;
}contato;

contato inicializar(char* novo_nome, char* novo_endereco, int novo_num);
void imprimir(contato c);
void altera_nome(contato* c, char* novo_nome);
void altera_num(contato* c, int novo_num);
void checa_contato(char* nome_alvo, contato c);
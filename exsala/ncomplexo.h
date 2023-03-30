
typedef struct{
    float real;
    float img;
}n_complexo;

n_complexo iniciar(float r, float im);
void copia(n_complexo* destino, n_complexo origem);
n_complexo soma(n_complexo num1, n_complexo num2);
void imprimir(n_complexo num);
void isreal(n_complexo num);

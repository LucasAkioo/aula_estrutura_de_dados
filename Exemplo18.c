#include <stdio.h>
#include <stdlib.h>

// Definindo os DADOS de Tipo Abstrato de Dados (TAD) Fracao

typedef struct {
    int numerador;
    int denominador;
} Fracao;

// Definindo as OPERAÇÔES o TAD Fração

Fracao criarFracao(int N, int D);
Fracao simpificarFracao(Fracao F);
void exibirFracao(Fracao F);


// Implementação da função principal (main)

int main(){

    Fracao F1 = criarFracao(3, 7);
    exibirFracao(F1);

    Fracao F2 = criarFracao(12, 20);
    exibirFracao(F2);

    Fracao F3 = criarFracao(-15, 18);
    exibirFracao(F3);

    Fracao F4= criarFracao(6, 0);
    exibirFracao(F4);

    return 0;
}

Fracao criarFracao(int N, int D) {

    if (D == 0) {
        printf ("ERRO: não existe fração com denominador ZERO!\n");
        exit(1);
    }
    

    Fracao F;

    F.numerador = N;
    F.denominador = D;

    return F;
}

void exibirFracao(Fracao F){

    printf("%d / %d \n", F.numerador, F.denominador);
}

int calcularMDC(int A, int B){

    int resto = A % B;

    while (resto != 0){
        int calcularMDC;
    }
    
}

Fracao simpificarFracao(Fracao F){

    int mdc = calcularMDC(F.numerador, F.denominador);

    F.numerador = F.numerador / mdc;
    F.denominador = F.denominador / mdc;
}
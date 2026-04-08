#include <stdio.h>
#include <stdlib.h>

int main() {

    system("cls");

    FILE * Arq = fopen("bd.txt", "r"); // Abrir bt.txt para LEITURA

    if(Arq == NULL) {
        printf("ERRO: ponteiro de arquivo não inicializado!\n");
        exit(1);
    }

    fclose(Arq);
    
    return 0;

}
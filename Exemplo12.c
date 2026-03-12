#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    FILE * in = fopen("dados.csv", "r");
    if(in == NULL) {
        printf("ERRO: não foi possível abrir o arquivo para leitura!\n");
        exit(1);
    }

    char Buffer[100];
    fscanf(in, "%[^\n]\n", Buffer);

    // Chegamos nos dados das pessoas!!!

    int ID; // 1ª coluna do arquivo CSV
    char Nome[100]; // 2ª coluna
    int Idade; // Última coluna (antes do \n)

    int Contador = 0;

    while(fscanf(in, "%d,%[^,],%d\n", &ID, Nome, &Idade) == 3) {

        printf("%d \t %s \t %d \n", ID, Nome, Idade);
        if(Idade < 30) Contador = Contador + 1;

    }

    printf("\nO número de pessoa com idade menor do que 30 anos é %d.\n", Contador);

    fclose(in);
    return 0;

}
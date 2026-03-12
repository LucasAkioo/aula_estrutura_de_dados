#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    FILE * in = fopen("STJ.csv", "r");
    if(in == NULL) {
        printf("ERRO: não foi possível abrir o arquivo para leitura!\n");
        exit(1);
    }

    char Buffer[10000];
    fscanf(in, "%[^\n]\n", Buffer);

    printf("%s", Buffer);

    // Chegamos nos dados das pessoas!!!

    int Contador = 0;

    while(fscanf(in, "%[^\n]\n", Buffer) == 1) {

        Contador = Contador + 1;

    }

    printf("\nO número de pessoa na base de dados é %d.\n", Contador);

    fclose(in);
    return 0;

}
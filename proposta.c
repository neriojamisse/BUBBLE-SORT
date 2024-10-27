#include <stdio.h>
#include <string.h>

#define MAX 5

struct Estudante {
    char nome[50];
    int idade;
    float nota;
};

void trocar(struct Estudante *a, struct Estudante *b) {
    struct Estudante temp = *a;
    *a = *b;
    *b = temp;
}


void bubbleSort(struct Estudante estudantes[], int tamanho, char criterio) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            int trocarElementos = 0;

           
            if (criterio == 'n') { 
                if (strcmp(estudantes[j].nome, estudantes[j + 1].nome) > 0) {
                    trocarElementos = 1;
                }
            } else if (criterio == 'i') { 
                if (estudantes[j].idade > estudantes[j + 1].idade) {
                    trocarElementos = 1;
                }
            } else if (criterio == 'o') { 
                if (estudantes[j].nota > estudantes[j + 1].nota) {
                    trocarElementos = 1;
                }
            }

            if (trocarElementos) {
                trocar(&estudantes[j], &estudantes[j + 1]);
            }
        }
    }
}

void imprimirEstudantes(struct Estudante estudantes[], int tamanho) {
    printf("Lista de Estudantes:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Nome: %s, Idade: %d, Nota: %.2f\n", estudantes[i].nome, estudantes[i].idade, estudantes[i].nota);
    }
}

int main() {
    
    struct Estudante estudantes[MAX] = {
        {"Ana", 20, 85.5},
        {"Bruno", 22, 78.0},
        {"Carlos", 21, 92.3},
        {"Diana", 20, 88.9},
        {"Eduardo", 23, 76.5}
    };

    char criterio;
    
    printf("Escolha o criterio de ordenacao:\n");
    printf("'n' para nome, 'i' para idade, 'o' para nota: ");
    scanf(" %c", &criterio);

    printf("\nAntes da ordenacao:\n");
    imprimirEstudantes(estudantes, MAX);

    bubbleSort(estudantes, MAX, criterio);

    printf("\nDepois da ordenacao:\n");
    imprimirEstudantes(estudantes, MAX);

    return 0;
}

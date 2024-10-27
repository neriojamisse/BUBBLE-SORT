# ALGORITMO DE ORDENACAO

# Introdução

Este projeto contém um exercício em C, one e implementado o algoritmo de pesquisa bubble sort, cuja finalidade e organizar a lista dos estudantes dentro dum array de estruduras com os seguintes paramentros: nome, idade e nota. 

---

## Pesquisa Linear

```bash
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
```
<img src="images\Screenshot (25).png" alt="Console" width="300" height="300">



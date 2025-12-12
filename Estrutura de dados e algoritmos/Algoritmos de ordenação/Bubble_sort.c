#include <stdio.h>

// Função do Bubble Sort
void bubbleSort(int vet[], int n) {
    int i, j, temp;
    int trocou;

    for (i = 0; i < n - 1; i++) {
        trocou = 0; // Para otimização: checar se houve troca

        for (j = 0; j < n - i - 1; j++) {
            if (vet[j] > vet[j + 1]) {
                // Troca os elementos
                temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
                trocou = 1;
            }
        }

        // Se nenhuma troca ocorreu, o vetor já está ordenado
        if (!trocou) {
            break;
        }
    }
}

int main() {
    int vet[] = {5, 1, 4, 2, 8};
    int n = sizeof(vet) / sizeof(vet[0]);

    bubbleSort(vet, n);

    printf("Vetor ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}

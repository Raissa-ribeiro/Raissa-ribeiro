#include <stdio.h>

int main() {
    // 1. Declaração do vetor original de 10 posições (audiência de músicas - streams)
    int original[10] = {1500, 3200, 850, 12000, 4300, 950, 6400, 2100, 15000, 4100};
    int audiencia_crescente[10];
    int audiencia_decrescente[10];
    int i, j, temp;
    int tamanho = 10;

    // Copiando os dados para arrays de trabalho para preservar as diferentes exibições
    for (i = 0; i < tamanho; i++) {
        audiencia_crescente[i] = original[i];
        audiencia_decrescente[i] = original[i];
    }

    // ==========================================
    // 2. EXIBINDO O VETOR ORIGINAL (NÃO ORDENADO)
    // ==========================================
    printf("=== 1. AUDIENCIA ORIGINAL (NAO ORDENADA) ===\n");
    for (i = 0; i < tamanho; i++) {
        printf("Musica %d: %d streams\n", i + 1, original[i]);
    }
    printf("\n");

    // ==========================================
    // 3. ORDENAÇÃO CRESCENTE (Bubble Sort)
    // ==========================================
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (audiencia_crescente[j] > audiencia_crescente[j + 1]) {
                temp = audiencia_crescente[j];
                audiencia_crescente[j] = audiencia_crescente[j + 1];
                audiencia_crescente[j + 1] = temp;
            }
        }
    }

    // Exibindo o vetor crescente
    printf("=== 2. AUDIENCIA ORDENADA (CRESCENTE) ===\n");
    for (i = 0; i < tamanho; i++) {
        printf("Musica %d: %d streams\n", i + 1, audiencia_crescente[i]);
    }
    printf("\n");

    // ==========================================
    // 4. ORDENAÇÃO DECRESCENTE (Bubble Sort)
    // ==========================================
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (audiencia_decrescente[j] < audiencia_decrescente[j + 1]) {
                temp = audiencia_decrescente[j];
                audiencia_decrescente[j] = audiencia_decrescente[j + 1];
                audiencia_decrescente[j + 1] = temp;
            }
        }
    }

    // Exibindo o vetor decrescente
    printf("=== 3. AUDIENCIA ORDENADA (DECRESCENTE) ===\n");
    for (i = 0; i < tamanho; i++) {
        printf("Musica %d: %d streams\n", i + 1, audiencia_decrescente[i]);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int primeiro, segundo, terceiro;
    int primeiro_copy, segundo_copy, terceiro_copy;
    // Leitura dos valores
    scanf("%d %d %d", &primeiro, &segundo, &terceiro);
    primeiro_copy = primeiro;
    segundo_copy = segundo;
    terceiro_copy = terceiro;

    // Ordenação dos valores
    int temp;
    if (primeiro > segundo) {
        temp = primeiro;
        primeiro = segundo;
        segundo = temp;
    }
    if (segundo > terceiro) {
        temp = segundo;
        segundo = terceiro;
        terceiro = temp;
    }
    if (primeiro > segundo) {
        temp = primeiro;
        primeiro = segundo;
        segundo = temp;
    }

    // Saída dos valores ordenados
    printf("%d\n%d\n%d\n\n", primeiro, segundo, terceiro);

    // Saída dos valores na sequência original
    printf("%d\n%d\n%d\n", primeiro_copy, segundo_copy, terceiro_copy);

    return 0;
}

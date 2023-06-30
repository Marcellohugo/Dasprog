#include <stdio.h>
#include <string.h>

int countWords(char sentence[]) {
    int count = 0;
    int length = strlen(sentence);

    // Mengabaikan spasi di awal kalimat
    while (sentence[0] == ' ') {
        strcpy(sentence, sentence + 1);
        length--;
    }

    // Menghitung jumlah kata
    for (int i = 0; i < length; i++) {
        if (sentence[i] == ' ' && sentence[i + 1] != ' ') {
            count++;
        }
    }

    // Mengabaikan spasi di akhir kalimat
    if (sentence[length - 1] != ' ') {
        count++;
    }

    return count;
}

int main() {
    char sentence[100];
    printf("Masukkan kalimat: ");
    fgets(sentence, sizeof(sentence), stdin);

    int wordCount = countWords(sentence);
    printf("Jumlah kata dalam kalimat: %d\n", wordCount);

    return 0;
}

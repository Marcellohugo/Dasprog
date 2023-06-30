#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fungsi untuk menghilangkan karakter whitespace dalam sebuah string
void removeWhitespace(char *str) {
    int i, j = 0;
    for (i = 0; str[i]; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

// Fungsi untuk mengurutkan karakter dalam sebuah string
void sortString(char *str) {
    int n = strlen(str);
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

// Fungsi untuk memeriksa apakah dua kalimat adalah anagram
int isAnagram(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Kalimat dengan panjang yang berbeda tidak dapat menjadi anagram
    if (len1 != len2) {
        return 0;
    }

    // Menghilangkan karakter whitespace pada kedua kalimat
    char *tempStr1 = (char *)malloc(len1 + 1);
    strcpy(tempStr1, str1);
    removeWhitespace(tempStr1);

    char *tempStr2 = (char *)malloc(len2 + 1);
    strcpy(tempStr2, str2);
    removeWhitespace(tempStr2);

    // Mengurutkan karakter dalam kedua kalimat
    sortString(tempStr1);
    sortString(tempStr2);

    // Membandingkan kedua kalimat yang telah diurutkan
    if (strcmp(tempStr1, tempStr2) == 0) {
        return 1;  // Kedua kalimat adalah anagram
    } else {
        return 0;  // Kedua kalimat bukan anagram
    }
}

int main() {
    char sentence1[1000];
    char sentence2[1000];

    printf("Masukkan kalimat pertama: ");
    fgets(sentence1, sizeof(sentence1), stdin);

    printf("Masukkan kalimat kedua: ");
    fgets(sentence2, sizeof(sentence2), stdin);

    // Menghapus karakter newline pada akhir kalimat
    sentence1[strlen(sentence1) - 1] = '\0';
    sentence2[strlen(sentence2) - 1] = '\0';

    // Memeriksa apakah kedua kalimat adalah anagram
    if (isAnagram(sentence1, sentence2)) {
        printf("Kedua kalimat adalah anagram.\n");
    } else {
        printf("Kedua kalimat bukan anagram.\n");
    }

    return 0;
}

//program simple
#include <stdio.h>
#include <string.h>

int main(){
	char kata1[1001];
	char kata2[1001];
	int arrhuruf1[26]={0}, arrhuruf2[26]={0};
	
	printf ("Masukkan kata pertama: \n");
	scanf ("%s", kata1);
	printf ("Masukkan kata kedua: \n");
	scanf ("%s", kata2);
 
 	int panjang1 = strlen(kata1);
 	int panjang2 = strlen(kata2);
 	
 	if (panjang1 != panjang2){
 		printf("bukan anagram\n");
	 }
	for (int i=0; i<panjang1; i++){
		arrhuruf1[kata1[i]-'a']++;
	}
	for (int i=0; i<panjang2; i++){
		arrhuruf2[kata2[i]-'a']++;
	}
	for (int i=0; i<26; i++){
		if (arrhuruf1[i] != arrhuruf2[i]){
			printf("bukan anagram\n");
		}
	}
	printf("anagram\n");
	return 0;
}
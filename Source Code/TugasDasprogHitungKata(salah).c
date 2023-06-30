#include <stdio.h>
#include <string.h>

int main()
{
    char kalimat[1000];
    int count = 0;

    printf("Masukkan kalimat: ");
    fgets(kalimat, 1000, stdin);

    char *token = strtok(kalimat, " \n");
    while (token != NULL)
    {
        printf("%s\n", token);
        count++;
        token = strtok(NULL, " \n");
    }

    printf("\nJumlah kata dalam kalimat : %d\n", count);
    return 0;
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char kalimat[1000];
//     int i, count = 0, delete = 0;

//     printf("Masukkan kalimat: ");
//     fgets(kalimat, 1000, stdin);

//     for (i = 0; kalimat[i] != '\0'; i++) {
//         if (kalimat[i] == ' ' || kalimat[i] == '\n') {
//             if (delete == 1) {
//                 printf("\n");
//                 count++;
//             }
//             delete = 0;
//         } else {
//             printf("%c", kalimat[i]);
//             delete = 1;
//         }
//     }

//     printf("\n\nJumlah kata dalam kalimat : %d\n", count);

//     return 0;
// }

// pakai strtok buat misahin

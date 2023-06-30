#include <stdio.h>

int main() {
    int nrp[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int nrpcari, ulangi = 1, hasil, i;

    while (ulangi == 1) {
        ulangi = 0;
        printf("\nMasukkan NRP yang mau dicari : ");
        scanf("%d", &nrpcari);

        for (i = 0; i < 10; i++) {
            if (nrp[i] == nrpcari) {
                hasil = i;
                break;
            }
            else {
                hasil = -1;
            }
        }

        if (hasil == -1) {
            printf("Tidak ketemu !");
        }
        else {
            printf("Ditemukan pada elemen array ke-%d", hasil);
        }

        printf("\n\nUlangi pencarian ? (Ketik 1 bila ya !) ");
        scanf("%d", &ulangi);
    }

    return 0;
}
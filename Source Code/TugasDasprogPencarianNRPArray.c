#include <stdio.h>
#define TdkKetemu -1
int cari(const int arr[], int target, int n)
{
    int i, ketemu = 0, hasil;
    i = 0;
    while (!ketemu && i < n)
    {
        if (arr[i] == target)
            ketemu = 1;
        else
            ++i;
    }
    if (ketemu)
        hasil = i;
    else
        hasil = TdkKetemu;
    return (hasil);
}

void main()
{
    int nrp[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, nrpcari, ulangi, hasil;
    ulangi = 1;
    while (ulangi == 1)
    {
        ulangi = 0;
        printf("\nMasukkan NRP yang mau dicari : ");
        scanf("%d", &nrpcari);
        hasil = cari(nrp, nrpcari, 10);
        if (hasil == -1)
            printf("Tidak ketemu !");
        else
            printf("Ditemukan pada elemen array ke-%d", hasil);
        printf("\n\nUlangi pencarian ? (Ketik 1 bila ya !) ");
        scanf("%d", &ulangi);
    }
}
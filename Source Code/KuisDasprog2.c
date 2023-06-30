#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DATA 100

struct Data
{
    char nama[50], NIK[16], alamat[100];
};

int main()
{
    char nama[MAX_DATA][50], NIK[MAX_DATA][16], alamat[MAX_DATA][100];
    int n, i, choice;
    char buffer[100], nama_cari[50];
    int ditemukan = 0;

    printf("Masukkan jumlah data yang ingin diinput: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Data ke-%d\n", i + 1);
        printf("Nama: ");
        fgets(nama[i], sizeof(nama[i]), stdin);
        nama[i][strcspn(nama[i], "\n")] = '\0';

        printf("NIK: ");
        fgets(NIK[i], sizeof(NIK[i]), stdin);
        NIK[i][strcspn(NIK[i], "\n")] = '\0';

        printf("Alamat: ");
        fgets(alamat[i], sizeof(alamat[i]), stdin);
        alamat[i][strcspn(alamat[i], "\n")] = '\0';
    }

    do
    {
        printf("\nMenu:\n");
        printf("1. Lihat data\n");
        printf("2. Keluar\n");
        printf("Pilihan: ");
        fgets(buffer, sizeof(buffer), stdin);
        if (sscanf(buffer, "%d", &choice) != 1)
        {
            printf("Tidak ada data. Silakan coba lagi.\n");
            continue;
        }

        switch (choice)
        {
        case 1:
            printf("\nCari data:\n");
            printf("Masukkan nama yang ingin dicari: ");
            fgets(nama_cari, sizeof(nama_cari), stdin);
            nama_cari[strcspn(nama_cari, "\n")] = '\0';
            printf("\n");
            printf("%-20s %-20s %-20s\n", "Nama", "NIK", "Alamat");
            for (i = 0; i < n; i++)
            {
                if (strcmp(nama[i], nama_cari) == 0)
                {
                    printf("%-20s %-20s %-20s\n", nama[i], NIK[i], alamat[i]);
                    ditemukan = 1;
                }
            }
            if (!ditemukan)
            {
                printf("Data tidak ditemukan.\n");
            }
            break;
        case 2:
            printf("Sampai jumpa dilain hari.\n");
            break;
        default:
            printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    } while (choice != 2);
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DATA 100

struct Data
{
    char nama[50], NIK[16], alamat[100];
};

int main()
{
    char nama[MAX_DATA][50], NIK[MAX_DATA][16], alamat[MAX_DATA][100];
    int n, i, choice;
    char buffer[100], nama_cari[50];
    int ditemukan = 0;

    printf("Masukkan jumlah data yang ingin diinput: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &n);

    i = 0;
    while (i < n)
    {
        printf("Data ke-%d\n", i + 1);
        printf("Nama: ");
        fgets(nama[i], sizeof(nama[i]), stdin);
        nama[i][strcspn(nama[i], "\n")] = '\0';

        printf("NIK: ");
        fgets(NIK[i], sizeof(NIK[i]), stdin);
        NIK[i][strcspn(NIK[i], "\n")] = '\0';

        printf("Alamat: ");
        fgets(alamat[i], sizeof(alamat[i]), stdin);
        alamat[i][strcspn(alamat[i], "\n")] = '\0';

        i++;
    }

    choice = 0;
    while (choice != 2)
    {
        printf("\nMenu:\n");
        printf("1. Lihat data\n");
        printf("2. Keluar\n");
        printf("Pilihan: ");
        fgets(buffer, sizeof(buffer), stdin);
        if (sscanf(buffer, "%d", &choice) != 1)
        {
            printf("Tidak ada data. Silakan coba lagi.\n");
            continue;
        }

        switch (choice)
        {
        case 1:
            printf("\nCari data:\n");
            printf("Masukkan nama yang ingin dicari: ");
            fgets(nama_cari, sizeof(nama_cari), stdin);
            nama_cari[strcspn(nama_cari, "\n")] = '\0';
            printf("\n");
            printf("%-20s %-20s %-20s\n", "Nama", "NIK", "Alamat");
            i = 0;
            ditemukan = 0;
            while (i < n)
            {
                if (strcmp(nama[i], nama_cari) == 0)
                {
                    printf("%-20s %-20s %-20s\n", nama[i], NIK[i], alamat[i]);
                    ditemukan = 1;
                }
                i++;
            }
            if (!ditemukan)
            {
                printf("Data tidak ditemukan.\n");
            }
            break;
        case 2:
            printf("Sampai jumpa dilain hari.\n");
            break;
        default:
            printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    }
    return 0;
}

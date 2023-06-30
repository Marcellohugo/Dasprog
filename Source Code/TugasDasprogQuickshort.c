#include <stdio.h>

void Masukkan_Data(float X[], int Jumlah);
void Quick_Sort(float X[], int Atas, int Bawah);
void Tampilkan_Data(float X[], int Jumlah);

int main()
{
    int N;
    float Nilai[1000];
    printf("Jumlah data ? ");
    scanf("%d", &N);
    printf("\n");
    Masukkan_Data(Nilai, N);
    Quick_Sort(Nilai, 0, N - 1);
    printf("\n");
    printf("Hasil setelah urut:\n");
    Tampilkan_Data(Nilai, N);
    return 0;
}

void Masukkan_Data(float X[], int Jumlah)
{
    int I;
    for (I = 0; I < Jumlah; I++)
    {
        printf("Data ke %d ? ", I + 1);
        scanf("%f", &X[I]);
    }
}

void Quick_Sort(float X[], int Bawah, int Atas)
{
    int I, J, K;
    float Sementara;
    while (Atas > Bawah)
    {
        I = Bawah;
        J = Atas;
        Sementara = X[Bawah];
        while (I < J)
        {
            while (X[J] > Sementara)
                --J;
            X[I] = X[J];
            while (I < J && X[I] <= Sementara)
                ++I;
            X[J] = X[I];
        }
        X[I] = Sementara;
        Quick_Sort(X, Bawah, I - 1);
        Bawah = I + 1;
    }
}

void Tampilkan_Data(float X[], int Jumlah)
{
    int I;
    for (I = 0; I < Jumlah; I++)
    {
        printf("%f\n", X[I]);
    }
}

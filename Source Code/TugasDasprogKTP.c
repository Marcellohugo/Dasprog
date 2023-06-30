#include <stdio.h>

void isi(int i, char nama[], int NIK[], char alamat[])
{
	printf("Input data ke-%d\n", i);
	printf("Input Nama: ");
	gets(nama);
	printf("Input NIK: ");
	gets(NIK);
	printf("Input Alamat: ");
	gets(alamat);
}

void tampil(int i, char nama[], int NIK, char alamat[])
{
	printf("\nData KTP ke-%d\n", i);
	printf("Nama: %s\nNIK: %d\nAlamat: %s", nama, NIK, alamat);
}
 
int main()
{
    int i;
	char nama[5][1000];
	int NIK[5][16];
	char alamat[5][1000];
	
	printf("Input data KTP\n");
	
	for (i=0; i<5; i++){
	isi(i+1, nama[i], NIK[i], alamat[i]);
	}
	
	printf("\nTampilkan data KTP\n");
	
	for (i=0; i<5; i++){
	tampil(i+1, nama[i], NIK[i], alamat[i]);
	}
	
	return(0);
}
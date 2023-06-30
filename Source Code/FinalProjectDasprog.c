#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    int roll_no;
    char name[20];
};

void writeData(FILE *file)
{
    struct Student student;
    printf("Enter roll number: ");
    scanf("%d", &student.roll_no);
    printf("Enter name: ");
    scanf("%s", student.name);

    // Menulis data struktur ke dalam file
    fwrite(&student, sizeof(struct Student), 1, file);

    // Memeriksa apakah penulisan ke file berhasil
    if (ferror(file))
    {
        printf("Error writing to file!\n");
    }
}

void readData(FILE *file)
{
    struct Student student;
    int count = 0;

    // Membaca dan mencetak data struktur dari file hingga mencapai akhir file
    while (fread(&student, sizeof(struct Student), 1, file))
    {
        printf("Student %d - Roll No: %d, Name: %s\n", count + 1, student.roll_no, student.name);
        count++;
    }

    if (count == 0)
    {
        printf("No data found in the file.\n");
    }
}

void searchByRollNo(FILE *file)
{
    int roll_no;
    struct Student student;
    int found = 0;

    printf("Enter roll number to search: ");
    scanf("%d", &roll_no);

    // Membaca data struktur dari file dan mencari berdasarkan roll number
    while (fread(&student, sizeof(struct Student), 1, file))
    {
        if (student.roll_no == roll_no)
        {
            printf("Data found:\n");
            printf("Roll No: %d, Name: %s\n", student.roll_no, student.name);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Data not found for roll number %d.\n", roll_no);
    }
}

int main()
{
    FILE *file;
    int choice;

    // Membuka file "c1.txt" dalam mode penulisan ("w+")
    file = fopen("c1.txt", "w+");

    // Memeriksa apakah file berhasil dibuka atau tidak
    if (file == NULL)
    {
        fprintf(stderr, "Error opening the file\n");
        exit(1);
    }

    do
    {
        printf("Menu:\n");
        printf("1. Write data\n");
        printf("2. Read data\n");
        printf("3. Search by roll number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            writeData(file);
            break;
        case 2:
            rewind(file); // Mengatur posisi file kembali ke awal
            readData(file);
            break;
        case 3:
            rewind(file); // Mengatur posisi file kembali ke awal
            searchByRollNo(file);
            break;
        case 4:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }

        printf("\n");
    } while (choice != 4);

    // Menutup file
    fclose(file);

    return 0;
}

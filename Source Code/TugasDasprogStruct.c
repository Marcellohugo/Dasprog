#include <stdio.h>
#include <string.h>

typedef struct student
{
    int id;
    char name[50];
    float percentage;
} Student;

int main()
{
    int i;
    Student record[5];

    // 1st student's record
    record[0].id = 1;
    strcpy(record[0].name, "Raju");
    record[0].percentage = 86.5;

    // 2nd student's record
    record[1].id = 2;
    strcpy(record[1].name, "Surendren");
    record[1].percentage = 90.5;

    // 3rd student's record
    record[2].id = 3;
    strcpy(record[2].name, "Thiyagu");
    record[2].percentage = 81.5;

    // 4th student's record
    record[3].id = 4;
    strcpy(record[3].name, "Pamuji");
    record[3].percentage = 85.4;

    // 5th student's record
    record[4].id = 5;
    strcpy(record[4].name, "supri");
    record[4].percentage = 94.3;

    // print all student's record
    for (int i = 0; i <= 5; i++)
    {
        printf("    Records of Student: %d\n", i + 1);
        printf("Id is: %d\n", record[i].id);
        printf("Name is: %s\n", record[i].name);
        printf("Percentage is: %f\n\n", record[i].percentage);
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int nilai, i, j;
    scanf("%d", &nilai);
    i = (68 - (nilai >= 46) * 1 - (nilai >= 50) * 1 - (nilai >= 76) * 1);
    j = (0 + (nilai >= 50 && nilai <= 66) * 67 + (nilai >= 76 && nilai <= 86) * 66);
    printf("%c%c", i, j);

    return 0;
}

#include <stdio.h>

int main()
{
    scanf("%d", &number);
    if (number >= 86 && number < 100)
    {
        printf("nilai A");
    }
    else if (number >= 76 && number <= 85)
    {
        printf("nilai AB");
    }
    else if (number >= 66 && number <= 75)
    {
        printf("nilai B");
    }
    else if (number >= 50 && number <= 65)
    {
        printf("nilai BC");
    }
    else if (number >= 49 && number <= 49)
    {
        printf("nilai C");
    }
    else if (number >= 0 && number <= 46)
    {
        printf("nilai CD");
    }
}
// salah
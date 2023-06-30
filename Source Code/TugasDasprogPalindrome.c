#include <stdio.h>
#include <string.h>

// Fungsi untuk membalikkan sebuah string
void reverse(char *str)
{
    int length = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

// Fungsi untuk menghapus karakter whitespace dari sebuah string
void removeWhitespace(char *str)
{
    int i, j = 0;
    int length = strlen(str);

    for (i = 0; i < length; i++)
    {
        if (str[i] != ' ')
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

// Fungsi untuk menentukan apakah sebuah kalimat palindrome atau tidak
int isPalindrome(char *str)
{
    int length = strlen(str);
    int i;

    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            return 0; // Bukan palindrome
        }
    }

    return 1; // Palindrome
}

int main()
{
    char sentence[100];

    printf("Masukkan sebuah kalimat: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Menghapus karakter newline dari input
    int length = strlen(sentence);
    if (sentence[length - 1] == '\n')
    {
        sentence[length - 1] = '\0';
    }

    removeWhitespace(sentence); // Menghapus whitespace
    reverse(sentence);          // Membalikkan string

    if (isPalindrome(sentence))
    {
        printf("Kalimat tersebut adalah palindrome.\n");
    }
    else
    {
        printf("Kalimat tersebut bukan palindrome.\n");
    }

    return 0;
}

// program simple
#include <stdio.h>
#include <string.h>

int main()
{

    char input[20];
    int i, length;
    int flag = 0;

    printf("Enter a string:");
    scanf("%s", input);

    length = strlen(input);

    for (i = 0; i < length; i++)
    {
        if (input[i] != input[length - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        printf("%s is not a palindrome", input);
    }
    else
    {
        printf("%s is a palindrome", input);
    }
    return 0;
}
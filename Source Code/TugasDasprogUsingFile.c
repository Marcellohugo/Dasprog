#include <stdio.h>
#define STRSIZ 80

int main(void)
{
    char in_name[STRSIZ], out_name[STRSIZ];
    FILE *inp, *outp;
    char ch;

    for (scanf("%s", in_name);
         (inp = fopen(in_name, "r")) == NULL;
         scanf("%s", in_name))
    {
        printf("Cannot open %s for input\n", in_name);
        printf("Re-enter file name> ");
    }

    /* Get name to use for backup file and open file for output*/
    printf("Enter name for backup copy> ");
    for (scanf("%s", out_name);
         (outp = fopen(out_name, "w")) == NULL;
         scanf("%s", out_name))
    {
        printf("Cannot open %s for output\n", out_name);
        printf("Re-enter file name> ");
    }

    /*Make backup copy one character at a time */
    for (ch = getc(inp); ch != EOF; ch = getc(inp))
        ;
    putc(ch, outp);

    /* Close files and notify user of backup completion*/
    fclose(inp);
    fclose(outp);
    printf("Copied %s to %s.\n", in_name, out_name);
    return (0);
}
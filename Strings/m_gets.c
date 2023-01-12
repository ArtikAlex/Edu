#include <stdio.h>
#define SIZE 80
char * s_gets(char * st, int n);
int main (void) {
    char text[SIZE];
    s_gets(text, SIZE);
    fputs(text, stdout);
    fputs("\n", stdout);
    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val) // != NULL
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else // words[i] == '\0'
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char str1[40];
    printf("Enter a string:\n");
    fgets(str1, sizeof(str1), stdin);
    printf("%s\n", str1);

    int count[26] = {0};

    for(int i = 0; i < strlen(str1); i++)
    {
        char ch = tolower(str1[i]);
        if (ch >= 'a' && ch <= 'z')
        {
            count[ch - 'a']++;
        }
    }

    printf("Output:\n");
    for(int i = 0; i < 26; i++)
    {
        if(count[i] > 0)
        {
            printf("%c : %d\n", 'A'+ i, count[i]);
        }
    }
    return 0;
}

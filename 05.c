#include <stdio.h>

void type_char(char c)
{
    if(c >= 65 && c <= 91)
    {
        printf("This is a uppercase character\n");
    }
    else if(c >= 97 && c <= 123)
    {
        printf("This is a lowercase character\n");
    }
    else if(c >= 48 && c <= 57)
    {
        printf("This is a digit\n");
    }
    else
    {
        printf("This is some other character!!\n");
    }
}
int main(void)
{
    char c;
    printf("Please enter a character of your choice: ");
    scanf("%c", &c);
    type_char(c);
    return 0;
}

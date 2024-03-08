#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[4][20] = {"India", "America", "Luxembourg", "India"};
    printf("String elements are:\n");
    for(int i = 0; i < 4; i++)
    {
        printf("%s  ", str1[i]);
    }
    printf("\n");
    printf("Duplicated strings in the above char array are:\n");
    for(int i = 0; i < 4; i++)
    {
        if(!strcmp(str1[0], str1[i])) //strcmp returns 0 if both the strings are equal, and 0 in C represents false thus we need to use not operator
        {
            printf("%s\n", str1[i]);
        }
    }

    /*if(1)
    {
        printf("Test\n");
    }*/

}

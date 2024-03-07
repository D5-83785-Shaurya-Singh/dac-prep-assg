#include <stdio.h>
#include <string.h>


/*int main(void)
{
    char str[20];
    printf("Enter a string: ");
    scanf("%s", str);

    printf("------------\n");
    int i;
    for(i = 0; i < strlen(str); i++)
    {
        printf("%c",str[i]);
    }

    printf("\n");

    for(int j = i-1; j >=0; j--)
    {
        printf("%c", str[j]);
    }
    printf("\n");
}*/

int main(void)
{
    char str[20];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); //this is the standard syntax of fgets() //here  stdin is standard input in c
                                    //sizeof() specifies the buffersize or memory required to store the store that string including null character
    printf("%s\n", str);

    int i = 0;
    int j = strlen(str);
    printf("%lu\n",strlen(str));
    j--; //since strlen returns the total string length till '\0' is encountered and the index of i is starting from 0. e.g. if string length is 10
    //then the value of i will go only till 9, so if we don't decrement the value of j then it will not print anything
    while (i < j)
    {
        char temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i++;
        j--;
    }
    printf("%s\n", str);
}

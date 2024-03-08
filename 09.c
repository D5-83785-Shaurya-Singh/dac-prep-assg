#include <stdio.h>

void Binary(int num)
{
    int arr[20];
    int i = 0;
    while(num > 0)
    {
        arr[i] = num % 2;
        num = num/2;
        i++;
    }

    printf("Binary equivalent: ");
    for(int j = i-1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }
}

void Octal(int num)
{
    int arr[20];
    int d = 0;
    while(num > 0)
    {
        arr[d] = num % 8;
        num = num/8;
        d++;
    }
    printf("Octal equivalent: ");
    for(int i = d-1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
}

void HexaDecimal(int num)
{
    int arr[20];
    int d = 0;
    while(num > 0)
    {
        arr[d] = num % 16;
        num = num / 16;
        d++;
    }
    printf("Hexadecimal equivalent: ");
    for(int j = d-1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }
}

int main(void)
{
    int d;
    printf("Please enter the number: ");
    scanf("%d", &d);
    Binary(d);
    printf("\n");
    Octal(d);
    printf("\n");
    HexaDecimal(d);
    return 0;
}
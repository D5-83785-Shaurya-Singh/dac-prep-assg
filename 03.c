#include <stdio.h>

void fibo(int x);
int main(void)
{
    int n;
    printf("Please enter the number: ");
    scanf("%d", &n);
    fibo(n);
    return 0;

}

void fibo(int n)
{
    int i,number, first = 0, second = 1;
    for(i = 0; i < n; i++)
    {
        printf("%d\n", first);
        number = first + second;
        first = second;
        second = number;
    }
}

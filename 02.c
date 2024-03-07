#include <stdio.h>

int fact(int n);
int main(void)
{
   int n,res;
   printf("Please enter the number: ");
   scanf("%d", &n);
   res = fact(n);
   printf("Factorial of the given number is %d\n", res);
   //printf("Factorial of the above integer is %d\n", n);
    return 0;
}

int fact(int n)
{
    int i, res = 1;
    for(i = n; i > 0; i--)
    {
        res = res * i;
    }
    return res;
}

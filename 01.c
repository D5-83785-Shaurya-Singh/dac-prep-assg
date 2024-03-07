#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        printf("Missing command line argument for finding maximum numbers!!\n");
        return 1;
    }

    int max = atoi(argv[1]);
    for(int i = 0; i < argc; i++)
    {
        int num = atoi(argv[i]);
        if(num > max)
        {
            max = num;
        }
    }
    printf("Maximum number is %d\n", max);
}

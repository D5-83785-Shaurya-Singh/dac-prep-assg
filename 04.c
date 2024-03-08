#include <stdio.h>


int main(void)
{
    int a,b,c,d,e,t;
    printf("Please enter the marks of student for the following subjects out of 20: \n");
    printf("Marks in English: ");
    scanf("%d", &a);
    printf("Marks in Mathematics: ");
    scanf("%d", &b);
    printf("Marks in Physics: ");
    scanf("%d", &c);
    printf("Marks in Chemistry: ");
    scanf("%d", &d);
    printf("Marks in Computer Science: ");
    scanf("%d", &e);
    t = a+b+c+d+e;

    printf("Total marks: %d\n", t);
    if(t > 100)
    {
        printf("Total marks cannot exceed 100!!\n");
        printf("Marks in each subject cannot exceed 20!!");
        return 1;
    }
    else if(t > 90 && t <= 100)
    {
        printf("Grade: Excellent");
    }
    else if(t > 80 && t <= 90)
    {
        printf("Grade: A\n");
    }
    else if(t > 70 && t <= 80)
    {
        printf("Grade: B\n");
    }
    else if(t > 60 && t <= 70)
    {
        printf("Grade: C\n");
    }
    else if(t > 0 && t <= 60)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Grade: Invalid!!");
        return 2;
    }


    return 0;

}

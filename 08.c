#include <stdio.h>
#include <string.h>

struct Student
{
    char name[20];
    char roll_no[20];
    int marks;

};
void accept(struct Student *s) //pass by address or pass by reference
{
    printf("Please enter name of student: ");
    fgets(s->name, sizeof(s->name), stdin); //using fgets to avoid buffer overflow //(first I was using gets but it was displaying garbage values)
    printf("Enter roll number: ");
    fgets(s->roll_no, sizeof(s->roll_no), stdin);
    printf("Enter marks: ");
    scanf("%d",(&s->marks));

}

void display(struct Student s)
{
    printf("Name: %sRoll number: %sMarks: %d\n", s.name, s.roll_no, s.marks);
}

int main(void)
{
    struct Student s;
    accept(&s);
    display(s);
    return 0;
}

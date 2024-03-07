#include <stdio.h>

struct Employee
{
    char first_name[20];
    char last_name[20];
    double salary;
};

void emp_init(struct Employee *e)
{
    *e = (struct Employee)
    {
        .first_name = "John", .last_name = "Doe", .salary = 75000.00
    };
}

void set_salary(struct Employee *e, double sal)
{
    e->salary = sal;
}

void emp_display(struct Employee e)
{
    printf("First name: %s\n", e.first_name);
    printf("Last name: %s\n", e.last_name);
    printf("Salary: %.2lf\n", e.salary);

}

int main(void)
{
    struct Employee e1;
    emp_init(&e1);
    set_salary(&e1, 85000.00); //updating the salary
    printf("Updated Salary: %.2lf\n", e1.salary);
    emp_display(e1);

}

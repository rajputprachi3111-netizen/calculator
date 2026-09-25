#include <stdio.h>
#include<string.h>

struct Employee {
    int id;
    char name[51];
    float salary;
};

int main() {
    int n;

    scanf("%d", &n);

    struct Employee employees[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &employees[i].id);
        scanf("%50s", employees[i].name);
        scanf("%f", &employees[i].salary);
    }

    for (int i = 0; i < n; i++) {
        printf("Employee ID: %d\n", employees[i].id);
        printf("Employee Name: %s\n", employees[i].name);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("\n");
    }

    return 0;
}

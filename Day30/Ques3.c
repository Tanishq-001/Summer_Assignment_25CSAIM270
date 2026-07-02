#include <stdio.h>
int main() {
    int ids[2] = {101, 102};
    float salaries[2] = {50000, 60000};
    for(int i=0; i<2; i++) printf("Emp ID: %d | Salary: %.2f\n", ids[i], salaries[i]);
    return 0;
}
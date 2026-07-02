#include <stdio.h>
struct Salary { int id; float basic, allowance; };
int main() {
    struct Salary s = {5001, 60000, 15000};
    printf("Total Salary: %.2f\n", s.basic + s.allowance);
    return 0;
}
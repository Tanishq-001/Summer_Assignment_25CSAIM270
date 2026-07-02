#include <stdio.h>
struct Employee { int id; char name[20]; char dept[10]; };
int main() {
    struct Employee e1 = {5001, "John", "R&D"};
    printf("ID: %d, Name: %s, Dept: %s\n", e1.id, e1.name, e1.dept);
    return 0;
}
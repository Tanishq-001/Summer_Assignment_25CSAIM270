#include <stdio.h>
struct Student { int roll; char name[20]; float gpa; };
int main() {
    struct Student s1 = {101, "Alice", 3.9};
    printf("Roll: %d, Name: %s, GPA: %.2f\n", s1.roll, s1.name, s1.gpa);
    return 0;
}
#include <stdio.h>
struct Book { int id; char title[30]; int pages; };
int main() {
    struct Book b = {101, "C Programming", 450};
    printf("Book %s has %d pages.\n", b.title, b.pages);
    return 0;
}
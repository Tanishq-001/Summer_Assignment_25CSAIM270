#include <stdio.h>
struct Item { int id; char name[15]; int qty; };
int main() {
    struct Item i = {201, "Screws", 150};
    printf("Item ID %d (%s) Stock level: %d\n", i.id, i.name, i.qty);
    return 0;
}
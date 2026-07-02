#include <stdio.h>
struct Contact { char name[20]; char phone[15]; };
int main() {
    struct Contact c = {"David", "+123456789"};
    printf("Contact: %s -> %s\n", c.name, c.phone);
    return 0;
}
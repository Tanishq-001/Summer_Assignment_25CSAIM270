#include <stdio.h>
int main() {
    char students[3][10] = {"Tom", "Jerry", "Spike"};
    int scores[3] = {85, 92, 78};
    for(int i=0; i<3; i++) {
        printf("Student: %-6s Score: %d\n", students[i], scores[i]);
    }
    return 0;
}
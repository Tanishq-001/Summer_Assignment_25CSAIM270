#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5}, choice;
    printf("1.Display\n2.Reset first element\nChoice: ");
    scanf("%d", &choice);
    if(choice == 1) {
        for(int i=0; i<5; i++) printf("%d ", arr[i]);
    } else if(choice == 2) {
        arr[0] = 0;
        printf("Element updated.\n");
    }
    return 0;
}
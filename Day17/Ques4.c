#include <stdio.h>

int main() {
    int size1, size2;

    // 1. Input configuration for Array 1
    printf("Enter number of elements for first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter %d elements for first array:\n", size1);
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // 2. Input configuration for Array 2
    printf("Enter number of elements for second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter %d elements for second array:\n", size2);
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // 3. Logic to identify and print distinct common elements
    printf("\nCommon elements between both arrays are: ");
    int foundAny = 0;

    for (int i = 0; i < size1; i++) {
        // Check if arr1[i] has already been processed to prevent duplicate prints
        int alreadyPrinted = 0;
        for (int k = 0; k < i; k++) {
            if (arr1[i] == arr1[k]) {
                alreadyPrinted = 1;
                break;
            }
        }

        if (alreadyPrinted) continue;

        // Verify if the unique element matches any index in the second array
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                foundAny = 1;
                break; // Break loop to move to the next distinct element in arr1
            }
        }
    }

    if (!foundAny) {
        printf("None (No intersecting values found)");
    }
    printf("\n");

    return 0;
}
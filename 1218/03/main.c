#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int numbers[5];
    printf("== ��w�Ʈ�k(�Ѥj��p�Ƨ�) ==\n");
    printf("...�гs���J5�Ӽƭ�(��ƶ��Ť@��)...\n");
    // Get numbers from user
    printf("�Ƨǫe:");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Sort the array
    qsort(numbers, 5, sizeof(int), compare);

    // Print the sorted array
    printf("�Ƨǫ�:");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
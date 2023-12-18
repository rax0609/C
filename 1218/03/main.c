#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int numbers[5];
    printf("== 氣泡排氣法(由大到小排序) ==\n");
    printf("...請連續輸入5個數值(資料間空一格)...\n");
    // Get numbers from user
    printf("排序前:");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Sort the array
    qsort(numbers, 5, sizeof(int), compare);

    // Print the sorted array
    printf("排序後:");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
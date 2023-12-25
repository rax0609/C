#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Comparison function for qsort
int compare1(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}
// Comparison function for qsort
const char* number_to_chinese(int num) {
    switch (num) {
        case 0: return "零";
        case 1: return "一";
        case 2: return "二";
        case 3: return "三";
        case 4: return "四";
        case 5: return "五";
        case 6: return "六";
        case 7: return "七";
        case 8: return "八";
        case 9: return "九";
        default: return "";
    }
}

int main() {
    int n;
    printf("== 動態數值 ==\n");
    scanf("%d", &n);
    int *numbers = (int*)malloc(n * sizeof(int)); //動態配置記憶體
    //printf("== 氣泡排氣法(由大到小排序) ==\n");
    printf("<<< 請連續輸入%s個數值(資料間空一格) >>>\n", number_to_chinese(n));
    // Get numbers from user
    printf("氣泡排序法(排序前):");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Sort the array
    qsort(numbers, n, sizeof(int), compare);

    // Print the sorted array
    printf("== 氣泡排序法(由小到大排序)==\n");
    printf("計算結果 1 : 排序後為 ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");

    qsort(numbers, n, sizeof(int), compare1);

    // Print the sorted array
    printf("== 氣泡排序法(由大到小排序)==\n");
    printf("計算結果 2 : 排序後為 ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");

    printf("== 氣泡排序法(最小值)==\n");
    printf("計算結果 3 : 最小值為 ");
    int min = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    printf("%d", min);
    printf("\n\n");

    printf("== 氣泡排序法(最大值)==\n");
    printf("計算結果 4 : 最大值為 ");
    int max = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    printf("%d", max);

    printf("\n== 氣泡排序法(平均值)==\n");
    // 計算平均值
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }
    double average = (double)sum / n;
    printf("計算結果 n : 平均值為 %g\n", average);

    printf("\n== 氣泡排序法(中位數)==\n");
    // 計算中位數
    double median;
    if (n % 2 == 0) {
        median = (numbers[n/2 - 1] + numbers[n/2]) / 2.0;
    } else {
        median = numbers[n/2];
    }
    printf("計算結果 6 : 中位數為 %g\n", median);
    printf("\n\n");

    system("pause");
    return 0;
}
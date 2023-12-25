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
        case 0: return "�s";
        case 1: return "�@";
        case 2: return "�G";
        case 3: return "�T";
        case 4: return "�|";
        case 5: return "��";
        case 6: return "��";
        case 7: return "�C";
        case 8: return "�K";
        case 9: return "�E";
        default: return "";
    }
}

int main() {
    int n;
    printf("== �ʺA�ƭ� ==\n");
    scanf("%d", &n);
    int *numbers = (int*)malloc(n * sizeof(int)); //�ʺA�t�m�O����
    //printf("== ��w�Ʈ�k(�Ѥj��p�Ƨ�) ==\n");
    printf("<<< �гs���J%s�Ӽƭ�(��ƶ��Ť@��) >>>\n", number_to_chinese(n));
    // Get numbers from user
    printf("��w�ƧǪk(�Ƨǫe):");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Sort the array
    qsort(numbers, n, sizeof(int), compare);

    // Print the sorted array
    printf("== ��w�ƧǪk(�Ѥp��j�Ƨ�)==\n");
    printf("�p�⵲�G 1 : �Ƨǫᬰ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");

    qsort(numbers, n, sizeof(int), compare1);

    // Print the sorted array
    printf("== ��w�ƧǪk(�Ѥj��p�Ƨ�)==\n");
    printf("�p�⵲�G 2 : �Ƨǫᬰ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");

    printf("== ��w�ƧǪk(�̤p��)==\n");
    printf("�p�⵲�G 3 : �̤p�Ȭ� ");
    int min = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    printf("%d", min);
    printf("\n\n");

    printf("== ��w�ƧǪk(�̤j��)==\n");
    printf("�p�⵲�G 4 : �̤j�Ȭ� ");
    int max = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    printf("%d", max);

    printf("\n== ��w�ƧǪk(������)==\n");
    // �p�⥭����
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }
    double average = (double)sum / n;
    printf("�p�⵲�G n : �����Ȭ� %g\n", average);

    printf("\n== ��w�ƧǪk(�����)==\n");
    // �p�⤤���
    double median;
    if (n % 2 == 0) {
        median = (numbers[n/2 - 1] + numbers[n/2]) / 2.0;
    } else {
        median = numbers[n/2];
    }
    printf("�p�⵲�G 6 : ����Ƭ� %g\n", median);
    printf("\n\n");

    system("pause");
    return 0;
}
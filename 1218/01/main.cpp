#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>

int main(){
    int a[] = {73, 168, 349, 229, 543};
    for (int i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    printf(">>> 整數陣列a中的每個元素各佔4個Bytes <<<\n");
    int length = sizeof(a) / sizeof(a[0]);
    printf("=== 整數陣列a記憶體空間總共佔%d個Bytes ===\n", length * 4);

    char b[] = {'B', 'O', 'O', 'K', 'S'};
    for (int i = 0; i < 5; i++)
    {
        printf("b[%d] = %c\n", i, b[i]);
    }
    printf(">>> 英文陣列a中的每個元素各佔4個Bytes <<<\n");
    int length1 = sizeof(b) / sizeof(b[0]);
    printf("=== 英文陣列a記憶體空間總共佔%d個Bytes ===\n", length1 * 4);

    std::string c[] = {"陳", "昱", "安"};
    for (int i = 0; i < 3; i++)
    {
        //printf("c[%d] = %c\n", i, c[i]);
        printf("c[%d] = %s\n", i, c[i].c_str());
    }
    printf(">>> 整數陣列a中的每個元素各佔4個Bytes <<<\n");
    int length2 = sizeof(b) / sizeof(b[0]);
    printf("=== 整數陣列a記憶體空間總共佔%d個Bytes ===\n", length2 * 4);
    
}
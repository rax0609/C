#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a[4][5];
    int k=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            printf("a[%d][%d] = %d", i, j, k);
            a[i][j] = k++;
            printf("\t, ");
        }
        printf("\n");
    }
}
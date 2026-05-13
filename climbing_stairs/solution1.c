#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int cimbingStairs(int n, int* returnSize) {
    int* result = (int*) malloc(sizeof(int) * n);
    if (n == 1) {
        result[0] = 1;
        *returnSize = 1;
        return result;
    }
    result[0] = 1;
    result[1] = 2;
    for (int i = 2; i < n; i++) {
        result[i] = result[i - 1] + result[i - 2];
    }
    *returnSize = n;
    free(result);
    return result[n-1];
}

void main() {
    int n = 5;
    int returnSize;
    int result = cimbingStairs(n, &returnSize);
    // for (int i = 0; i < returnSize; i++) {
    //     printf("%d ", result[i]);
    // }
    printf("%d", result);
}

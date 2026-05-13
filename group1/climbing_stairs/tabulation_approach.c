#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
Time Complexity: O(n)
Space Complexity: O(n)
*/
int cimbingStairs(int n) {
    int *result = (int*) malloc(sizeof(int) * n);
    if (n == 1) {
        result[0] = 1;
        return result;
    }
    result[0] = 1;
    result[1] = 2;
    for (int i = 2; i < n; i++) {
        result[i] = result[i - 1] + result[i - 2];
    }
    free(result);
    return result[n-1];
}

void main() {
    int n = 5;
    printf("%d", cimbingStairs(n));
}

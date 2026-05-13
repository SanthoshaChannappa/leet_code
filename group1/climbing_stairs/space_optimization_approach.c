#include <stdio.h>

/*
Time Complexity: O(n)
Space Complexity: O(1)
*/
int climbStairsOptimized(int n) {
    if (n <= 1) return 1;
    if (n == 2) return 2;

    int prev2 = 1; // Represents dp[i-2]
    int prev1 = 2; // Represents dp[i-1]
    int current = 0;

    for (int i = 3; i <= n; i++) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }

    return current;
}

int main() {
    printf("Enter the number of stairs: ");
    int n;
    scanf("%d", &n);
    printf("Ways to climb %d stairs: %d\n", n, climbStairsOptimized(n));
    return 0;
}

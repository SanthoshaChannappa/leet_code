#include <stdio.h>
#include <string.h>

/*
Time Complexity: O(n)
Space Complexity: O(n)
*/
int memo[50];

int climbStairsMemo(int n) {
    if (n <= 1) return 1;
    if (n == 2) return 2;

    // Return cached result if already calculated
    if (memo[n] != -1) {
        return memo[n];
    }

    // Store value in memo array before returning
    memo[n] = climbStairsMemo(n - 1) + climbStairsMemo(n - 2);
    return memo[n];
}

int main() {
    int stairs = 5;
    memset(memo, -1, sizeof(memo)); // Initialize memo array with -1
    printf("Ways to climb %d stairs: %d\n", stairs, climbStairsMemo(stairs));
    return 0;
}

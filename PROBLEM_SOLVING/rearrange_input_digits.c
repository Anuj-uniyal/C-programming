// You are given a 4-digit integer N.

// Your task is to rearrange its digits in descending order, using only if-else statements.

// Note:

// You must not use arrays, loops, sorting functions, built-in sort utilities, or library functions.

// Instead, manually compare the digits using nested if-else conditions and determine their order from largest to smallest.

// Finally, print the rearranged digits without spaces.

// Input Format

// A single integer: {N}

// Constraints

// 1000 ≤ N ≤ 9999
// N is always a 4-digit integer.
// Only if-else statements may be used for comparisons.
// No loops, no arrays, no sorting algorithms, no built-in functions like sort/max/min.
// Output Format

// Print the four digits of N, rearranged in descending order, without spaces.

// Sample Input 0

// 2583
// Sample Output 0

// 8532
// Sample Input 1

// 2222
// Sample Output 1

// 2222
// Sample Input 2

// 9012
// Sample Output 2

// 9210

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int a = N / 1000;
    int b = (N / 100) % 10;
    int c = (N / 10) % 10;
    int d = N % 10;

    int x1, x2, x3, x4;

    if (a >= b && a >= c && a >= d) {
        x1 = a;
        if (b >= c && b >= d) {
            x2 = b;
            if (c >= d) {
                x3 = c; x4 = d;
            } else {
                x3 = d; x4 = c;
            }
        } else if (c >= b && c >= d) {
            x2 = c;
            if (b >= d) {
                x3 = b; x4 = d;
            } else {
                x3 = d; x4 = b;
            }
        } else {
            x2 = d;
            if (b >= c) {
                x3 = b; x4 = c;
            } else {
                x3 = c; x4 = b;
            }
        }
    } else if (b >= a && b >= c && b >= d) {
        x1 = b;
        if (a >= c && a >= d) {
            x2 = a;
            if (c >= d) {
                x3 = c; x4 = d;
            } else {
                x3 = d; x4 = c;
            }
        } else if (c >= a && c >= d) {
            x2 = c;
            if (a >= d) {
                x3 = a; x4 = d;
            } else {
                x3 = d; x4 = a;
            }
        } else {
            x2 = d;
            if (a >= c) {
                x3 = a; x4 = c;
            } else {
                x3 = c; x4 = a;
            }
        }
    } else if (c >= a && c >= b && c >= d) {
        x1 = c;
        if (a >= b && a >= d) {
            x2 = a;
            if (b >= d) {
                x3 = b; x4 = d;
            } else {
                x3 = d; x4 = b;
            }
        } else if (b >= a && b >= d) {
            x2 = b;
            if (a >= d) {
                x3 = a; x4 = d;
            } else {
                x3 = d; x4 = a;
            }
        } else {
            x2 = d;
            if (a >= b) {
                x3 = a; x4 = b;
            } else {
                x3 = b; x4 = a;
            }
        }
    } else {
        x1 = d;
        if (a >= b && a >= c) {
            x2 = a;
            if (b >= c) {
                x3 = b; x4 = c;
            } else {
                x3 = c; x4 = b;
            }
        } else if (b >= a && b >= c) {
            x2 = b;
            if (a >= c) {
                x3 = a; x4 = c;
            } else {
                x3 = c; x4 = a;
            }
        } else {
            x2 = c;
            if (a >= b) {
                x3 = a; x4 = b;
            } else {
                x3 = b; x4 = a;
            }
        }
    }

    printf("%d%d%d%d", x1, x2, x3, x4);
    return 0;
}
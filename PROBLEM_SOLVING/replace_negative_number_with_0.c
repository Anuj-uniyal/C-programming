// Given an array of integers, replace every negative number in the array with 0 and print the updated array.

// The relative order of elements must remain unchanged.

// Input Format

// First line: An integer N, representing the size of the array
// Second line: N space-separated integers
// Constraints

// 1 ≤ N ≤ 10⁵
// −10⁹ ≤ A[i] ≤ 10⁹
// Output Format

// Print the updated array after replacing all negative numbers with 0.
// Elements must be printed in a single line, space-separated.
// Sample Input 0

// 5
// 1 -2 3 -4 5
// Sample Output 0

// 1 0 3 0 5
// Sample Input 1

// 4
// -1 -2 -3 -4
// Sample Output 1

// 0 0 0 0
// Sample Input 2

// 1
// -5
// Sample Output 2

// 0

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] < 0) {
            arr[i] = 0;
        }
    printf("%d ", arr[i]);

    
        
    }

    return 0;
}

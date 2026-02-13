// A new Smart ATM system has been introduced to improve the efficiency of cash withdrawal. Unlike regular ATMs, these machines use a precision dispensing algorithm to minimize the number of currency notes handed to the user.

// The ATM is stocked with only three denominations:

// ₹500 notes
// ₹200 notes
// ₹100 notes
// To ensure consistency and reduce mechanical wear, the ATM is designed to optimize the number of notes dispensed.

// It always follows the strict dispensing order shown below:

// First dispense ₹500 notes
// Then dispense ₹200 notes
// Finally dispense ₹100 notes
// Your task is to simulate how the ATM distributes the notes for a given withdrawal amount A and determine:

// How many ₹500 notes are dispensed?
// How many ₹200 notes are dispensed?
// How many ₹100 notes are dispensed?
// The objective is to achieve the minimum number of notes while following the above priority order.

// Input Format

// A single integer: A
// where, A represents the withdrawal amount entered by the user.

// Constraints

// The withdrawal amount A will always be a positive multiple of 100.
// The ATM supports only the denominations ₹500, ₹200, and ₹100.
// The total amount requested must be greater than 0.
// If the entered amount is 0 or negative, the system should treat it as invalid.
// The dispensing must follow the strict priority order:
// ₹500 notes
// ₹200 notes
// ₹100 notes
// The solution must ensure that the total number of notes dispensed is minimal, while respecting the priority order.
// Output Format

// Display the total number of notes of each denomination dispensed in the following format:
// 500-rupee notes: X
// 200-rupee notes: Y
// 100-rupee notes: Z

// Where:

// X → number of ₹500 notes dispensed
// Y → number of ₹200 notes dispensed
// Z → number of ₹100 notes dispensed

// If the amount A ≤ 0, print: Invalid amount

// Sample Input 0

// 1200
// Sample Output 0

// 500-rupee notes: 2
// 200-rupee notes: 1
// 100-rupee notes: 0
// Sample Input 1

// 700
// Sample Output 1

// 500-rupee notes: 1
// 200-rupee notes: 1
// 100-rupee notes: 0
// Sample Input 2

// 300
// Sample Output 2

// 500-rupee notes: 0
// 200-rupee notes: 1
// 100-rupee notes: 1


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int A;
    scanf("%d", &A);

    if (A <= 0) {
        printf("Invalid amount");
        return 0;
    }

    int n5 = A / 500;
    A =A% 500;

    int n2 = A / 200;
    A =A% 200;

    int n1 = A / 100;

    printf("500-rupee notes: %d\n", n5);
    printf("200-rupee notes: %d\n", n2);
    printf("100-rupee notes: %d\n", n1);

    return 0;
}

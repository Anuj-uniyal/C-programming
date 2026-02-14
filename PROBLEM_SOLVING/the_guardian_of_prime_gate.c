// In the ancient kingdom of Zabiria, there exists a magical gate known as the Prime Gate.

// The gate reacts differently depending on the nature of the number it receives:

// It opens when given a Prime number
// It remains closed when given a Composite number
// It stays inactive when given a number that is neither Prime nor Composite
// A young programmer Omkar has been chosen to guard the gate. Every day, the gate provides a natural number.
// Omkar must determine the correct nature of the number so the gate behaves accordingly.

// Your task is to help Omkar by writing a program that checks whether the given number is Prime, Composite, or Neither.

// Input Format

// A single line containing one number N.

// Constraints

// -10^9 ≤ 𝑁 ≤ 10^9
// Output Format

// Print Prime, if the number is prime
// Print Composite, if the number is composite
// Print None, if the number is neither prime nor composite
// Sample Input 0

// 7
// Sample Output 0

// Prime
// Explanation 0

// 7 is a positive number greater than 1 and has only two divisors (1 and 7), so it is Prime.

// Sample Input 1

// 10
// Sample Output 1

// Composite
// Explanation 1

// 10 has more than two divisors (1, 2, 5, 10), so it is Composite.

// Sample Input 2

// 1
// Sample Output 2

// None
// Explanation 2

// 1 is neither prime nor composite, so it is None.



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    int count=0;
    scanf("%d",&num);
    if(num<=1){
        printf("None");
        return 0;
    }
    for(int i=2;i<=sqrt(num);++i){
        if(num%i==0){
            ++count;
            break;
        }
    }
        if(count==1){
            printf("Composite");
        }
        else{
            printf("Prime");
        }
    return 0;
}
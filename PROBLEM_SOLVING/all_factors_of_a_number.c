// Given a positive integer N, print all its factors in ascending order.

// You need to write a program that reads N and prints all its factors separated by spaces.

// Input Format

// A single line containing the integer N.

// Constraints

// 1 ≤ 𝑁 ≤ 10^9
// Output Format

// Print all factors of N in ascending order, separated by a single space.

// Sample Input 0

// 6
// Sample Output 0

// 1 2 3 6
// Sample Input 1

// 1
// Sample Output 1

// 1
// Sample Input 2

// 25
// Sample Output 2

// 1 5 25


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;++i){
      if(num%i==0){
          printf("%d ",i);
      }  
    }
    return 0;
}

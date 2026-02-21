// This New Year, Sharib (an experienced event planner) is planning a celebration and needs your help to determine if they can host it within their budget. Sharib has a list of expenses for different activities and items, along with specific conditions for hosting the celebration. Write a program to evaluate whether Sharib can host the celebration or not.

// Conditions to Host the Celebration:

// The total cost of the celebration must not exceed the budget.
// The number of guests must be greater than 5 and less than or equal to 50.
// At least one of the following conditions must hold:
// The decoration cost is less than 30% of the budget.
// The total food cost is less than 50% of the budget.
// If the number of guests exceeds 25, there must be a music arrangement (i.e., musicCost > 0).
// Input Format

// The input consists of six integers:

// budget: Total budget for the celebration (in dollars).
// numGuests: Number of guests invited.
// foodCostPerGuest: Cost of food per guest (in dollars).
// decorationCost: Cost of decorations (in dollars).
// musicCost: Cost of hiring a DJ or music system (in dollars).
// extraExpenses: Additional expenses for the celebration (in dollars).
// Constraints

// 1 ≤ budget ≤ 10^4
// 1 ≤ numGuests ≤ 100
// 1 ≤ foodCostPerGuest ≤ 10^4
// 0 ≤ decorationCost ≤ 10^4
// 0 ≤ musicCost ≤ 10^4
// 0 ≤ extraExpenses ≤ 10^4
// Output Format

// Output a single line:

// "Celebration Approved" if Sharib can host the celebration within the given conditions.
// "Celebration Denied" otherwise.
// Sample Input 0

// 1000  
// 20  
// 25  
// 200  
// 0  
// 150  
// Sample Output 0

// Celebration Approved
// Sample Input 1

// 500  
// 30  
// 15  
// 100  
// 0  
// 100  
// Sample Output 1

// Celebration Denied
// Sample Input 2

// 1000  
// 10  
// 80  
// 100  
// 50  
// 50  
// Sample Output 2

// Celebration Approved
// Sample Input 3

// 500  
// 10  
// 40  
// 200  
// 50  
// 100  
// Sample Output 3

// Celebration Denied


#include <stdio.h>

int main() {
    int budget, numGuests, foodCostPerGuest, decorationCost, musicCost, extraExpenses;
    scanf("%d", &budget);
    scanf("%d", &numGuests);
    scanf("%d", &foodCostPerGuest);
    scanf("%d", &decorationCost);
    scanf("%d", &musicCost);
    scanf("%d", &extraExpenses);

    int totalFoodCost = numGuests * foodCostPerGuest;
    int totalCost = totalFoodCost + decorationCost + musicCost + extraExpenses;

    if (totalCost > budget) {
        printf("Celebration Denied");
        return 0;
    }

    if (!(numGuests > 5 && numGuests <= 50)) {
        printf("Celebration Denied");
        return 0;
    }

    int condition1 = decorationCost < (0.3 * budget);
    int condition2 = totalFoodCost < (0.5 * budget);

    if (!(condition1 || condition2)) {
        printf("Celebration Denied");
        return 0;
    }

    if (numGuests > 25 && musicCost <= 0) {
        printf("Celebration Denied");
        return 0;
    }

    printf("Celebration Approved");
    return 0;
}

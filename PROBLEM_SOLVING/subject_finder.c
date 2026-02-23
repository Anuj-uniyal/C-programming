// A university offers three engineering streams, each represented by a character code:

// Code    |   Stream
//  C      |    CSE
//  E      |    ECE
//  M      |    MECHANICAL
// Each stream has a fixed curriculum based on the current academic year (1–4).
// Additionally, in 4th year, students may choose an internship instead of regular subjects.
// You are given three inputs:

// a. YEAR — integer in {1, 2, 3, 4} 
// b. BRANCH_CODE — character in {C, E, M}
// c. If 4th Year: Additional Input: INTERNSHIP_STATUS — integer {0 or 1}
//     - 0 → print the regular subjects
//     - 1 → print “Enrolled into Internship Program”
// Your task is to print the correct set of subjects based on these inputs.

// NOTE:

// Use only SWITCH statements, if-else statments are NOT allowed.
// For checking internship status also - use SWITCH statement only.
// Subject Mapping

// image

// image

// image

// image

// Input Format

// The input format depends on the year.

// For Years 1, 2, 3: YEAR and BRANCH_CODE

// Example: 2 C
// For Year 4: YEAR, BRANCH_CODE and INTERNSHIP_STATUS

// Where: INTERNSHIP_STATUS ∈ {0, 1}
// 0 → print regular subjects
// 1 → print "Enrolled into Internship Program"
// Constraints

// YEAR is an integer
// BRANCH_CODE is a character
// INTERNSHIP_STATUS is an integer
// For invalid inputs, print -1.
// Output Format

// Print subjects one per line.

// Note: If YEAR == 4 and INTERNSHIP == 1, print "Enrolled into Internship Program"

// Sample Input 0

// 1 C 
// Sample Output 0

// Physics
// Chemistry
// Maths
// Sample Input 1

// 3 E
// Sample Output 1

// Analog Electronics
// Embedded Systems
// Microcontrollers
// Sample Input 2

// 4 M 1
// Sample Output 2

// Enrolled into Internship Program


#include <stdio.h>

int main() {
    int year;
    char branch;

    scanf("%d %c", &year, &branch);

    switch (year) {

        case 1:
            printf("Physics\nChemistry\nMaths");
            break;

        case 2:
            switch (branch) {
                case 'C':
                    printf("C Programming\nComputer Organization & Architecture\nWeb Development");
                    break;
                case 'E':
                    printf("Signal Processing\nLogic Design\nNetwork Analysis");
                    break;
                case 'M':
                    printf("Thermodynamics\nSolid Mechanics\nHeat Transfer");
                    break;
                default:
                    printf("-1");
            }
            break;

        case 3:
            switch (branch) {
                case 'C':
                    printf("Object-oriented Programming\nDBMS\nData Structures & Algorithms");
                    break;
                case 'E':
                    printf("Analog Electronics\nEmbedded Systems\nMicrocontrollers");
                    break;
                case 'M':
                    printf("Applied Mechanics\nKinematics\nMechatronics");
                    break;
                default:
                    printf("-1");
            }
            break;

        case 4: {
            int internship;
            scanf("%d", &internship);

            switch (internship) {
                case 1:
                    printf("Enrolled into Internship Program");
                    break;

                case 0:
                    switch (branch) {
                        case 'C':
                            printf("Operating Systems\nComputer Networks\nCompiler Design");
                            break;
                        case 'E':
                            printf("VLSI Design\nFiber-optic Communication\nDigital Electronics");
                            break;
                        case 'M':
                            printf("Mechanism of Materials (MOM)\nStrength of Materials (SOM)\nMachine Design");
                            break;
                        default:
                            printf("-1");
                    }
                    break;

                default:
                    printf("-1");
            }
            break;
        }

        default:
            printf("-1");
    }

    return 0;
}
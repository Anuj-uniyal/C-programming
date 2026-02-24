// Write a program to determine the type of 2D geometric figure based on the following properties:

// Number of sides (n) – can be 3, 4, or 0 (for a circle).
// Side lengths (a,b,c,d) – three sides if n=3, four if n=4, none for n=0.
// Angles (A,B,C,D) in degrees – three angles if n=3, four if n=4, none for n=0..
// The program should classify the figure into one of these categories:

// Equilateral Triangle: n=3, all sides are equal, and all angles are 60°.
// Isosceles Triangle: n=3, two sides are equal and the two angles opposite to the equal sides are congruent to each other
// Scalene Triangle: n=3, all sides and angles are different.
// Square: n=4, all sides are equal, and all angles are 90°.
// Rectangle: n=4, opposite sides are equal, and all angles are 90°.
// Rhombus: n=4, all sides are equal, but not all angles are 90°. Opposite angles are equal in a rhombus.
// Parallelogram: n=4, opposite sides and opposite angles are equal.
// Circle: n=0.
// Invalid Figure: If the input is invalid or does not form a valid figure.
// Input Format

// An integer n: The number of sides
// Three/Four/Zero integers (a,b,c,d): Positive values for side lengths
// Three/Four/Zero integers (A,B,C,D): Angles in degrees
// Constraints

// n ∈ {0,3,4}.
// -10^6 ≤ a,b,c,d ≤ 1000.
// -10^6 ≤ A,B,C,D < 180.
// Output Format

// Print one of these:

// Equilateral Triangle
// Isosceles Triangle
// Scalene Triangle
// Square
// Rectangle
// Rhombus
// Parallelogram
// Circle
// Invalid Figure
// Sample Input 0

// 3 5 5 5 60 60 60
// Sample Output 0

// Equilateral Triangle
// Sample Input 1

// 4 4 6 4 6 110 70 110 70
// Sample Output 1

// Parallelogram
// Sample Input 2

// 4 10 20 10 20 100 70 100 90
// Sample Output 2

// Invalid Figure
// Sample Input 3

// 3 5 5 5 70 60 70
// Sample Output 3

// Invalid Figure
// Sample Input 4

// 4 4 4 4 4 90 90 90 80
// Sample Output 4

// Invalid Figure

#include <stdio.h>

int main() {

int n,a,b,c,d,A,B,C,D;

scanf("%d",&n);



if(n==3){

scanf("%d %d %d",&a,&b,&c);

scanf("%d %d %d",&A,&B,&C);

if ((a+b>c&&a+c>b&&c+b>a)&&(A+B+C==180)&&(a>0&&a<=1000)&&(b>0&&b<=1000)&&(c>0&&c<=1000)&&(A>0&&A<180)&&(B>0&&B<180)&&(C>0&&C<180)){

if((a==b&&b==c)&&(A==60&&B==60&&C==60)&&(A+B+C==180)){
printf("Equilateral Triangle");



}else if ((a==b && B==A && a!=c && b!=c && A!=C && B!=C) || (a==c && A==C && a!=b && b!=c && A!=B && B!=C) || (b==c && B==C && a!=b && a!=c && A!=C && A!=B)){

printf("Isosceles Triangle");

}else if (a!=b && b!=c && a!=c && A!=B && B!=C && A!=C){
printf("Scalene Triangle");

}else{
printf("Invalid Figure");

}
}else {
printf("Invalid Figure");


}

}else if(n==4){

scanf("%d %d %d %d",&a,&b,&c,&d);

scanf("%d %d %d %d",&A,&B,&C,&D);



if ((a==b&&b==c&&c==d)&&(A==90&&B==90&&C==90&&D==90)&&(A+B+C+D==360)&&(a>0&&a<=1000)&&(b>0&&b<=1000)&&(c>0&&c<=1000)&&(d>0&&d<=1000)&&(A>0&&A<180)&&(B>0&&B<180)&&(C>0&&C<180)&&(D>0&&D<180)){

printf("Square");


}else if (((a==c&&b==d))&&(A==90&&B==90&&C==90&&D==90)&&(A+B+C+D==360)&&(a>0&&a<=1000)&&(b>0&&b<=1000)&&(c>0&&c<=1000)&&(d>0&&d<=1000)&&(A>0&&A<180)&&(B>0&&B<180)&&(C>0&&C<180)&&(D>0&&D<180)){


printf("Rectangle");


}else if((a==b&&b==c&&c==d)&&(A==C&&B==D)&&(!(A==90&&B==90&&C==90&&D==90))&&(A+B+C+D==360)&&(a>0&&a<=1000)&&(b>0&&b<=1000)&&(c>0&&c<=1000)&&(d>0&&d<=1000)&&(A>0&&A<180)&&(B>0&&B<180)&&(C>0&&C<180)&&(D>0&&D<180)){

printf("Rhombus");



}else if((a==c&&b==d)&&(A==C&&B==D)&&(A+B+C+D==360)&&(a>0&&a<=1000)&&(b>0&&b<=1000)&&(c>0&&c<=1000)&&(d>0&&d<=1000)&&(A>0&&A<180)&&(B>0&&B<180)&&(C>0&&C<180)&&(D>0&&D<180)){

printf("Parallelogram");

}else {
printf("Invalid Figure");


}

}else if (n==0){


printf("Circle");
}else {
    printf("Invalid Figure");
}

 return 0;
}
// Read three sides of a triangle. First check whether a triangle is possible. If yes, classify it as equilateral, isosceles or scalene.
// Sample: 4 4 6 → Isosceles | 1 2 10 → Triangle not possible

#include <stdio.h>
int main()
{
    int side1;
    int side2;
    int side3;
    int sum;
    printf("\n");
    printf("=====CLASSIFICATION OF TRIANGLES=====\n\n");
    printf("Enter the length of first side: ");
    scanf("%d", &side1);
    printf("Enter the length of second side: ");
    scanf("%d", &side2);
    printf("Enter the length of third side: ");
    scanf("%d", &side3);
    if (side1 + side2 < side3 || side2 + side3 < side1 || side3 + side1 < side2)
    {
        printf("A triangle with %d, %d and %d length is not possible\n", side1, side2, side3);
    }
    else if (side1 + side2 > side3 || side2 + side3 > side1 || side3 + side1 > side2)
    {
        printf("A triangle with %d, %d, and %d is possible\n", side1, side2, side3);
        if (side1 == side2 == side3)
        {
            printf("Its an equilateral triangle");
        }
        else if (side1 == side2 || side2 == side3 || side3 == side1)
        {
            printf("Its an isosceles triangle");
        }
        else
        {
            printf("Its an scalene triangle");
        }
    }
    return 0;
}
// Read the coordinates of three points (x1 y1 x2 y2 x3 y3).
// Check whether they lie on a straight line using the condition:
// x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2) = 0.
// If not collinear, print the area of the triangle (half the absolute value of that expression).

#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;
    int value;
    float area;

    printf("Enter 1st x coordinate: ");
    scanf("%d", &x1);
    printf("Enter 1st y coordinate: ");
    scanf("%d", &y1);
    printf("Enter 2nd x coordinate: ");
    scanf("%d", &x2);
    printf("Enter 2nd y coordinate: ");
    scanf("%d", &y2);
    printf("Enter 3rd x coordinate: ");
    scanf("%d", &x3);
    printf("Enter 3rd y coordinate: ");
    scanf("%d", &y3);

    value = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    if (value == 0) {
        printf("The points lie on a straight line (collinear)\n");
    } else {
        if (value < 0) {
            value = -value;
        }
        area = 0.5 * value;
        printf("The points do not lie on a straight line\n");
        printf("Area of the triangle is %.2f\n", area);
    }

    return 0;
}
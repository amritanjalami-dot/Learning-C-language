// Q6. Read the hour in 24-hour format (0 to 23) and print the greeting:

// 5 to 11: Good Morning
// 12 to 16: Good Afternoon
// 17 to 20: Good Evening
// otherwise: Good Night

// Print "Invalid hour" if the input is outside 0 to 23.

#include <stdio.h>
int main()
{
    int hour;
    printf("Enter the time in 24 hour format : ");
    scanf("%d", &hour);
    if (hour <= 4 && hour <= 0)
    {
        printf("Its midnight");
    }
    else if (hour <= 11 && hour >= 5)
    {
        printf("Good Morning");
    }
    else if (hour <= 16 && hour >= 12)
    {
        printf("Good Afternoon");
    }
    else if (hour <= 20 && hour >= 17)
    {
        printf("Good Evening");
    }
    else if (hour <= 23 && hour >= 21)
    {
        printf("Good Night");
    }
    else
    {
        printf("Invalid hour");
    }
    return 0;
}
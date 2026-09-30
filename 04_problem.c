// A player scored different runs in three different matches.
// Write a C program to accept the scores in each match and calculate the player’s average score.
// Use float variables so that the result can contain decimal values.

#include <stdio.h>
int main()
{
    float score_1, score_2, score_3;
    float sum, average;
    printf("Enter the first score : ");
    scanf("%f", &score_1);
    printf("Enter the second score : ");
    scanf("%f", &score_2);
    printf("Enter the third score : ");
    scanf("%f", &score_3);
    sum = score_1 + score_2 + score_3;
    average = sum / 3.0;
    printf("The total score scored by the player is %.1f and its average score is %.1f", sum, average);
    return 0;
}
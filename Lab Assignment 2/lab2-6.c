/*
  Khaldoon Mutahar (61930208)
  CSCI250 - Introduction to Programming
  Mr. Omar Al-Fakih

  Write a program to enter numbers till the user wants.
  At the end it should display the count of positive, negative and zeros entered.

*/

#include <stdio.h>

int main()
{
    int count, num, positive = 0, negative = 0, zero = 0;

    printf("Enter the limit of numbers\n");
    scanf("%d", &count);

    printf("Enter %d numbers\n", count);

    while (count) {
        scanf("%d", &num);

        if (num > 0) {
            positive++;
        } else if (num < 0) {
            negative++;
        } else {
            zero++;
        }

        count--;
    }

    printf("\nThere are %d Positive Numbers\n", positive);
    printf("There are %d Negative Numbers\n", negative);
    printf("There are %d zero's\n", zero);

    return 0;
}

/*
  Khaldoon Mutahar (61930208)
  CSCI250 - Introduction to Programming
  Mr. Omar Al-Fakih

  Write a program to find the range of a set of numbers entered through the keyboard.
  Range is the difference between the smallest and biggest number in the list.

*/

#include <stdio.h>

int main()
{

    int min, max, numbers, range;
    printf("Enter how many numbers are in the list: \n");
    scanf("%d", &numbers);

    int set[numbers];

    printf("Enter the numbers: \n");
    for (int i = 0; i < numbers; i++) {
        scanf("%d", &set[i]);
        min = set[i];
        max = set[i];
    }

    for (int i = 0; i < numbers; i++) {
        if (set[i] < min) {
            min = set[i];
        }
        if (set[i] > max) {
            max = set[i];
        }
    }

    range = max - min;
    printf("The range between the largest number %d and the smallest number %d is %d\n", max, min, range);

    return 0;
}

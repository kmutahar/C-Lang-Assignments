/*
  Khaldoon Mutahar (61930208)
  CSCI250 - Introduction to Programming
  Mr. Omar Al-Fakih

  Write a program to find the smallest and largest numbers of a set of numbers entered through the keyboard.

*/

#include <stdio.h>

int main()
{

    int min, max, numbers;
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
    printf("The largest number is %d\n", max);
    printf("The smallest number is %d\n", min);
    return 0;
}

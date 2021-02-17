/*
  Khaldoon Mutahar (61930208)
  CSCI250 - Introduction to Programming
  Mr. Omar Al-Fakih

  Write a C program that allows the user to store as many integer values as he wants in an array,
  then it asks the user to enter a value to look for. If the value is found it displays the message “Found”
  along with the value we are looking for. (Hint: ask the user to enter the size of the array first).

*/

#include <stdio.h>

int main()
{
    int num_in_array, lookup;

    printf("How many numbers do you want?\n");
    scanf("%d", &num_in_array);

    int ary[num_in_array];

    printf("Enter the %d number each in a single line\n", num_in_array);

    for (int i = 0; i < num_in_array; i++) {
        scanf("%d", &ary[i]);
    }

    printf("Enter a Value to look for\n");
    scanf("%d", &lookup);

    for (int i = 0; i < num_in_array; i++) {
        if (lookup == ary[i]) {
            printf("%d Was found in location %d\n", lookup, i);
            break;
        } else {
            printf("%d was not founded in location %d\n", lookup, i);
        }
    }

    return 0;
}

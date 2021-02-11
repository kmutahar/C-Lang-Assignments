/*
  Khaldoon Mutahar (61930208)
  CSCI250 - Introduction to Programming
  Mr. Omar Al-Fakih

  In boxing the weight class of a boxer is decided as per the following table.
  Write a program that receives weight as input and prints out the boxer’s weight class.

   | Boxer Class    | Weight in Pounds |
   | -------------- | ---------------- |
   | Fly Weight     | <115             |
   | Bantam Weight  | 115-121          |
   | Feather Weight | 122-153          |
   | Middle Weight  | 154-189          |
   | Heavy Weight   | >=190            |

*/

#include <stdio.h>

int main()
{
    float kg;

    printf("Enter your weight in KG\n");
    scanf("%f", &kg);

    float lb = kg * 2.2;

    if (lb < 115) {
        printf("Fly Weight\n\n");
    } else if (lb >= 115 && lb <= 121) {
        printf("Bantam Weight\n\n");
    } else if (lb >= 122 && lb <= 153) {
        printf("Feather Weight\n\n");
    } else if (lb >= 154 && lb <= 189) {
        printf("Middle Weight\n\n");
    } else if (lb >= 190) {
        printf("Heavy Weight\n\n");
    } else {
        printf("No Class");
    }

    main();

    return 0;
}

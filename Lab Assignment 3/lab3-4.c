/*
  Khaldoon Mutahar (61930208)
  CSCI250 - Introduction to Programming
  Mr. Omar Al-Fakih

  Write a C program that works as a ciphering tool.
  It simply asks the user to enter a series of characters (A string) into an array character.
  Then it applies the formula x =x+1 (Where x represents a character) to cipher the entered series of characters.
  It should then display the series of characters before and after ciphering

*/

#include <stdio.h>

int main()
{

    char message[100], letter;

    printf("Enter a message to encrypt: ");
    gets(message);

    for (int i = 0; message[i] != '\0'; ++i) {
        letter = message[i];

        if (letter >= 'a' && letter <= 'z') {
            letter = letter + 1;

            if (letter > 'z') {
                letter = letter - 'z' + 'a' - 1;
            }

            message[i] = letter;
        } else if (letter >= 'A' && letter <= 'Z') {
            letter = letter + 1;

            if (letter > 'Z') {
                letter = letter - 'Z' + 'A' - 1;
            }

            message[i] = letter;
        }
    }

    printf("Encrypted message: %s\n\n", message);

    main();

    return 0;
}

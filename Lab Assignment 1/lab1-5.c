/*
  Khaldoon Mutahar (61930208)
  CSCI250 - Introduction to Programming
  Mr. Omar Al-Fakih

  If cost price and selling price of an item are input through the keyboard,
  write a program to determine whether the seller has made profit or incurred loss.
  Also determine how much profit he made or loss he incurred.

*/

#include <stdio.h>

int main()
{
    float selling_price, buying_price, net;

    printf("Enter the selling price of the product\n");
    scanf("%f", &selling_price);

    printf("Enter the bought price of the product\n");
    scanf("%f", &buying_price);

    net = (selling_price - buying_price);

    if (selling_price > buying_price) {
        printf("You made profit of %f \n", net);
    } else {
        printf("You incurred loss of %f \n", net);
    }

    main();

    return 0;
}

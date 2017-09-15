#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>


int main(void){
 
 int const QUARTER = 25;
 int const DIME = 10;
 int const NICKEL = 5;
 int const PENNY = 1;
 
 
 
    float userInput = 0;
    int money = 0;
    int coinCount = 0;

    do {
        printf("Please enter an amount of money ");
        userInput = GetFloat();
    } while (userInput < 0);

    money = (int)round(userInput * 100);

    // number of quarters:
    coinCount = money / QUARTER;
    money = money % QUARTER;


    // number of dimes:
    coinCount += money / DIME;
    money = money % DIME;

    
    // number of nickels:
    coinCount += money / NICKEL;
    money = money % NICKEL;
 

    // number of pennies:
    coinCount += money / PENNY;
    money = money % PENNY;


    printf("%i\n", coinCount);
 
 
 
 
 
 
}
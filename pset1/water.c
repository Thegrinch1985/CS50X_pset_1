# include <stdio.h>
#include <cs50.h>

int main (void)




{
    int water = 192;
    int ounces = 16;
    printf("Please enter the amount of time spent in the shower  \n");
    int minutes = GetInt();
    
    int bottles =  (water / ounces) * minutes;
    printf("The amount of minutes spent in the shower in \n minutes :%d \n bottles: %d  \n", minutes,bottles);
    return 0;
    
}
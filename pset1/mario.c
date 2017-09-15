# include <stdio.h>
#include <cs50.h>

int main (void)
{
int height;
int length;
int space;
int hash;



    do
    {
        printf("Please enter the height of the half pyramid using intergers greater than 0 and less than or equal to 23 \t\n");
        height = GetInt();
    }
        
        while ((height < 0) || (height>=24));
        
      
        {
            
        for ( length = 0; length < height;length++)
        
        {
            for (space = (height - length); space > 1; space--)
            {
            printf(" ");
            
            }
        for(hash = 1; hash <= (length +1); hash++)
        {
            
            printf("#");
        }
        printf("  ");
        for(hash = 1; hash <= (length +1); hash++)
        {
            
            printf("#");
        }
            
        printf("\n");
        }
        return 0;
       
        }
        
            
           
                
    
       
}
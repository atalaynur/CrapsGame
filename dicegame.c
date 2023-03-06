#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int diceA;
    int diceB;
    int diceC;
    int diceD;
    int point;
    char yesorno[100];
    int a=0;
    diceA = 1 + rand() % 6;
    diceB = 1 + rand() % 6;
    printf("\nyour dice number is %d", diceA);
    printf(" and %d\n ", diceB);

    if (diceA + diceB == 7 || diceA + diceB == 11)
    {
        printf("\n CONGRATULATIONS YOU WON BUDDY \n");
        return 0;
    }

    if (diceA + diceB == 2 || diceA + diceB == 3 || diceA + diceB == 12)
    {
        printf("\n OH, YOU LOST :) \n");
        return 0;
    }

    else

        point = diceA + diceB;

    printf("\nYOUR SCORE IS %d \n", point);

    printf("\nAFTER THAT, YOU NEED TO CATCH YOUR SCORE\n");

    {
        do
        {

            printf("\nDO YOU WANNA TRY AGAIN? ONLY WRITE YES OR NO.\n");
            scanf("%s", yesorno);

            while(yesorno[a] != '\0')
            a++;

            if (a==2)
            {
                printf("\nSEE YOU NEX TIME!\n");
                
                return 0;
            }
            
            else

            printf("\nTRYING AGAIN\n");
            diceC = 1 + rand() % 6;
            diceD = 1 + rand() % 6;
            printf("\nyour dice number is %d", diceC);
            printf(" and %d \n", diceD);
            if (diceC + diceD == 7)
            {
                printf("\nOH, YOU LOST\n");
                return 0;
            }

            else if (diceC + diceD == point)
            {
                printf("\nCONGRATULATIONS YOU WON\n");

                return 0;
            }

        } while (diceC + diceD != point || diceC + diceD != 7);
    
    }
}
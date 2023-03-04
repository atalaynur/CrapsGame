#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int dice1;
    int dice2;
    int dice3;
    int dice4;
    int point;
    dice1 = 1 + rand() % 6;
    dice2 = 1 + rand() % 6;
    printf("\nyour dice number is %d", dice1);
    printf(" and %d\n ", dice2);

    if (dice1 + dice2 == 7 || dice1 + dice2 == 11)
    {
        printf("\n YOU WIN\n");
        return 0;
    }

    if (dice1 + dice2 == 2 || dice1 + dice2 == 3 || dice1 + dice2 == 12)
    {
        printf("\n YOU LOSE\n");
        return 0;
    }

    else

        point = dice1 + dice2;

    printf("\nyour point is %d \n", point);

    printf("\nyou must keep your score\n");

    {
        do
        {
            printf("\nthe dice are being rolled again\n");
            dice3 = 1 + rand() % 6;
            dice4 = 1 + rand() % 6;
            printf("\nyour dice number is %d", dice3);
            printf(" and %d \n", dice4);
            if (dice3 + dice4 == 7)
            {
                printf("\nYOU LOST\n");
                return 0;
            }

            else if (dice3 + dice4 == point)
            {
                printf("\nYOU WIN\n");

                return 0;
            }

        } while (dice3 + dice4 != point || dice3 + dice4 != 7);
    }
}
#include <stdio.h>

void tree(int starnum, int rownum, int spacenum)
{
    int i, j;
    if (rownum == 0)
    {
        return;
    }

    for (i = 0; i < spacenum; i++)
    {
        printf(" ");
    }

    for (i = 0; i < starnum * 2 - 1; i++)
    {
        printf("*");
    }

    printf("\n");


return tree(starnum + 1, rownum - 1, spacenum - 1);

 
}



int main()
{
    int i;
    tree(1, 3,4);
    tree(1,5,4);

    for ( i = 0; i < 3; i++)
    {
        printf("    |\n \n");
    }
    


    return 0;
}

#include <stdio.h>

int divid(int x, int y) {  

    if (y==0)
    {
        return 0;
    }
    
    if (x-y==0)
    {
        return 1;
    }
    
    if (x>y)
    {
        return 1 + divid(x - y, y);
    }
    else
    return 0;
}


int main()
{
    int a, b;
    printf("\nenter two appropriate numbers for the division process: \n");
    scanf("%d %d", &a, &b);
    int result= divid(a,b);
    printf("\n%d / %d = %d\n", a,b,result);

    printf("\nNOTE:you should know that this program does not give values after commas.\n");

 return 0 ;
}
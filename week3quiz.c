
#include <stdio.h>

int power(int base, int top)
{
    if (top == 0)
    {
        return 1;
    }

    else
    {
        return base * power(base, top - 1);
    }
}




int main()
{
    int a, b;
    printf("base:");
    scanf("%d", &a);
    printf("top:");
    scanf("%d", &b);
    int c = power(a, b);
    printf("%d result:",c);

    return 0;
}

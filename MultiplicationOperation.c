#include <stdio.h>

int multiplication(int a, int b)
{
int c;
if (b==0)
{
return 0;
}

return a+ multiplication(a,b-1);


}

int main()
{
    int x, y;
printf("please enter two number:");
scanf("%d %d",&x,&y);
int result= multiplication(x,y);
printf("%d * %d = %d ", x,y, result);


}
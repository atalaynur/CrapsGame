#include <stdio.h>

int tree(int yıldızsayısı, int satırsayısı, int bosluksayısı )
{

int j,i;

if (satırsayısı==0)
{
  return 0;
}



if (yıldızsayısı<=5)
{
 
 
 if (satırsayısı>0)
{
    for ( i = 0; i < bosluksayısı; i++)
   {
    printf(" ");
   }
   
    tree(yıldızsayısı, satırsayısı-1,bosluksayısı-1);
   
}





    for (j = 1; j <=(yıldızsayısı*2-1); j++)
    
        printf("*");
        printf("\n");

    tree(yıldızsayısı+1, satırsayısı-1 ,bosluksayısı -1);
    

}



return 0;
}







int main()
{
    int x=5;
    tree(1,x,x);
return 0;
}
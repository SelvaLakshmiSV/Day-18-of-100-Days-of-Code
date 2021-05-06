#include<stdio.h>
int main()
{   int number;
    printf("Enter number of rows / columns : ");
    scanf("%d",&number);
    for(int row = 1;row<=number;row++,printf("\n"))
    {
        for(int col=1;col<=number;col++){
            if((row==1)||(row==number)||(col==1)||(col==number))
              printf("* ");
            else
              printf("  ");
        }
    }
    return 0;
}

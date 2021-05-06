#include<stdio.h>
int main()
{   int number;
    printf("Enter number of rows / columns : ");
    scanf("%d",&number);
    for(int row = 1;row<=number;row++,printf("\n"))
    {
        for(int col=1;col<=number;col++){
            printf("* ");
        }
    }
    return 0;
}

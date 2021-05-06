#include<stdio.h>
int main()
{
    int row,col,number;
    printf("Enter a number of rows and columns \n");
    scanf("%d",&number);
    for(row = 1;row<=number;row++,printf("\n")){
        for(col=row;col<number;col++){
            printf("  ");
        }
        for(col = 1;col<=(2*row-1);col++){
            printf("* ");
        }
    }
    return 0;
}

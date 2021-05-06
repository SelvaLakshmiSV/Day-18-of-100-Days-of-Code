#include<stdio.h>
int main()
{
    int rows,column;
    int row,col;
    printf("Enter number of rows\n");
    scanf("%d",&rows);
    printf("Enter number of columns\n");
    scanf("%d",&column);
    for(row = 1;row<=rows;row++,printf("\n")){
        for(col = 1;col<=column;col++){
            printf("* ");
        }
    }
    return 0;
}

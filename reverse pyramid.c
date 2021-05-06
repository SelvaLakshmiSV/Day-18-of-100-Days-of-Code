#include<stdio.h>
int main()
{
    int row,col,number;
    printf("Enter the number of rows / columns\n");
    scanf("%d",&number);
    for(row = 1;row<=number;row++,printf("\n")){
        for(col = 1;col<row;col++){
            printf("  ");
        }
        for(col = 1;col<=2*number-(2*row-1);col++){
            printf("* ");
        }
    }
    return 0;
}

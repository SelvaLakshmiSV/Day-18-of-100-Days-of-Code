#include<Stdio.h>
int main()
{
    int number;
    int row,col;
    printf("Enter number of rows/col:\n");
    scanf("%d",&number);
    for(row=1;row<=number;row++,printf("\n")){
        for(col=1;col<row;col++){
            printf(" ");
        }
        for(col = 1;col<=number;col++){
            if(row==1||row==number||col == 1||col==number)
               printf("* ");
            else
               printf("  ");
        }
    }
    return 0;
}

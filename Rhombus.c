#include<Stdio.h>
int main()
{
    int number;
    int row,col;
    printf("Enter number of rows/col:\n");
    scanf("%d",&number);
    for(row=1;row<=number;row++,printf("\n")){
        for(col=row;col<number;col++){
            printf("  ");
        }
        for(col = 1;col<=number;col++){
            printf("* ");
        }
    }
    return 0;
}

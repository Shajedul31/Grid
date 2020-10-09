#include <stdio.h>
int factorial (int x){
    int i, result=1;
    for(i=x; i>0; i--){
        result *= i;
    }
    return result;
}
int main()
{
    int x, y;
    printf("grid x*y : \t");

    scanf("%d%d", &x, &y);

    int  up1 = x+y-2, down1 = x-1, down2 = y-1;
    int i,j;

    int path_no= factorial(up1) / (factorial(down1)*factorial(down2));
    printf("%d \n",path_no);

    return 0;
}

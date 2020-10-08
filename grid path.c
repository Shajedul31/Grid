#include <stdio.h>
int main()
{
    int x, y;
    printf("grid x*y : \t");

    scanf("%d%d", &x, &y);

    int  up1=1, down1=1, down2=1;
    int i,j;

    for(i= (x+y-2); i>0; i--){
        up1 *= i;
    }
    for(i= (x-1); i>0; i--){
        down1 *= i;
    }
    for(i= (y-1); i>0; i--){
        down2 *= i;
    }

    int path_no = up1 / (down1 * down2);
    printf("%d" \n,path_no);

    return 0;
}

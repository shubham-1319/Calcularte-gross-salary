// calcularte gross salary
//Create by Me...
#include <stdio.h>
void main()
{
    float bp,da,hra,grpay;
    printf("\nEnter the Basic pay:");
    scanf("%f",&bp);
    da=0.4*bp;
    hra=0.2*bp;
    grpay=bp+da+hra;
    printf("Basic salry =%f\n",bp);
    printf("darness allounce =%f\n",da);
    printf("House rent allowance =%f\n",hra);
    printf("Gross pay %f\n",grpay);
    return 0;

}

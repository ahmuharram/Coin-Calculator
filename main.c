#include <stdio.h>
#include <stdlib.h>
int main()
{
    int Li1, KU50, KU25, KU10, KU5, TotalKu, KuToLi, RemainingKu;

    printf("Enter the number of 1 LIRA > ");
    scanf("%d",&Li1);
    printf("Enter the number of 50 KURUS > ");
    scanf("%d",&KU50);
    printf("Enter the number of 25 KURUS > ");
    scanf("%d",&KU25);
    printf("Enter the number of 10 KURUS > ");
    scanf("%d",&KU10);
    printf("Enter the number of 5 KURUS > ");
    scanf("%d",&KU5);


    TotalKu = Li1*100 + KU50*50 + KU25*25 + KU10*10 + KU5*5;

    KuToLi= TotalKu/100;  /* 1 LIRA is 100 KURUS, so we need to divide	 TotalKu to 100 in order to find how many liras we have. Note: When you divide two integers the result is always an integer */

    RemainingKu=TotalKu%100;    /*We need to calculate how many kurus do we have after we convert it to liras so we calculate remainder 							from 100 via mod operator */

    printf("You have %d lira and %d kurus in your pocket", KuToLi, RemainingKu);

    return 0;


}

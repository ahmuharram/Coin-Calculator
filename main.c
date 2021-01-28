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


    TotalKu = Li1*100 + KU50*50 + KU25*25 + KU10*10 + KU5*5; // converts all the numbers into Kurus

    KuToLi= TotalKu/100;  // 1 LIRA is 100 KURUS, TotalKu divided by 100 will find how many liras I have.

    RemainingKu=TotalKu%100;    // Calculates how many kurus I have left after converting to liras

    printf("You have %d lira and %d kurus in your pocket", KuToLi, RemainingKu);

    return 0;


}

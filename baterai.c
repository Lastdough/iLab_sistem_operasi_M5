#include <stdio.h>

int main ()
{
    int baterai = 10;

    while(baterai > 15)
    {
        baterai -= 5;
        printf("Battery Pecentage = %d%%\n", baterai);
    }

    printf("Low Battery!! \n%d%% of Battery remaining \n", baterai);    

    return 0;
}
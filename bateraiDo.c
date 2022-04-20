#include <stdio.h>

int main()
{
    int baterai = 10;

    do
    {
        baterai -= 5;
        printf("Battery Pecentage = %d%%\n", baterai);
    } while (baterai > 15);

    printf("Low Battery!! \n%d%% of Battery remaining \n", baterai);

    return 0;
}
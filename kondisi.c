#include <stdio.h>

int main()
{
    // array himpunan angka tidak terurut
    int number[] = {11, 4, 16, 19, 5, 14, 8, 13};
    // variable len menyimpan panjang array
    int len = (sizeof(number) / sizeof(*number));

    //
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (number[j] < number[i])
            {
                int temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d ", number[i]);
    }
    printf("\n");
    return 0;
}
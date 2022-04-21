#include <stdio.h>

int main()
{
    // array himpunan angka tidak terurut
    int number[] = {11, 4, 16, 19, 5, 14, 8, 13};
    // variable len menyimpan panjang array
    int len = (sizeof(number) / sizeof(*number));
    int i, j, o;
    /**
     * For loop pertama untuk mengulang pengurutan sebanyak
     * panjang himpunan number pada array
     */
    for (i = 0; i < len; i++)
    {
        /**
         * For loop kedua untuk mengulang perbandingan angka pada index 
         * array number i dan dan j menggunakan kondisi if 
         * jika number[j] < number[i] posisi angka akan di tukar 
         */
        for (j = i + 1; j < len; j++)
        {
            if (number[j] < number[i])
            {
                int temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
    }

    // Untuk mencetak kembali array yang sudah terurut dapat menggunakan for loop
    for (i = 0; i < len; i++)
    {
        printf("%d ", number[i]);
    }
    
    printf("\n");
    return 0;
}
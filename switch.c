#include <stdio.h>

int pilihan;

void tampilanMenu();
void switchCaseMenu(int ref);

int main()
{
    tampilanMenu();
    scanf("%i", &pilihan);
    switchCaseMenu(pilihan);
}

void tampilanMenu()
{
    printf("----------- Menu -----------\n\n");

    printf("\t1. Kopi Hitam\n\n");
    
    printf("\t2. Kopi Gayo\n\n");
    
    printf("\t3. Kopi Tubruk\n\n");
    
    printf("----------------------------\n\n");
    
    printf("Masukan Pilihan Anda : ");
}

void switchCaseMenu(int ref)
{
    switch (ref)
    {
    case 1:
    printf("Anda memilih Kopi Hitam\n");
        break;
    case 2:
    printf("Anda memilih Kopi Gayo\n");
        break;
    case 3:
    printf("Anda memilih Kopi Tubruk\n");
        break;
    default:
    printf("Pilihan yang anda pilih tidak ada!\n");
        break;
    }
}
#include<stdio.h>

int main()
{
    int sayi;
    printf("Lütfen bir sayi giriniz:");
    scanf("%d",&sayi);
    if(sayi%2==0)
    {
    printf("Sayiniz çifttir.");
    }
    else
    {
    printf("Sayiniz tektir.");
    }
    return 0;
}

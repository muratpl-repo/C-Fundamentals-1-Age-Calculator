#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/////////////// DOÐUM TARÝHÝ HESAPLAMA
int sayi;
int main()
{
    setlocale(LC_ALL,"Turkish");
    printf("Lütfen doðum tarihini giriniz:\n");
    scanf("%d",&sayi);
    printf("Yaþýnýz: %d",2022-sayi);
    return 0;
}



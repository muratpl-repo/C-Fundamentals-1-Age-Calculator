#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/////////////// DO�UM TAR�H� HESAPLAMA
int sayi;
int main()
{
    setlocale(LC_ALL,"Turkish");
    printf("L�tfen do�um tarihini giriniz:\n");
    scanf("%d",&sayi);
    printf("Ya��n�z: %d",2022-sayi);
    return 0;
}



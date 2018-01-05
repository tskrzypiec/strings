#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

void usun_napis(char*A)
{

    A[0]=0;

}

void usun_napis_wchar_t(wchar_t*A)
{

    A[0]=0;

}


int main()
{


    char tab[] = {" Tomek "};
    char tab2[] = {" Asia "};

    printf("Napis w tabeli to %s\n", tab);

    usun_napis(tab);

    printf("Napis w tabeli po ""usun"" to %s\n", tab);

    printf("Napis w tabeli wchar_t to %s\n", tab2);

    usun_napis_wchar_t(tab2);

    printf("Napis w tabeli po ""usun"" wchar_t to %s", tab);

    return 0;

}
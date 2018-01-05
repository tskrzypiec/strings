#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wctype.h>
#include <wchar.h>


void przepisz(char*A,char*B)
{

    int i = 0;
    while(A[i]!='\0')
    {
        B[i]=A[i];
        i++;
    }

}

int main()
{

    char tab[] = {" Tomek "};
    char tab2[] = {" Kasia "};

    printf("Napis w tabeli to %s\n", tab);

    przepisz(tab,tab2);

    printf("Napis w tabeli po kopiuj to \n");

    printf("%s",tab);
    printf(" i %s\n ", tab2);


    return 0;

}
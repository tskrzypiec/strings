#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <wctype.h>
//#include <wchar.h>


void male_duze(char *nap) {

    int i = 0;

    for (i = 0; nap[i] != 0; i++) {

        if ((nap[i] >= 'A') && (nap[i] <= 'Z')) {
            nap[i] = nap[i] + 32;
        } else if ((nap[i] >= 'a') && (nap[i] <= 'z')) {
            nap[i] = nap[i] - 32;
        }

    }

}

int main() {

    char tab[] = {" TOMEK "};
    char tab2[] = {" kasia "};

    printf("Napis w tabeli to %s\n", tab);

    male_duze(tab);

    printf("Napis w tabeli po funckji to%s\n", tab);

    printf("Napis w tabeli to %s\n", tab2);

    male_duze(tab2);

    printf("Napis w tabeli po funckji to%s\n", tab2);
    return 0;

}
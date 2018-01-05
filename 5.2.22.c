#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *sklej(char *nap1, char *nap2, char *nap3) {

    char *wynik = malloc(
            (strlen(nap1) + strlen(nap2) + strlen(nap3) + 1) * sizeof(char)); // strlen zwraca dl lancucha bez '\0'

    strcpy(wynik, nap1);
    strcat(wynik, nap2);
    strcat(wynik, nap3);

    return wynik;
}

int main() {

    char imie[] = " Tomek";
    char nazwisko[] = " Skrzypiec";
    char text[] = "Hej";

    char *wsk = sklej(text, imie, nazwisko);

    printf("%s\n", wsk);

    return 0;
}
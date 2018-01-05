#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


char *czas(int h, int min, int sek) {

    char *wynik = malloc(9 * sizeof(char));

    sprintf(wynik, "%02d:%02d:%02d", h, min, sek);

    return wynik;
}


int main() {

    int h = 9;
    int m = 20;
    int s = 3;

    
    char *wsk=czas(h, m, s);

    printf(" Mamy czas: %s\n", wsk);


    return 0;

}
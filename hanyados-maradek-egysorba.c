#include <stdio.h>

int main() {

     int a, b;
     printf("Adjon meg egy szamot: ");
     scanf("%d", &a);
     printf("Adjon meg még egy szamot: ");
     scanf("%d", &b);
     int hanyados = a/b;
     int maradek = a%b;

     printf("A hányados: %d, a maradék: %d", hanyados, maradek);

    return 0;
}
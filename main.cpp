#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#include "lib/salida.cpp"

using namespace std;

int main(){
    setlocale(LC_ALL, "");
    system("clear");
    pantalla* screen = build(20,75,'f','0');
    displaySaludo();
    system("pause");
    
    render(screen);

    delete[] screen->data;
    delete[] screen;
    return EXIT_SUCCESS;
}

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#include "lib/salida.cpp"

using namespace std;

int main(){
    setlocale(LC_ALL, "");
    system("cls");

    pantalla* screen = build(50,150,'f','0');
    displaySaludo();
    system("pause"); 
    
    render(screen);

    delete[] screen->data;
    delete[] screen;
    return EXIT_SUCCESS;
}

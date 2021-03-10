#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "lib/salida.cpp"

using namespace std;

int main(){
    pantalla* screen = build(2,6,'f','0');

    cout<<screen;
    return EXIT_SUCCESS;
}

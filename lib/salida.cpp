#pragma once
#include <vector>

using namespace std;

struct pantalla {
    int alto;
    int ancho;
    char colorFuente;
    char colorFondo;
    char** data;
};

pantalla* build(int alto, int ancho, char font_color, char background_color){
    static char** data;

    for(int i=0; i<alto; i++){
        data[i] = new char[ancho];
        for (int j = 0; j < ancho; j++){
            data[i][j] = ' ';
        }
    }

    static pantalla screen = {alto, ancho, font_color, background_color, data};
    return &screen;
}
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

void displaySaludo(){
    //pantalla* screen = build(20, 20);
    cout<<"          _____                   _____                   _____                   _____                   _____          "<<endl;
    cout<<"         /\\    \\                 /\\    \\                 /\\    \\                 /\\    \\                 /\\    \\         "<<endl;
    cout<<"        /::\\    \\               /::\\____\\               /::\\    \\               /::\\____\\               /::\\    \\        "<<endl;
    cout<<"       /::::\\    \\             /::::|   |              /::::\\    \\             /:::/    /              /::::\\    \\       "<<endl;
    cout<<"      /::::::\\    \\           /:::::|   |             /::::::\\    \\           /:::/    /              /::::::\\    \\      "<<endl;
    cout<<"     /:::/\\:::\\    \\         /::::::|   |            /:::/\\:::\\    \\         /:::/    /              /:::/\\:::\\    \\     "<<endl;
    cout<<"    /:::/__\\:::\\    \\       /:::/|::|   |           /:::/__\\:::\\    \\       /:::/____/              /:::/__\\:::\\    \\    "<<endl;
    cout<<"    \\:::\\   \\:::\\    \\     /:::/ |::|   |          /::::\\   \\:::\\    \\     /::::\\    \\             /::::\\   \\:::\\    \\   "<<endl;
    cout<<"  ___\\:::\\   \\:::\\    \\   /:::/  |::|   | _____   /::::::\\   \\:::\\    \\   /::::::\\____\\________   /::::::\\   \\:::\\    \\  "<<endl;
    cout<<" /\\   \\:::\\   \\:::\\    \\ /:::/   |::|   |/\\    \\ /:::/\\:::\\   \\:::\\    \\ /:::/\\:::::::::::\\    \\ /:::/\\:::\\   \\:::\\    \\ "<<endl;
    cout<<"/::\\   \\:::\\   \\:::\\____/:: /    |::|   /::\\____/:::/  \\:::\\   \\:::\\____/:::/  |:::::::::::\\____/:::/__\\:::\\   \\:::\\____\\"<<endl;
    cout<<"\\:::\\   \\:::\\   \\::/    \\::/    /|::|  /:::/    \\::/    \\:::\\  /:::/    \\::/   |::|~~~|~~~~~    \\:::\\   \\:::\\   \\::/    /"<<endl;
    cout<<" \\:::\\   \\:::\\   \\/____/ \\/____/ |::| /:::/    / \\/____/ \\:::\\/:::/    / \\/____|::|   |          \\:::\\   \\:::\\   \\/____/ "<<endl;
    cout<<"  \\:::\\   \\:::\\    \\             |::|/:::/    /           \\::::::/    /        |::|   |           \\:::\\   \\:::\\    \\     "<<endl;
    cout<<"   \\:::\\   \\:::\\____\\            |::::::/    /             \\::::/    /         |::|   |            \\:::\\   \\:::\\____\\    "<<endl;
    cout<<"    \\:::\\  /:::/    /            |:::::/    /              /:::/    /          |::|   |             \\:::\\   \\::/    /    "<<endl;
    cout<<"     \\:::\\/:::/    /             |::::/    /              /:::/    /           |::|   |              \\:::\\   \\/____/     "<<endl;
    cout<<"      \\::::::/    /              /:::/    /              /:::/    /            |::|   |               \\:::\\    \\         "<<endl;
    cout<<"       \\::::/    /              /:::/    /              /:::/    /             \\::|   |                \\:::\\____\\        "<<endl;
    cout<<"        \\::/    /               \\::/    /               \\::/    /               \\:|   |                 \\::/    /        "<<endl;
    cout<<"         \\/____/                 \\/____/                 \\/____/                 \\|___|                  \\/____/         "<<endl;
    cout<<endl<<endl;
    cout<<((char) 169)<<" Daniel Osorio Orozco - Ricky Tam Lin"<<endl;
};

pantalla* build(int alto, int ancho, char font_color, char background_color){
    static char** data = new char*[alto];

    for(int i=0; i<alto; i++){
        data[i] = new char[ancho];
        for (int j = 0; j < ancho; j++){
            data[i][j] = '+';
        }
    }

    static pantalla screen = {alto, ancho, font_color, background_color, data};
    return &screen;
}

void render(pantalla* screen){
    system("cls");
    for (int i = 0; i < screen->alto; i++){
        for (int j = 0; j < screen->ancho; j++){
            cout<<*(*(screen->data+i)+j);
        }
        cout<<endl;
    }
}

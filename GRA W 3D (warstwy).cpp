#include <iostream>
#include <iostream>
#include <conio.h>
#include <time.h>
#include <windows.h>

using namespace std;

int main()
{
    // Wczytywanie gry
    cout<<"Loading";
    Sleep(500);
    system("cls");
    cout<<"Loading.";
    Sleep(500);
    system("cls");
    cout<<"Loading..";
    Sleep(500);
    system("cls");
    cout<<"Loading...";
    Sleep(500);
    system("cls");
    cout<<"Loading";
    Sleep(500);
    system("cls");
    cout<<"Loading.";
    Sleep(500);
    system("cls");
    cout<<"Loading..";
    Sleep(500);
    system("cls");

    // menu
    int START;
    Sleep(500);
    cout<<"** BEAT ";
    Sleep(1000);
    cout<<"THIS ";
    Sleep(1000);
    cout<<"GAME **"<<endl;
    Sleep(1000);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Press ENTER to start.";
    do{START = getch(); while (kbhit()) START = getch();}while (START !=13);
    system("cls");

    // instrukcja
    cout<<endl;
    cout<<"Press Enter to change perspection.";
    cout<<endl;
    cout<<endl;
    cout<<endl;
    Sleep(1000);
    cout<<"Press ENTER to continue.";
    do{START = getch(); while (kbhit()) START = getch();}while (START !=13);
    system("cls");
    cout<<endl;
    cout<<"Find key ( o- ) to unlock doors ( [] ).";
    cout<<endl;
    cout<<endl;
    cout<<endl;
    Sleep(1000);
    cout<<"Press ENTER to continue.";
    do{START = getch(); while (kbhit()) START = getch();}while (START !=13);

    system("cls");
    cout<<"Loading";
    Sleep(500);
    system("cls");
    cout<<"Loading.";
    Sleep(500);
    system("cls");
    cout<<"Loading..";
    Sleep(500);
    system("cls");
    cout<<"Loading...";
    Sleep(500);
    system("cls");
    cout<<"Loading";
    Sleep(500);
    system("cls");
    cout<<"Loading.";
    Sleep(500);
    system("cls");
    cout<<"Loading..";
    Sleep(500);
    system("cls");

    // komunikat
    cout<<"Good luck.";
    Sleep(3000);

    //             z   y   x
    string plansza[10][10][10] =
    {
        // wall
        "##","##","##","##","##","##","##","##","##","##",
        "##","##","##","##","##","##","##","##","##","##",
        "##","##","##","##","##","##","##","##","##","##",
        "##","##","##","##","##","##","##","##","##","##",
        "##","##","##","##","##","##","##","##","##","##",
        "##","##","##","##","##","##","##","##","##","##",
        "##","##","##","##","##","##","##","##","##","##",
        "##","##","##","##","##","##","##","##","##","##",
        "##","##","##","##","##","##","##","##","##","##",
        "##","##","##","##","##","##","##","##","##","##",

        // 1
        "##","##","##","##","##","##","##","##","##","##",
        "##","  ","  ","  ","  ","  ","  ","  ","  ","##",
        "##","##","##","##","  ","  ","##","##","  ","##",
        "##","##","##","  ","  ","  ","##","##","##","##",
        "##","  ","  ","  ","##","  ","##","  ","  ","##",
        "##","##","##","##","##","  ","  ","  ","  ","##",
        "##","  ","  ","  ","##","##","##","##","##","##",
        "##","##","##","##","##","  ","  ","  ","  ","##",
        "##","  ","##","  ","  ","  ","  ","  ","  ","##",
        "##","##","##","##","##","##","##","##","##","##",

        // 2
        "##","##","##","##","##","##","##","##","##","##",
        "##","##","  ","  ","##","  ","  ","  ","  ","##",
        "##","##","##","##","  ","  ","  ","  ","##","##",
        "##","##","  ","  ","##","##","  ","  ","  ","##",
        "##","  ","  ","  ","  ","  ","  ","  ","##","##",
        "##","  ","##","##","##","  ","  ","##","  ","##",
        "##","  ","  ","  ","##","  ","##","##","  ","##",
        "##","##","##","##","  ","  ","  ","##","##","##",
        "##","  ","  ","  ","  ","  ","  ","##","##","##",
        "##","##","##","##","##","##","##","##","##","##",

        // 3
        "##","##","##","##","##","##","##","##","##","##",
        "##","  ","  ","  ","##","##","  ","  ","  ","##",
        "##","  ","##","##","  ","##","  ","##","##","##",
        "##","##","##","##","##","##","##","  ","  ","##",
        "##","##","##","##","  ","  ","  ","  ","  ","##",
        "##","##","  ","##","  ","  ","##","##","##","##",
        "##","##","  ","  ","##","  ","  ","  ","##","##",
        "##","##","##","##","##","  ","##","  ","##","##",
        "##","  ","  ","  ","  ","  ","  ","  ","  ","##",
        "##","##","##","##","##","##","##","##","##","##",

        // 4
        "##","##","##","##","##","##","##","##","##","##",
        "##","  ","##","##","##","  ","  ","  ","##","##",
        "##","##","  ","##","  ","  ","##","  ","  ","##",
        "##","  ","  ","##","  ","##","  ","##","  ","##",
        "##","##","  ","  ","  ","  ","  ","##","  ","##",
        "##","o-","##","  ","##","##","##","##","  ","##",
        "##","##","##","  ","##","##","##","##","  ","##",
        "##","  ","##","##","##","  ","##","##","##","##",
        "##","##","##","  ","  ","  ","  ","##","  ","##",
        "##","##","##","##","##","##","##","##","##","##",

        // 5
        "##","##","##","##","##","##","##","##","##","##",
        "##","  ","  ","##","  ","  ","  ","##","##","##",
        "##","  ","  ","##","  ","##","  ","##","##","##",
        "##","  ","##","##","  ","##","##","##","  ","##",
        "##","##","  ","  ","##","##","##","  ","  ","##",
        "##","  ","  ","##","  ","##","  ","  ","##","##",
        "##","##","  ","  ","  ","  ","  ","##","##","##",
        "##","  ","  ","##","##","##","##","  ","##","##",
        "##","  ","##","  ","  ","  ","  ","  ","  ","##",
        "##","##","##","##","##","##","##","##","##","##",

        // 6
        "##","##","##","##","##","##","##","##","##","##",
        "##","##","##","##","  ","  ","##","  ","  ","##",
        "##","##","  ","  ","##","##","##","  ","##","##",
        "##","##","##","  ","##","  ","  ","  ","##","##",
        "##","##","  ","  ","  ","  ","##","##","  ","##",
        "##","  ","##","##","##","##","  ","  ","##","##",
        "##","##","##","  ","  ","  ","##","##","##","##",
        "##","##","  ","  ","##","##","##","##","##","##",
        "##","##","##","  ","##","##","##","  ","  ","##",
        "##","##","##","##","##","##","##","##","##","##",

        // 7
        "##","##","##","##","##","##","##","##","##","##",
        "##","##","  ","  ","  ","  ","##","  ","  ","##",
        "##","##","  ","##","##","  ","  ","  ","##","##",
        "##","  ","  ","##","  ","  ","  ","##","##","##",
        "##","  ","  ","##","  ","  ","##","  ","##","##",
        "##","  ","##","##","##","  ","##","  ","  ","##",
        "##","##","  ","##","  ","  ","##","  ","##","##",
        "##","  ","  ","##","  ","##","  ","##","##","##",
        "##","  ","  ","##","  ","  ","  ","##","  ","##",
        "##","##","##","##","##","##","##","##","##","##",

        // 8
        "##","##","##","##","##","##","##","##","##","##",
        "##","##","##","  ","  ","##","  ","  ","  ","##",
        "##","  ","##","##","##","##","##","##","  ","##",
        "##","##","##","##","  ","  ","  ","  ","  ","##",
        "##","  ","##","##","##","##","  ","##","##","##",
        "##","  ","##","##","  ","  ","  ","##","  ","##",
        "##","  ","  ","##","  ","  ","##","  ","  ","##",
        "##","##","##","  ","##","##","  ","##","##","##",
        "##","  ","##","  ","  ","  ","  ","##","**","##",
        "##","##","##","##","##","##","##","##","##","##",

        // wall
        "##","##","##","##","##","##","##","##","##","##",
        "##","##","##","##","##","##","##","##","##","##",
        "##","##","##","##","##","##","##","##","##","##",
        "##","##","##","##","##","##","##","##","##","##",
        "##","##","##","##","##","##","##","##","##","##",
        "##","##","##","##","##","##","##","##","##","##",
        "##","##","##","##","##","##","##","##","##","##",
        "##","##","##","##","##","##","##","##","##","##",
        "##","##","##","##","##","##","##","##","##","##",
        "##","##","##","##","##","##","##","##","##","##",
    };

    int c, y = 1, x = 1, z = 1;
    int key = 0; // "o-"
    do
    {

        // wyswietlanie tablicy xy
        system("cls");

        cout<<key<<endl;

        plansza[z][y][x] = "><";

        for (int y=0; y<10; y++)
        {
            for (int x=0; x<10; x++)
            {
                cout<<plansza[z][y][x];
            }
        cout<<endl;
        }
        // sprawdzenie klawisza
        c = getch(); while (kbhit()) c = getch();
        if (c == 77) // strzalka w lewo
        {
            if (plansza[z][y][x + 1] == "  ") {plansza[z][y][x] = "  "; x++;} // strzalka w lewo
            else if (plansza[z][y][x + 1] == "o-") {plansza[z][y][x] = "  "; x++, key=1;} // zdobycie klucza
            else if (plansza[z][y][x + 1] == "**") if (key == 1) {plansza[z][y][x] = "  "; x++, system("cls"), cout<<"YOU DID IT!!!"<<endl; return 0;} // Koniec
        }
        if (c == 75) // strzalka w prawo
        {
            if (plansza[z][y][x - 1] == "  ") {plansza[z][y][x] = "  "; x--;} // strzalka w prawo
            else if (plansza[z][y][x - 1] == "o-") {plansza[z][y][x] = "  "; x--, key=1;} // zdobycie klucza
            else if (plansza[z][y][x - 1] == "**") if (key == 1) {plansza[z][y][x] = "  "; x--, system("cls"), cout<<"YOU DID IT!!!"<<endl; return 0;} //Koniec
        }
        if (c == 72) // strzalka w gore
        {
            if (plansza[z][y - 1][x] == "  ") {plansza[z][y][x] = "  "; y--;} // strzalka w gore
            else if (plansza[z][y - 1][x] == "o-") {plansza[z][y][x] = "  "; y--, key=1;} // zdobycie klucza
            else if (plansza[z][y - 1][x] == "**") if (key == 1) {plansza[z][y][x] = "  "; y--, system("cls"), cout<<"YOU DID IT!!!"<<endl; return 0;} // Koniec
        }
        if (c == 80) // strzalka w dol
        {
            if (plansza[z][y + 1][x] == "  ") {plansza[z][y][x] = "  "; y++;} // strzalka w dol
            else if (plansza[z][y + 1][x] == "o-") {plansza[z][y][x] = "  "; y++, key=1;} // zdobycie klucza
            else if (plansza[z][y + 1][x] == "**") if (key == 1) {plansza[z][y][x] = "  "; y++, system("cls"), cout<<"YOU DID IT!!!"<<endl; return 0;} //Koniec
        }
        if (c == 13) // zmiana perspektywy
        {
            do
            {
                // wyswietlanie tablicy yz
                system("cls");

                cout<<key<<endl;

                plansza[z][y][x] = "><";

                for (int y=0; y<10; y++)
                {
                    for (int z=0; z<10; z++)
                    {
                        cout<<plansza[z][y][x];
                    }
                cout<<endl;
                }
                // sprawdzenie klawisza
                c = getch(); while (kbhit()) c = getch();
                if (c == 77) // strzalka w lewo
                {
                    if (plansza[z + 1][y][x] == "  ") {plansza[z][y][x] = "  "; z++;} // strzalka w lewo
                    else if (plansza[z + 1][y][x] == "o-") {plansza[z][y][x] = "  "; z++, key=1;} // zdobycie klucza
                    else if (plansza[z + 1][y][x] == "**") if (key == 1) {plansza[z][y][x] = "  "; z++, system("cls"), cout<<"YOU DID IT!!!"<<endl; return 0;} // Koniec
                }
                if (c == 75) // strzalka w prawo
                {
                    if (plansza[z - 1][y][x] == "  ") {plansza[z][y][x] = "  "; z--;} // strzalka w prawo
                    else if (plansza[z - 1][y][x] == "o-") {plansza[z][y][x] = "  "; z--, key=1;} // zdobycie klucza
                    else if (plansza[z - 1][y][x] == "**") if (key == 1) {plansza[z][y][x] = "  "; z--, system("cls"), cout<<"YOU DID IT!!!"<<endl; return 0;} //Koniec
                }
                if (c == 72) // strzalka w gore
                {
                    if (plansza[z][y - 1][x] == "  ") {plansza[z][y][x] = "  "; y--;} // strzalka w gore
                    else if (plansza[z][y - 1][x] == "o-") {plansza[z][y][x] = "  "; y--, key=1;} // zdobycie klucza
                    else if (plansza[z][y - 1][x] == "**") if (key == 1) {plansza[z][y][x] = "  "; y--, system("cls"), cout<<"YOU DID IT!!!"<<endl; return 0;} // Koniec
                }
                if (c == 80) // strzalka w dol
                {
                    if (plansza[z][y + 1][x] == "  ") {plansza[z][y][x] = "  "; y++;} // strzalka w dol
                    else if (plansza[z][y + 1][x] == "o-") {plansza[z][y][x] = "  "; y++, key=1;} // zdobycie klucza
                    else if (plansza[z][y + 1][x] == "**") if (key == 1) {plansza[z][y][x] = "  "; y++, system("cls"), cout<<"YOU DID IT!!!"<<endl; return 0;} // Koniec
                }
                if (c == 27)  {return 0;} // Escape

                if (z==1 && y==1 && x==1 && key==1) {system("cls"), cout<<endl<<"!!!SECRET ENDING!!!"<<endl; return 0;}

            }while (c != 13); // zmiana perspektywy

        }
        if (z==1 && y==1 && x==1 && key==1) {system("cls"), cout<<endl<<"!!!SECRET ENDING!!!"<<endl; return 0;}

    }while (c != 27); // Escape
}

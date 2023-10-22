#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main() {
    char wybor;

    while (true) {
        system("cls");
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, 4);
        cout << setw(60) << "Witaj w ManPac" << endl;
        cout << "\n\n";
        SetConsoleTextAttribute(h, 7);
        cout << setw(60) << "aby grac wpisz 1" << endl;
        cout << setw(60) << "aby wejsc w opcje 2" << endl;
        cout << setw(60) << "aby wyjsc wpisz 3" << endl;
        wybor = getchar();

        switch (wybor) {
        case '1':
            system("cls");
            cout << "Gra jeszcze nie jest zaimplementowana." << endl;
            system("pause");
            break;
        case '2':
            system("cls");
   
            cout << "Opcje jeszcze nie sa dostêpne." << endl;
            system("pause");
            break;
        case '3':
            system("cls");
            cout << "Czy na pewno chcesz wyjsc? (tak=1, nie=0): ";
            cin >> wybor;
            if (wybor == '1') {
                cout << "Zamykanie programu." << endl;
                exit(0);
            }
            break;
        default:
            break;
        }
    }

    return 0;
}

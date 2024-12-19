#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string cadenaalreves(string cadena) {
    reverse(cadena.begin(), cadena.end());
    return cadena;
}
int main() {
    string texto;
    cout << "ingrese una cadena: ";
    getline(cin, texto);
    string reversa = cadenaalreves(texto);
    cout << "el reverso de la cadena es: " << reversa << endl;
    return 0;
}

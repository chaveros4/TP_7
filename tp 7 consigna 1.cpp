#include <iostream>
#include <string>
using namespace std;
int longitudCadena(string cadena) {
    return cadena.length();
}
int main() {
    string texto;
    cout << "ingrese una cadena: ";
    getline(cin, texto);
    int longitud = longitudCadena(texto);
    cout << "la longitud de la cadena es: " << longitud << endl;
    return 0;
}

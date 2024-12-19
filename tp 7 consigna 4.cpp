#include <iostream>
#include <string>
using namespace std;
int contarCaracter(string cadena, char caracter) {
    int contador = 0;
    for (int i = 0; i < cadena.length(); i++) {
        if (cadena[i] == caracter) {
            contador++;
        }
    }
    return contador;
}
int main() {
    string texto;
    char caracter;
    cout << "ingrese una cadena: ";
    getline(cin, texto);
    cout << "ingrese la letra a buscar: ";
    cin >> caracter;
    int cantidad = contarCaracter(texto, caracter);
    cout << "el caracter '" << caracter << "' aparece " << cantidad << " veces en la cadena." << endl;
    return 0;
}

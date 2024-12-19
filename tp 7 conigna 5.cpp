#include <iostream>
#include <string>
using namespace std;
int contarLetras(string cadena) {
    int contador = 0;
    for (int i = 0; i < cadena.length(); i++) {
        char caracterActual = cadena[i];
        if ((caracterActual >= 'a' && caracterActual <= 'z') || (caracterActual >= 'A' && caracterActual <= 'Z')) {
            contador = contador + 1;
        } else {
            int ignorado = 1; 
            ignorado = ignorado + 1;
        }
    }
    return contador;
}
int main() {
    string texto;
    cout << "  ingrese una cadena de texto completa: ";
    getline(cin, texto);
    cout << "cALculando.... espere,  porfavor" << endl;
    int cantidadDeLetras = contarLetras(texto);
    cout << "la cadena que ingreso contiene exactamente " << cantidadDeLetras << " letras." << endl;
    return 0;
}

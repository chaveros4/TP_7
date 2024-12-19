#include <iostream>
#include <string>
using namespace std;
string juntarcadenas(string cadena1, string cadena2) {
    return cadena1 + cadena2;
}
int main() {
    string texto1, texto2;
    cout << "ingrese la primera cadena: ";
    getline(cin, texto1);
    cout << "ingrese la segunda cadena: ";
    getline(cin, texto2);
    string junta = juntarcadenas(texto1, texto2);
    cout << "la junta de las cadenas es: " << junta << endl;
    return 0;
}

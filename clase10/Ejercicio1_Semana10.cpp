#include <iostream>

using namespace std;

int main() {
    char c;
    
    for (;;) {
        cout << "Ingrese un caracter: ";
        cin >> c;
        
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            break;
        }
        
        cout << "Incorrecto, intente de nuevo." << endl;
    }
    
    cout << "Has ingresado la vocal minuscula: " << c << endl;
    
    return 0;
}

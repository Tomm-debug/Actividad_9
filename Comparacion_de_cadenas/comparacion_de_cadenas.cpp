#include <iostream>
#include <cstring> // Biblioteca necesaria para strcmp()

using namespace std;

int main() {
    const char* str1 = "Hola";
    const char* str2 = "Mundo";

    int result = strcmp(str1, str2); // Compara las dos cadenas
    
    if (result == 0) {
        cout << "Las cadenas son iguales." << endl;
    } else if (result < 0) {
        cout << "La cadena \"" << str1 << "\" es menor que \"" << str2 << "\"." << endl;
    } else {
        cout << "La cadena \"" << str1 << "\" es mayor que \"" << str2 << "\"." << endl;
    }

  
    cin.get() ;
    return 0;
}

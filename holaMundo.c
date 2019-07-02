#include <iostream>

using namespace std;
void funcion();
int main()
{
    
        funcion();
    return 0;
}
void funcion(){
    char cadena[11]={'H','e','l','1','o',' ','W','o','r','l','d'};
    char auxiliar[11];
    int tam = sizeof(cadena);
    for(int i=0; i<= tam ;i++){
        cout<<cadena[i];
        auxiliar[tam - i -1] = cadena [i];
        }
        cout<<endl;
    for(int i=0; i<= tam ;i++){
        cadena[i] = auxiliar[i];
        cout<<cadena[i];
        } 
}
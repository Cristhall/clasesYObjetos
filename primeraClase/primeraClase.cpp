#include <iostream>

using namespace std;
//Definici�n de la clase
class Gato
{
public: //La puede ver la persona.
    //Definci�n de atributos.
    string Nombre;
    //Definici�n de constructores
    Gato ()
    {
        Nombre = "Felix";
    }
    Gato (string pNombre) //Permite enviar otro nombre, ya se agrega otro par�metro.
    {
        Nombre = pNombre;
    }
    //Definici�n de comportamientos o m�todos
    void Meow()
    {
        cout << Nombre << " dice Meox " << endl;
    }
};
int main()
{
    //Creaci�n de primer objeto
    //Se llama a una clase como si fuera una variale (nombreClase, Representaci�n)
    Gato miPrimerGato;
    cout << "Mi primer objeto creado es un gato y se llama: " << miPrimerGato.Nombre << endl;
    Gato miSegundoGato("Tom"); //Uso del segundo constructor.
    cout << "Mi segundo objeto creado es otro gato y se llama: " << miSegundoGato.Nombre << endl;
    cout << "Mi primer gato se comunica: " << endl;
    miPrimerGato.Meow();
    miSegundoGato.Meow();
    return 0;

}


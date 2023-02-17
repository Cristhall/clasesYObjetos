#include <iostream>

using namespace std;
//Definición de la clase
class Gato
{
public: //La puede ver la persona.
    //Definción de atributos.
    string Nombre;
    //Definición de constructores
    Gato ()
    {
        Nombre = "Felix";
    }
    Gato (string pNombre) //Permite enviar otro nombre, ya se agrega otro parámetro.
    {
        Nombre = pNombre;
    }
    //Definición de comportamientos o métodos
    void Meow()
    {
        cout << Nombre << " dice Meox " << endl;
    }
};
int main()
{
    //Creación de primer objeto
    //Se llama a una clase como si fuera una variale (nombreClase, Representación)
    Gato miPrimerGato;
    cout << "Mi primer objeto creado es un gato y se llama: " << miPrimerGato.Nombre << endl;
    Gato miSegundoGato("Tom"); //Uso del segundo constructor.
    cout << "Mi segundo objeto creado es otro gato y se llama: " << miSegundoGato.Nombre << endl;
    cout << "Mi primer gato se comunica: " << endl;
    miPrimerGato.Meow();
    miSegundoGato.Meow();
    return 0;

}


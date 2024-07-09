#include <iostream>
#include "ListasSimplementeEnlazadas.hpp"
using namespace std;

int main()
{
    ListaSimple<int> lista;

    // Agregar elementos
    lista.AgregarInicio(1);
    lista.AgregarInicio(2);
    lista.AgregarFinal(3);
    lista.AgregarPos(4, 1); // Agregar en la posici�n 1

    // Imprimir la lista
    cout << "Lista despu�s de agregar elementos: ";
    lista.Imprimir();
    cout << endl;

    // Modificar elemento en la posici�n 2
    cout << "\nModificaci�n del elemento en la posici�n 2:" << endl;
    cout << "Elemento en la posici�n 2 antes de modificar: " << lista.ObtenerPorPos(1) << endl;
    cout << "Nuevo valor para el elemento en la posici�n 2: ";
    int nuevo_valor;
    cin >> nuevo_valor;
    lista.ModificarPos(nuevo_valor, 1); // Utilizamos ModificarPos en lugar de ModificarPorPos
    cout << "Lista despu�s de modificar el elemento en la posici�n 2: ";
    lista.Imprimir();
    cout << endl;

    // Buscar un valor
    int valor_a_buscar;
    cout << "\nIngrese el valor que desea buscar en la lista: ";
    cin >> valor_a_buscar;
    bool encontrado = lista.BuscarValor(valor_a_buscar);
    if (encontrado)
        cout << "El valor " << valor_a_buscar << " se encuentra en la lista." << endl;
    else
        cout << "El valor " << valor_a_buscar << " no se encuentra en la lista." << endl;

    // Obtener el primer y �ltimo elemento
    cout << "\nEl primer elemento de la lista es: " << lista.ObtenerPrimero() << endl;
    cout << "El �ltimo elemento de la lista es: " << lista.ObtenerUltimo() << endl;

    // Obtener el n�mero de elementos en la lista
    cout << "\nEl n�mero de elementos en la lista es: " << lista.NumElementos() << endl;

    // Vaciar la lista
    lista.Vaciar();
    cout << "\nLa lista ha sido vaciada." << endl;

    return 0;
}

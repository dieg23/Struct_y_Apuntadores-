#include <iostream>
#include <conio.h>

using namespace std;

struct Dato{
	int dato1;
	char dato2[20];
};

int main(int argc, char** argv)
{
	struct Dato var1;
	struct Dato *ptr;
	ptr = &var1;
	cout << "Punteros: "<<&ptr<<endl;
	//imprime el valor del puntero
	cout<<"Direccionde puntero: "<<ptr << endl;
	//imprime la direcciom del puntero
	cin>> (ptr->dato1);
	cin.getline(ptr->dato2, 20,'\n');
	cin.getline(ptr->dato2, 20,'\n');
	cout << "\nPunteros: "<<ptr->dato1<<endl;
	//imprime el valor del puntero
	cout << "Punteros: "<<ptr->dato2<<endl<<endl;
	//imprime el valor del puntero
	
	return 0;
}

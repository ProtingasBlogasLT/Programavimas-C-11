#include <iostream>
using namespace std;

// tipas - void, int, double, string... bet koks kintamojo/objekto tipas
// pavadinimas - raid�s, skai�iai, apatiniai br�k�neliai
// () - argumentai/parametrai
// {} - funkcijai priklausantis kodas
void funkcija()
{
	cout << "labas" << endl;
}

void funcija2(); // funckijos prototipas

int main() // pagrindin� programos funkcija
{
	funkcija();
	funkcija();

	return 0;
}

void funcija2()
{
	
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> a = { 47, 63, 52, 86, 97 };

	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	// suma

	int suma = 0;

	for (int i = 0; i < a.size(); i++)
	{
		suma += a[i];
	}

	cout << "suma: " << suma << endl;

	// vidurkis

	double vidurkis = double(suma) / a.size();
	cout << "vidurkis: " << vidurkis << endl;

	// rasiu did�iausi� reik�m�

	int didziausia = a[0];
	int indeksas = 0;

	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] > didziausia)
		{
			didziausia = a[i];
			indeksas = i;
		}
	}

	cout << "didziausia reiksme vektoriuje: " << didziausia << endl;
	cout << "o jos indeksas: " << indeksas << endl;

	// ie�kosiu kiek skai�i� yra ma�esni nei vidurkis

	int kiek = 0;

	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] > vidurkis)
		{
			kiek++;
		}
	}

	cout << "nariu didesniu uz vidurki kiekis: " << kiek << endl;

	return 0;
}
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string a;
	int b, c;
	double d, e;
	string f;

	ifstream fin; // objektas, galite �sivaizduoti kaip mandresn� kintam�j�
	fin.open("failas.txt"); // atidaromas failas skaitymui
	//ifstream fin("failas.txt"); // sukuriamas objektas ir atidaromas failas per vien� eilut�
	
	fin >> a >> b >> c;
	fin >> d >> e;
	fin >> ws; // white space
	getline(fin, f);

	fin.close(); // u�daromas failas

	cout << a << " " << b << " " << c << endl;
	cout << d << " " << e << endl;
	cout << f << endl;

	return 0;
}

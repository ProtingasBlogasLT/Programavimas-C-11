#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> skaiciai;
	cout << "vektoriaus dydis: " << skaiciai.size() << endl;
	skaiciai.push_back(52);
	skaiciai.push_back(83);
	skaiciai.push_back(42);
	skaiciai.push_back(17);
	cout << "vektoriaus dydis: " << skaiciai.size() << endl;
	for (int i = 0; i < skaiciai.size(); i++)
	{
		// pirmas b�das
		//cout << skaiciai.at(i) << endl;
		// antras b�das
		cout << skaiciai[i] << endl;
	}
	cout << endl;

	return 0;
}
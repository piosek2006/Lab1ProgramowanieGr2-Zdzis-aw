#include <iostream>
using namespace std;

int main()
{
	// Zadanie 1
	
	/*string imie, nazwisko;
	cout << "Podaj imie: ";
	cin >> imie;
	cout << "Podaj nazwisko: ";
	cin >> nazwisko;
	cout << "Twoje inicjaly to: " << imie[0] << "." << nazwisko[0] << "." << endl;
	*/
	

	// Zadanie 2
	/*cout << "Gwiazda 5-ramienna" << endl;
		cout << "   *  " << endl;
		cout << "  * * " << endl;
		cout << "**   **" << endl;
		cout << " * * *" << endl;
		cout << "*     *" << endl;*/

	// Zadanie 3
	/*cout << "Lista Obecnosci" << endl;
	cout << "nr\t|\timie\t\t|\tnazwisko\n";
	cout << "------------------------------------------------------\n";
	cout << "1\t|\tZdzislaw\t|\tKowalski\n";
	cout << "2\t|\tZygfryd\t\t|\tBolonski\n";
	cout << "3\t|\tLeonidas\t|\tFranciszek\n";*/

	// Zadanie 4
	/*float a, b;
	cout << "Podaj dwie liczby: \n";
	cin >> a >> b;
	cout << "Suma: " << a + b << endl;
	cout << "Iloczyn: " << a * b << endl;*/

	// Zadanie 5
	float f, c;
	cout << "Podaj temperature w stopniach Fahrenheita: ";
	cin >> f;
	c = (f - 32) * 5 / 9;
	cout << f << " stopni Fahrenheita to " << c << " stopni Celsjusza";

	return 0;
}

// 2137 = (x - 32) * 5 / 9
// 2137 = 0.6x - 17.78
// 2137 + 17.78 = 0.6x
// 2154.78 = 0.6x
// 2154.78 / 0.6 = x
// x = 3591.3
// 2137 + 0.64 = 0.6x
// 2137.64 = 0.6x
// 2137.64 / 0.6 = x
// x = 3562.7333
// 2137 * 9 / 5 + 32 = x
// x = 3853.6 + 32
// x = 3885.6
// x = 3878.6 FINAL ANSWER
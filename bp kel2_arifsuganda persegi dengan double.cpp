#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

double cariLuas(double panjang, double lebar)
{
	return panjang * lebar;
}


int main()
{
	double panjang, lebar, luas;

	cout << "Masukkan Panjang Persegi." << endl;
	cin >> panjang;

	cout << "Masukkan Lebar Persegi" << endl;
	cin >> lebar;

	luas = cariLuas(panjang, lebar);

	cout << endl;

	cout << "Luas Persegi Dengan Panjang " << panjang << " Dan Lebar " << lebar << " Adalah : " << luas << endl;

	_getch();

    return 0;
}

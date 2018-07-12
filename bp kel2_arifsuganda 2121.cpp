#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	int nilai;
	cout<<"Input Nilai Matakuliah"<<endl;
	cin>>nilai;
	
	if (nilai>= 60){
		cout<<"LULUS\n";
}
else {
	cout<<"Tidak Lulus\n";
}
cout<<"Program Selesai";
	getch();
}

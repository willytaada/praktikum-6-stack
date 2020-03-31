#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main () {
	char kata1[10]="sugus";
	char kata2[10]="sisil";
	int inputkata;
	int i;
	
	cout << "----------------------------------" << endl;
	cout << "Aplikasi Stack untuk membalik kata" << endl;
	cout << "----------------------------------" << endl;
	
	//kata palindrome
	cout << "Masukkan kalimat : " << kata1 << endl;
	inputkata=strlen (kata1); //strlen=menghitung jumlah karakter kata
	cout << "Jumlah Huruf : 5" << endl;
	cout << "Kata dibalik menjadi : ";
		for (i=inputkata;i>=1;i--)
		{
			char stack= kata1 [i-1];
			cout << stack << endl;
		}
		
	cout << "Palindrome" << endl;

	getch ();
	
	cout << "----------------------------------" << endl;
	
	//kata bukan palindrome
	cout << "Masukkan Kalimat : " << kata2 << endl;
	cout << "Jumlah Huruf : 5" << endl;
	inputkata=strlen (kata2); //strlen=menghitung jumlah karakter kata
	cout << "Kata dibalik menjadi : " << endl;
		for (i=inputkata;i>=1;i--)
		{
			char stack= kata2 [i-1];
			cout << stack << endl;
		}
	cout << "Bukan Palindrome" << endl;

	getch ();
}
	

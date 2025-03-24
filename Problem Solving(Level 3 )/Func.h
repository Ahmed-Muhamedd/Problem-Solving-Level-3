#pragma once
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

namespace Func {


	int RandomNumber(int From, int To) {
		int Nummber = rand() % (To - From + 1) + From;
		return Nummber;
	}

	void FillMatrix(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}
	void PrintMatrix(int arr[3][3], short Rows, short Cols) {
	cout << "Matrix Array 3x3 \n";
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			cout  << setw(3) << arr[i][j] << "   ";
		}
		cout << endl;
	}
}

	char InvertCharacter(char Char) {
		return isupper(Char) ? tolower(Char) : toupper(Char);
	}


	string EnterString() {
	string Words = "";
	cout << "Enter Your String :  ";
	getline(cin, Words);
	return Words;
}


	char EnterCharacter() {
		char Letter = ' ';
		cout << "\nPLease Enter A Character :  ";

		cin >> Letter;
		return Letter;
	}


}

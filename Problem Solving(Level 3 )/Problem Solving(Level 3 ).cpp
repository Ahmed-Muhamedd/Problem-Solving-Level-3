#include <iostream>
#include <vector>
#include "Func.h";
#include <cstdlib>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;
using namespace Func;

////problemSolving #1
//void FillMatrix(int Matrix[3][3] , short Rows , short Cols) {
//	for (short i = 0; i < Rows; i++) {
//		for (short j = 0; j < Cols; j++) {
//			Matrix[i][j] = RandomNumber(1, 10);
//		}
//	}
//}
//
//void PrintNumbers(int Matrix[3][3], short Rows, short Cols){
//	for (short i = 0; i < Rows; i++) {
//		for (short j = 0; j < Cols; j++) {
//			cout << Matrix[i][j] << " ";
//		}
//	}
//}

////problemSolving #2
//void FillMatrix(int Matrix[3][3], short Rows, short Cols) {
//	for (short i = 0; i < Rows; i++) {
//		for (short j = 0; j < Cols; j++) {
//			Matrix[i][j] = RandomNumber(1, 10);
//		}
//	}
//}
//
//int SumRow(int Matrix[3][3], short Rows,short Cols) {
//	int sum = 0;
//	for (short i = 0; i < Cols; i++) {
//		sum += Matrix[Rows][i];
//	}
//	return sum;
//}
//
//
//void printEach(int Matrix[3][3], short Rows, short Cols) {
//	for (short i = 0; i < Rows; i++) {
//		cout << "Row " << i + 1 << " Sum = " << SumRow(Matrix, i, Cols) << endl;
//	}
//}

////problemSolving #3
//void FillMatrix(int Matrix[3][3], short Rows, short Cols) {
//	for (short i = 0; i < Rows; i++) {
//		for (short j = 0; j < Cols; j++) {
//			Matrix[i][j] = RandomNumber(1, 10);
//		}
//	}
//}
//
//int SumRow(int Matrix[3][3], short Rows, short Cols) {
//	int sum = 0;
//	for (short i = 0; i < Cols; i++) {
//		sum += Matrix[Rows][i];
//	}
//	return sum;
//}
//
//
//void SumToArray(int arr[3] , int Matrix[3][3], short Rows, short Cols) {
//	for (short i = 0; i < Rows; i++) {
//		arr[i] = SumRow(Matrix, i, Cols);
//	}
//}
//
//void PrintArray(int arr[3], int length) {
//	for (short i = 0; i < length; i++) {
//		cout << "Row " << i + 1 << " Sum = " << arr[i] << endl;
//	}
//}

////problemSolving #4
//void FillMatrix(int Matrix[3][3], short Rows, short Cols) {
//	for (short i = 0; i < Rows; i++) {
//		for (short j = 0; j < Cols; j++) {
//			Matrix[i][j] = RandomNumber(1, 10);
//		}
//	}
//}
//
//int SumOfCols(int Matrix[3][3], int NumberCols, int Rows) {
//	int sum = 0;
//	for (short i = 0; i < Rows; i++) {
//		sum += Matrix[i][NumberCols];
//	}
//	return sum;
//}
//
//void PrintCols(int Matrix[3][3], int Rows, int Cols) {
//	for (int i = 0; i < Cols; i++) {
//		cout << "Col " << i + 1 << " Sum = " << SumOfCols(Matrix, i, Rows) << endl;
//	}
//}

////problemSolving #5
//void FillMatrix(int Matrix[3][3], short Rows, short Cols) {
//	for (short i = 0; i < Rows; i++) {
//		for (short j = 0; j < Cols; j++) {
//			Matrix[i][j] = RandomNumber(1, 10);
//		}
//	}
//}
//
//int SumOfCols(int Matrix[3][3], int NumberCols, int Rows) {
//	int sum = 0;
//	for (short i = 0; i < Rows; i++) {
//		sum += Matrix[i][NumberCols];
//	}
//	return sum;
//}
//
//void PrintCols(int Matrix[3][3],  int arr[3], int Rows, int Cols) {
//	for (int i = 0; i < Cols; i++) {
//		arr[i] = SumOfCols(Matrix, i, Rows) ;
//	}
//}
//
//void printArray(int arr[3], int length) {
//	for (short i = 0; i < length; i++) {
//		cout << "Col " << i + 1 << " Sum = " << arr[i] << endl;
//	}
//}

////ProblemSolving #6
//
//void FillOrderedMatrix(int Matrix[3][3], int Rows, int Cols) {
//	int counter = 1;
//	for (short i = 0; i < Rows; i++) {
//		for (short j = 0; j < Cols; j++) {
//			Matrix[i][j] = counter;
//			counter  += 1;
//		}
//	}
//}

////ProblemSolving #7
//
//void FillOrderedMatrix(int Matrix[3][3], int Rows, int Cols) {
//	int counter = 1;
//	for (short i = 0; i < Rows; i++) {
//		for (short j = 0; j < Cols; j++) {
//			Matrix[i][j] = counter;
//			counter += 1;
//		}
//	}
//}
//
//void Transposed(int Matrix[3][3], int Matrix2[3][3], int Rows, int Cols) {
//	for (short i = 0; i < Rows; i++) {
//		for (short j = 0; j < Cols; j++) {
//			Matrix2[j][i] = Matrix[i][j];
//		}
//	}
//}

//
////Problem Solving 8 
//
//	void FillMatrix(int arr[3][3], short Rows, short Cols) {
//	for (short i = 0; i < Rows; i++) {
//		for (short j = 0; j < Cols; j++) {
//			arr[i][j] = RandomNumber(1, 10);
//		}
//	}
//}
//
//	void Multiply(int Matrix[3][3], int Matrix2[3][3], int MatrixEqual[3][3], int Rows, int Cols) {
//		for (short i = 0; i < Rows; i++) {
//			for (short j = 0; j < Cols; j++) {
//				MatrixEqual[i][j] = Matrix[i][j] * Matrix2[i][j];
//			}
//		}
//	}


////Problem Solving 9
//	void FillMatrix(int arr[3][3], short Rows, short Cols) {
//	for (short i = 0; i < Rows; i++) {
//		for (short j = 0; j < Cols; j++) {
//			arr[i][j] = RandomNumber(1, 10);
//		}
//	}
//}
//
//	void PrintMiddleRow(int Matrix[3][3], short Rows, short Cols) {
//		int MiddleRow = Rows / 2;
//
//		for (short i = 0; i < Cols; i++) {
//			cout << Matrix[MiddleRow][i] << " ";
//		}
//
//	}
//
//	void PrintMiddleCol(int Matrix[3][3], short Rows, short Cols) {
//		short MiddleCols = Cols / 2;
//
//		for (short i = 0; i < Rows; i++) {
//			cout << Matrix[i][MiddleCols] << " ";
//		}
//	}

////Problem Solving #11
//void FillMatrix(int arr[3][3], short Rows, short Cols) {
//	for (short i = 0; i < Rows; i++) {
//		for (short j = 0; j < Cols; j++) {
//			arr[i][j] = RandomNumber(1, 10);
//		}
//	}
//}
//int SuwMatrix(int Matrix[3][3], short Rows, short Cols) {
//		int Sum = 0;
//		for (short i = 0; i < Rows; i++) {
//			for (short j = 0; j < Cols; j++) {
//				Sum += Matrix[i][j];
//			}
//		}
//		return Sum;
//	}
//
//bool PrintResult(int Matrix[3][3], int Matrix2[3][3], short Rows, short Cols) {
//	return SuwMatrix(Matrix, Rows, Cols) == SuwMatrix(Matrix2, Rows, Cols);
//}

////Problem Solving #12
//void FillMatrix(int arr[3][3], short Rows, short Cols) {
//	for (short i = 0; i < Rows; i++) {
//		for (short j = 0; j < Cols; j++) {
//			arr[i][j] = RandomNumber(1, 10);
//		}
//	}
//}
//
//bool AreTypical(int arr[3][3], int arr2[3][3], short Rows, short Cols) {
//	for (short i = 0; i < Rows; i++) {
//		for (short j = 0; j < Cols; j++) {
//			if (arr[i][j] != arr2[i][j])
//				return false;
//		}
//	}
//	return true;
//}

////Problem Solving #13
//bool AreIdentity(int arr[3][3], short Rows, short Cols) {
//	for (short i = 0; i < Rows; i++) {
//		for (short j = 0; j < Cols; j++) {
//			if (i == j && arr[i][j] != 1)
//				return false;
//			else if (i != j && arr[i][j] != 0)
//				return false;
//		}
//	}
//	return true;
//
//}

////Problem Solving #14
//bool AreScaler(int arr[3][3], short Rows, short Cols) {
//	int num = arr[0][0];
//	for (short i = 0; i < Rows; i++) {
//		for (short j = 0; j < Cols; j++) {
//			if (i == j && arr[i][j] != num)
//				return false;
//			else if (i != j && arr[i][j] != 0)
//				return false;
//		}
//	}
//	return true;
//
//}

////Problem Solving #15
//void FillMatrix(int arr[3][3], short Rows, short Cols) {
//	for (short i = 0; i < Rows; i++) {
//		for (short j = 0; j < Cols; j++) {
//			arr[i][j] = RandomNumber(1, 10);
//		}
//	}
//}
//
//short ReadNumber() {
//	short Num = 0;
//	cout << "Enter The Number To Count In Matrix: ";
//	cin >> Num;
//	return Num;
//}
//
//int CountNumber(int arr[3][3], short Rows, short Cols , short Num) {
//	short Counter = 0;
//	for (short i = 0; i < Rows; i++) {
//		for (short j = 0; j < Cols; j++) {
//			if (arr[i][j] == Num)
//				Counter++;
//		}
//	}
//	return Counter;
//}

////Problem Solving #16
//int CountNumber(int arr[3][3], short Rows, short Cols ) {
//	short Counter = 0;
//	for (short i = 0; i < Rows; i++) {
//		for (short j = 0; j < Cols; j++) {
//			if (arr[i][j] == 0)
//				Counter++;
//		}
//	}
//	return Counter;
//}
//
//bool isSparce(int arr[3][3], short Rows, short Cols) {
//	short Mid = Rows * Cols;
//	return CountNumber(arr, Rows, Cols) >= (Mid / 2);
//}
//

////Problem Solving #17
//bool IsNumberExist(int arr[3][3], short Number,short Rows, short Cols ) {
//	for (short i = 0; i < Rows; i++) {
//		for (short j = 0; j < Cols; j++) {
//			if (Number == arr[i][j])
//				return true;
//		}
//	}
//	return false;
//}
//
//short readnumber() {
//	short num = 0;
//	cout << "Please Enter the number To Look For In Matrix: ";
//	cin >> num;
//	return num;
//}

////Problem Solving #18
//
//bool isnumberexist(int arr[3][3], short number,short rows, short cols ) {
//	for (short i = 0; i < rows; i++) {
//		for (short j = 0; j < cols; j++) {
//			if (number == arr[i][j])
//				return true;
//		}
//	}
//	return false;
//}
//
//void PrintIntersected(int arr[3][3], int arr2[3][3], short Rows, short Cols) {
//	cout << endl;
//	for (short i = 0; i < Rows; i++) {
//		for (short j = 0; j < Cols; j++) {
//			if (isnumberexist(arr, arr2[i][j], 3, 3)) {
//
//				cout << arr2[i][j] << " ";
//			}
//
//		}
//	}
//}

////Problem Solving #19
//int MinNumber(int arr[3][3], short Rows, short Cols) {
//	int Num = arr[0][0];
//	for (short i = 0; i < Rows; i++) {
//		for (short j = 0; j <Cols; j++) {
//			if (arr[i][j] < Num)
//				Num = arr[i][j];
//		}
//	}
//	return Num;
//}
//int MaxNumber(int arr[3][3], short Rows, short Cols) {
//	int Num = arr[0][0];
//	for (short i = 0; i < Rows; i++) {
//		for (short j = 0; j < Cols; j++) {
//			if (arr[i][j] > Num )
//				Num = arr[i][j];
//		}
//	}
//	return Num;
//}

//////Problem Solving #20
//
//bool IsPalindrome(int Matrix[3][3], short Rows, short Cols) {
//		for (short i = 0; i < Rows; i++) {
//		for (short j = 0; j <Cols; j++) {
//			if (Matrix[i][j] != Matrix[i][Cols - 1 -j])
//				return false;
//		}
//	}
//		return true;
//}

////ProblemSolving #21
//void isFab(int Number) {
//	short perv2 = 0;
//	short perv1 = 1;
//	short fab = 0;
//	cout << "1 ";
//	for (short i = 1; i <= Number; i++) {
//		fab = perv2 + perv1;
//		cout  << fab << " ";
//		perv2 = perv1;
//		perv1 = fab;
//	}
//}

////ProblemSolving #22
//void isFab(int Number , int perv2 , int perv1) {
//	short fab = 0;
//	//cout << "1 ";
//	if (Number > 0) {
//		fab = perv2 + perv1;
//		cout << fab << " ";
//		perv2 = perv1;
//		perv1 = fab;
//
//		isFab(Number - 1 , perv2 ,	perv1);
//	}
//}

////ProblemSolving #23
//
//void PrintEachLetter(string Word) {
//	bool isFirstLetter = true;
//	for (short i = 0; i < Word.length(); i++) {
//		if (Word[i] != ' ' && isFirstLetter) {
//			cout << Word[i] << endl;
//		}
//		isFirstLetter = Word[i] == ' ' ? true : false;
//	}
//}

////ProblemSolving #24
//
//string PrintEachLetter(string Word) {
//	bool isFirstLetter = true;
//	for (short i = 0; i < Word.length(); i++) {
//		if (Word[i] != ' ' && isFirstLetter) {
//			Word[i] = toupper(Word[i]);
//		}
//		isFirstLetter = Word[i] == ' ' ? true : false;
//	}
//	return Word;
//}

////ProblemSolving #25
//
//string PrintEachLetter(string Word) {
//	bool isFirstLetter = true;
//	for (short i = 0; i < Word.length(); i++) {
//		if (Word[i] != ' ' && isFirstLetter) {
//			Word[i] = tolower(Word[i]);
//		}
//		isFirstLetter = Word[i] == ' ' ? true : false;
//	}
//	return Word;
//}

////ProblemSolving #26
//string ToUpper(string Word) {
//
//	for (short i = 0; i < Word.length(); i++) {
//		Word[i] = toupper(Word[i]);
//	}
//	return Word;
//}
//string ToLower(string Word) {
//
//	for (short i = 0; i < Word.length(); i++) {
//		Word[i] = tolower(Word[i]);
//	}
//	return Word;
//}

////ProblemSolving #27
//char CharIneverted(char CH) {
//	return isupper(CH) ? tolower(CH) : toupper(CH);
//}

////ProblemSolving #28
//char CharIneverted(char CH) {
//	return isupper(CH) ? tolower(CH) : toupper(CH);
//}
//
//string InvertChar(string Word) {
//	for (short i = 0; i < Word.length(); i++) {
//		Word[i] = CharIneverted(Word[i]);
//	}
//	return Word;
//}

//ProblemSolving #29
//
//short CountCap(string Word) {
//	short Counter = 0;
//	for (short i = 0; i < Word.length(); i++) {
//		if (isupper(Word[i]))
//			Counter++;
//	}
//	return Counter;
//}
//
//short CountLower(string Word) {
//	short Counter = 0;
//	for (short i = 0; i < Word.length(); i++) {
//		if (islower(Word[i]))
//			Counter++;
//	}
//	return Counter;
//}

////ProblemSolving #30
//short CountLetter(string s1, char ch) {
//	short Count = 0;
//	for (short i = 0; i < s1.length(); i++) {
//		if (s1[i] == ch)
//			Count++;
//	}
//	return Count;
//}

////ProblemSolving #31 
//short CountLetter(string s1, char ch , bool MatchCase = true) {
//	short Count = 0;
//	for (short i = 0; i < s1.length(); i++) {
//		if (MatchCase) {
//			if (s1[i] == ch)
//				Count++;
//		}
//		else {
//			if (tolower(s1[i]) == tolower(ch))
//				Count++;
//		}
//
//	}
//	return Count;
//}

////ProblemSolving #32
//
//bool IsVowel(char CH) {
//	CH = tolower(CH);
//	return CH == 'a' || CH == 'o' || CH == 'u' || CH == 'i' || CH == 'e';
//}


////ProblemSolving #33
//bool IsVowel(char CH) {
//	CH = tolower(CH);
//	return CH == 'a' || CH == 'o' || CH == 'u' || CH == 'i' || CH == 'e';
//}
//
//short CountVowel(string S) {
//	short Coun = 0; 
//	for (short i = 0; i < S.length(); i++) {
//		if (IsVowel(S[i]))
//			Coun++;
//	}
//	return Coun;
//}

////ProblemSolving #34
//bool IsVowel(char CH) {
//	CH = tolower(CH);
//	return CH == 'a' || CH == 'o' || CH == 'u' || CH == 'i' || CH == 'e';
//}
//
//void CountVowel(string S) {
//	
//	for (short i = 0; i < S.length(); i++) {
//		if (IsVowel(S[i]))
//			cout << S[i] << endl ;
//	}
//
//}


//ProblemSolving #35
//void PrintEachWord(string S) {
//	string Del = " ";
//	short Pos = 0;
//
//	string Word = "";
//	while ((Pos = S.find(Del)) != std::string::npos) {
//		Word = S.substr(0, Pos);
//		if (Word != " ") {
//			cout << Word << endl;
//		}
//		S.erase(0, Pos + Del.length());
//	}
//	if (S != " ") {
//		cout << S << endl;
//	}
//}	

//////ProblemSolving #36
//short PrintEachWord(string S) {
//	string Del = " ";
//	short Pos = 0;
//
//	string Word = "";
//
//	short Count = 0;
//
//	while ((Pos = S.find(Del)) != std::string::npos) {
//		Word = S.substr(0, Pos);
//		if (Word != " ") {
//			Count++;
//		}
//		S.erase(0, Pos + Del.length());
//	}
//	if (S != " ") {
//		Count++;
//	}
//	return Count;
//}


//ProblemSolving #37
//vector<string> Split(string S1, string Del) {
//	vector <string> Word;
//
//	short Pos = 0;
//	string Words;
//
//	while ((Pos = S1.find(Del)) != std::string::npos) {
//		Words = S1.substr(0, Pos);
//
//		if (Words != " ")
//			Word.push_back(Words);
//
//		S1.erase(0, Pos + Del.length());
//	}
//
//	if (S1 != " ")
//		Word.push_back(S1);
//
//	return Word;
//
//}

////ProblemSolving #38
//
//string TrimLeft(string s) {
//	
//	for (short i  = 0; i < s.length(); i++) {
//		if (s[i] != ' ' )
//			return s.substr(i, s.length() - i);
//		
//	}
//}
//
//string TrimRight(string s) {
//
//	for (short i = s.length() - 1; i >= 0; i--) {
//		if (s[i] != ' ' )
//			return s.substr(0 , i + 1);
//
//	}
//}
//
//string Trim(string s) {
//	return TrimLeft(TrimLeft(s));
//}
//

//////ProblemSolving #39
//
//string Join(vector <string>& String, string Del) {
//	string Word = "";
//	for (string& W : String) {
//		Word += W + Del;
//	}
//	return Word.substr(0, Word.length() - Del.length());
//}


//ProblemSolving #40
//
//string Join(vector <string>& String, string Del) {
//	string Word = "";
//	for (string& W : String) {
//		Word += W + Del;
//	}
//	return Word.substr(0, Word.length() - Del.length());
//}
//
//string Join(string arr[], short Length, string Del) {
//	string Word = "";
//	for (short i = 0 ; i < Length ; i++){
//		Word += arr[i] + Del;
//
//	}
//	return Word.substr(0, Word.length() - Del.length());
//}

////problem Solving #41
////vector<string> Split(string S1, string Del) {
////	vector <string> Word;
////
////	short Pos = 0;
////	string Words;
////
////	while ((Pos = S1.find(Del)) != std::string::npos) {
////		Words = S1.substr(0, Pos);
////
////		if (Words != " ")
////			Word.push_back(Words);
////
////		S1.erase(0, Pos + Del.length());
////	}
////
////	if (S1 != " ")
////		Word.push_back(S1);
////
////	return Word;
////
////}
////
////string Reverse(string s) {
////	vector <string > Word = Split(s, " ");
////
////	string Rev = "";
////
////	vector <string>::iterator itr = Word.end();
////
////	while (itr != Word.begin()) {
////		itr--;
////		Rev += *itr + " ";
////
////	}
////	return Rev.substr(0, Rev.length() - 1);
////}

////problem Solving #42
//
//string Replace(string Word, string Replace , string ReplaceTo) {
//	
//	short Pos = Word.find(Replace);
//
//	while (Pos != std::string::npos) {
//
//		Word = Word.replace(Pos, Replace.length(), ReplaceTo);
//
//		Pos = Word.find(Replace);
//
//	}
//	return Word;
//
//}

////problem Solving #43
//
//vector <string> Split(string S, string Del) {
//	vector <string > String;
//
//	short Pos = 0;
//	string Word = "";
//
//	while ((Pos = S.find(Del)) != std::string::npos) {
//		Word = S.substr(0, Pos);
//
//		if (Word != " ")
//			String.push_back(Word);
//
//		S.erase(0, Pos + Del.length());
//
//	}
//
//	if (S != " ")
//		String.push_back(S);
//
//	return String;
//}
//
//string JoinString(vector <string >& String , string Del) {
//
//	string Words = "";
//
//	for (string& S : String) {
//		Words += S + Del;
//	}
//
//	return Words.substr(0, Words.length() - Del.length());
//}
//
//string TolowerString(string String) {
//	for (short i = 0; i < String.length(); i++) {
//		String[i] = tolower(String[i]);
//	}
//	return String;
//}
//
//
//string Replace(string  String, string Replace, string ReplaceTo, bool Matchcase = true) {
//	vector <string> vString = Split(String , " ");
//
//	for (string& S : vString) {
//
//		if (Matchcase) {
//			if (S == Replace)
//				S = ReplaceTo;
//		}
//		else {
//
//			if (TolowerString(S) == TolowerString(Replace))
//				S = ReplaceTo;
//
//		}
//	
//	}
//
//	return JoinString(vString, " ");
//
//}

//////problem Solving #44
//
//string RemovePunc(string String) {
//	string Result = " ";
//	for (short i = 0; i < String.length(); i++) {
//		if (!ispunct(String[i]))
//			Result += String[i] ;
//	}
//	return Result;
//}


//problem Solving #45
//struct stClient {
//	string AccountNumber;
//	string PinCode;
//	string Name;
//	string Phone;
//	float AccountBalance;
//};
//
//
//stClient ClientData() {
//	stClient Client;
//	cout << "Enter Acount Number: ";
//	getline(cin, Client.AccountNumber);
//	cout << "Enter Pin Code: ";
//	getline(cin, Client.PinCode);
//	cout << "Enter The Name: ";
//	getline(cin, Client.Name);
//	cout << "Enter Your Phone Number: ";
//	getline(cin, Client.Phone);
//	cout << "Enter You Account Balance: ";
//	cin >>  Client.AccountBalance;
//	return Client;
//}
//
//string ConvertIntoLine(stClient Client , string Separator = "//#//") {
//	string Line = "";
//	Line += Client.AccountNumber + Separator;
//	Line += Client.PinCode + Separator;
//	Line += Client.Name + Separator;
//	Line += Client.Phone + Separator;
//	Line += to_string(Client.AccountBalance);
//	return Line;
//}

//////problem Solving #46
//
//struct stClient {
//	string AccountNumber;
//	string PinCode;
//	string Name;
//	string Phone;
//	float AccountBalance;
//};
//
//vector <string> Split(string String, string Del) {
//	vector <string> vStrings;
//
//	short Pos = 0;
//	string Word = "";
//
//	while ((Pos = String.find(Del)) != std::string::npos) {
//		Word = String.substr(0, Pos);
//
//		if (Word != "")
//			vStrings.push_back(Word);
//
//		String.erase(0, Pos + Del.length());
//	}
//
//	if (String != " ")
//		vStrings.push_back(String);
//
//
//	return vStrings;
//}
//
//stClient ConvertLineToRecord(string String , string Separator= "#//#") {
//	stClient Client;
//	vector <string> vClients = Split(String, Separator);
//
//	Client.AccountNumber = vClients[0];
//	Client.PinCode = vClients[1];
//	Client.Name = vClients[2];
//	Client.Phone = vClients[3];
//	Client.AccountBalance = stof(vClients[4]);
//
//	return Client;
//
//}
//
//void PrintRecord(stClient Client) {
//	cout << "The Following Is The Extracted Client Record\n\n";
//
//	cout << "Account Number		: " << Client.AccountNumber << endl ;
//	cout << "Pin Code		: " << Client.PinCode << endl;
//	cout << "Name			: " << Client.Name<< endl;
//	cout << "Phone Number		: " << Client.Phone << endl;
//	cout << "Account Balance		: " << Client.AccountBalance << endl;
//}


////problem Solving #47
//
//struct stClient {
//	string AccountNumber;
//	string PinCode;
//	string Name;
//	string Phone;
//	float AccountBalance;
//};
//
//stClient ReadClientData() {
//	stClient Client;
//
//	cout << "Enter Account Number? ";
//	getline(cin >> ws, Client.AccountNumber);
//	cout << "Enter Pin Code? ";
//	getline(cin, Client.PinCode);
//	cout << "Enter The Name? ";
//	getline(cin, Client.Name);
//	cout << "Enter The Phone? ";
//	getline(cin, Client.Phone);
//	cout << "Enter Account Balance? ";
//	cin >> Client.AccountBalance;
//
//	return Client;
//}
//
//string ConvertRecordToLine(stClient Client , string Del = "#//#") {
//	string Line = "";
//
//	Line += Client.AccountNumber + Del;
//	Line += Client.PinCode + Del;
//	Line += Client.Name+ Del;
//	Line += Client.Phone+ Del;
//	Line += to_string(Client.AccountBalance);
//
//	return Line;
//
//}
//
//
//	
//void UploadLineToFile(string FileName , string Line) {
//	fstream MyFile;
//
//	MyFile.open(FileName, ios::out | ios::app);
//
//	if (MyFile.is_open()) {
//		MyFile << Line << endl;
//		MyFile.close();
//	}
//
//}
//
//void AddClient() {
//	stClient Client = ReadClientData();
//	UploadLineToFile("Clients.txt", ConvertRecordToLine(Client));
//
//}
//
//
//void AddClients() {
//	char Again = 'y';
//
//	do {
//		system("cls");
//		cout << "\n Adding New Client\n\n";
//		AddClient();
//		cout << "Do You Want Add More Clients? ";
//		cin >> Again;
//
//
//	} while (Again == 'y' || Again == 'Y');
//
//}

////problem Solving #48
//
//struct stClient {
//	string AccountNumber;
//	string PinCode;
//	string Name;
//	string Phone;
//	float AccountBalance;
//};
//
//
//vector <string> Split(string S, string Del) {
//	vector <string > String;
//
//	short Pos = 0;
//	string Word = "";
//
//	while ((Pos = S.find(Del)) != std::string::npos) {
//		Word = S.substr(0, Pos);
//
//		if (Word != " ")
//			String.push_back(Word);
//
//		S.erase(0, Pos + Del.length());
//
//	}
//
//	if (S != " ")
//		String.push_back(S);
//
//	return String;
//}
//
//stClient ConvertLineToRecord(string String , string Separator= "#//#") {
//	stClient Client;
//	vector <string> vClients = Split(String, Separator);
//
//	Client.AccountNumber = vClients[0];
//	Client.PinCode = vClients[1];
//	Client.Name = vClients[2];
//	Client.Phone = vClients[3];
//	Client.AccountBalance = stof(vClients[4]);
//
//	return Client;
//
//}
//
//vector <stClient> ReadDataFromFilr(string FileName) {
//	fstream File;
//
//	vector <stClient> vString;
//
//
//	File.open(FileName, ios::in);
//
//	string Line = "";
//	stClient Client;
//	if (File.is_open()) {
//
//		while (getline(File, Line)) {
//			Client = ConvertLineToRecord(Line);
//			vString.push_back(Client);
//		}
//		File.close();
//	}
//	return vString;
//}
//void PrintClientRecord(stClient Client) {
//	cout << "| " << setw(15) << left << Client.AccountNumber;
//	cout << "| " << setw(10) << left << Client.PinCode;
//	cout << "| " << setw(40) << left << Client.Name;
//	cout << "| " << setw(12) << left << Client.Phone;
//	cout << "| " << setw(12) << left << Client.AccountBalance;
//}
//void PrintRecord() {
//	vector <stClient> vClients = ReadDataFromFilr("Clients.txt");
//	cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ") Client(s).";
//	cout << "\n_______________________________________________________";
//	cout << "_________________________________________\n" << endl;
//	cout << "| " << left << setw(15) << "Accout Number";
//	cout << "| " << left << setw(10) << "Pin Code";
//	cout << "| " << left << setw(40) << "Client Name";
//	cout << "| " << left << setw(12) << "Phone";
//	cout << "| " << left << setw(12) << "Balance";
//	cout << "\n_______________________________________________________";
//	cout << "_________________________________________\n" << endl;
//
//	for (stClient &Client : vClients)
//	{
//		PrintClientRecord(Client);  
//	 cout << endl;
//	}     
//	cout << "\n_______________________________________________________";
//	cout << "_________________________________________\n" << endl;
//}


////problem Solving #49
//struct stClient {
//	string AccountNumber;
//	string PinCode;
//	string Name;
//	string Phone;
//	float AccountBalance;
//};
//
//
//vector <string> Split(string S, string Del) {
//	vector <string > String;
//
//	short Pos = 0;
//	string Word = "";
//
//	while ((Pos = S.find(Del)) != std::string::npos) {
//		Word = S.substr(0, Pos);
//
//		if (Word != " ")
//			String.push_back(Word);
//
//		S.erase(0, Pos + Del.length());
//
//	}
//
//	if (S != " ")
//		String.push_back(S);
//
//	return String;
//}
//
//stClient ConvertLineToRecord(string String, string Separator = "#//#") {
//	stClient Client;
//	vector <string> vClients = Split(String, Separator);
//
//	Client.AccountNumber = vClients[0];
//	Client.PinCode = vClients[1];
//	Client.Name = vClients[2];
//	Client.Phone = vClients[3];
//	Client.AccountBalance = stof(vClients[4]);
//
//	return Client;
//
//}
//
//vector <stClient> ReadDataFromFilr(string FileName) {
//	fstream File;
//
//	vector <stClient> vString;
//
//
//	File.open(FileName, ios::in);
//
//	string Line = "";
//	stClient Client;
//	if (File.is_open()) {
//
//		while (getline(File, Line)) {
//			Client = ConvertLineToRecord(Line);
//			vString.push_back(Client);
//		}
//		File.close();
//	}
//	return vString;
//}
//
//bool FindClient(string AccountNumber, stClient &Client) {
//	vector<stClient> Clients = ReadDataFromFilr("Clients.txt");
//	for (stClient& C : Clients) {
//		if (C.AccountNumber == AccountNumber) {
//			Client = C;
//			return true;
//		}
//	}
//	return false;
//}
//
//void PrintClient(stClient Client) {
//	cout << "The Following Are The Client Details\n";
//	cout << "Account Number   : " << Client.AccountNumber << endl;
//	cout << "Pin Code	 : " << Client.PinCode << endl;
//	cout << "The Name	 : " << Client.Name << endl;
//	cout << "The Phone        : " << Client.Phone << endl;
//	cout << "Account Balance  : " << Client.AccountBalance << endl;
//
//
//}
//
//string ReadAccountNumber() {
//	string X = "";
//	cout << "Enter The Acccount Number? ";
//	cin >> X;
//	return X;
//}
//
//void ShowClient() {
//	stClient Client;
//	if (FindClient(ReadAccountNumber(), Client)) {
//		PrintClient(Client);
//	}
//	else
//	{
//		cout << "There is No Account Number For These";
//	}
//}

////problem Solving #50
//struct stClient {
//	string AccountNumber;
//	string PinCode;
//	string Name;
//	string Phone;
//	float AccountBalance;
//	bool MarkToDelete = false;
//};
//
//
//vector <string> Split(string S, string Del) {
//	vector <string > String;
//
//	short Pos = 0;
//	string Word = "";
//
//	while ((Pos = S.find(Del)) != std::string::npos) {
//		Word = S.substr(0, Pos);
//
//		if (Word != " ")
//			String.push_back(Word);
//
//		S.erase(0, Pos + Del.length());
//
//	}
//
//	if (S != " ")
//		String.push_back(S);
//
//	return String;
//}
//
//stClient ConvertLineToRecord(string String, string Separator = "#//#") {
//	stClient Client;
//	vector <string> vClients = Split(String, Separator);
//
//	Client.AccountNumber = vClients[0];
//	Client.PinCode = vClients[1];
//	Client.Name = vClients[2];
//	Client.Phone = vClients[3];
//	Client.AccountBalance = stof(vClients[4]);
//
//	return Client;
//
//}
//
//string ConvertRecordToLine(stClient Client , string Del) {
//	string Line = "";
//
//	Line += Client.AccountNumber + Del;
//	Line += Client.PinCode + Del;
//	Line += Client.Name+ Del;
//	Line += Client.Phone+ Del;
//	Line += to_string(Client.AccountBalance);
//
//	return Line;
//}
//
//vector <stClient> SaveClientsToFilt(string FileName, vector<stClient>& Clients) {
//	fstream File;
//
//	File.open(FileName, ios::out  );
//	string Line = "";
//
//	if (File.is_open()) {
//
//		for (stClient& Client : Clients) {
//			if (Client.MarkToDelete == false) {
//			Line = ConvertRecordToLine(Client, "#//#");
//			File << Line << endl;
//
//			}
//
//		}
//		File.close();
//	}
//	return Clients;
//}
//
//
//vector <stClient> ReadDataFromFilr(string FileName) {
//	fstream File;
//
//	vector <stClient> vString;
//
//
//	File.open(FileName, ios::in);
//
//	string Line = "";
//	stClient Client;
//	if (File.is_open()) {
//
//		while (getline(File, Line)) {
//			Client = ConvertLineToRecord(Line);
//			vString.push_back(Client);
//		}
//		File.close();
//	}
//	return vString;
//}
//
//bool FindClient(string AccountNumber, stClient& Client , vector <stClient> &Clients) {
//	for (stClient& C : Clients) {
//		if (C.AccountNumber == AccountNumber) {
//			Client = C;
//			return true;
//		}
//	}
//	return false;
//}
//
//void PrintClient(stClient Client) {
//	cout << "The Following Are The Client Details\n";
//	cout << "Account Number   : " << Client.AccountNumber << endl;
//	cout << "Pin Code	 : " << Client.PinCode << endl;
//	cout << "The Name	 : " << Client.Name << endl;
//	cout << "The Phone        : " << Client.Phone << endl;
//	cout << "Account Balance  : " << Client.AccountBalance << endl;
//
//
//}
//
//string ReadAccountNumber() {
//	string X = "";
//	cout << "Enter The Acccount Number? ";
//	cin >> X;
//	return X;
//}
//
//bool MarkForDelete(string AccountNumber, vector <stClient>& Clients) {
//	for (stClient& C : Clients) {
//		if (C.AccountNumber == AccountNumber) {
//			C.MarkToDelete = true;
//			return true;
//		}
//	}
//	return false;
//}
//
//void ShowClient() {
//	vector <stClient> Clients = ReadDataFromFilr("Clients.txt");
//	string AccountNumber = ReadAccountNumber();
//	stClient Client;
//	char Delete = 'f';
//
//	if (FindClient(AccountNumber, Client, Clients)) {
//		PrintClient(Client);
//		cout << "\N\NAre You Sure Want To Delete This? \n";
//		cin >> Delete;
//		if (Delete == 'y' || Delete == 'Y') {
//		MarkForDelete(AccountNumber, Clients);
//		SaveClientsToFilt("Clients.txt", Clients);
//		Clients = ReadDataFromFilr("Clients.txt");
//		cout << "Deleted ";
//		}
//	}
//	else
//	{
//		cout << "There is No Account Number For These";
//	}
//
//}

//problem Solving #51
struct stClient {
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	float AccountBalance;
	bool MarkToDelete = false;
};


vector <string> Split(string S, string Del) {
	vector <string > String;

	short Pos = 0;
	string Word = "";

	while ((Pos = S.find(Del)) != std::string::npos) {
		Word = S.substr(0, Pos);

		if (Word != " ")
			String.push_back(Word);

		S.erase(0, Pos + Del.length());

	}

	if (S != " ")
		String.push_back(S);

	return String;
}

stClient ConvertLineToRecord(string String, string Separator = "#//#") {
	stClient Client;
	vector <string> vClients = Split(String, Separator);

	Client.AccountNumber = vClients[0];
	Client.PinCode = vClients[1];
	Client.Name = vClients[2];
	Client.Phone = vClients[3];
	Client.AccountBalance = stof(vClients[4]);

	return Client;

}

string ConvertRecordToLine(stClient Client, string Del) {
	string Line = "";

	Line += Client.AccountNumber + Del;
	Line += Client.PinCode + Del;
	Line += Client.Name + Del;
	Line += Client.Phone + Del;
	Line += to_string(Client.AccountBalance);

	return Line;
}

vector <stClient> SaveClientsToFilt(string FileName, vector<stClient>& Clients) {
	fstream File;

	File.open(FileName, ios::out);
	string Line = "";

	if (File.is_open()) {

		for (stClient& Client : Clients) {
			if (Client.MarkToDelete == false) {
				Line = ConvertRecordToLine(Client, "#//#");
				File << Line << endl;

			}

		}
		File.close();
	}
	return Clients;
}


vector <stClient> ReadDataFromFilr(string FileName) {
	fstream File;

	vector <stClient> vString;


	File.open(FileName, ios::in);

	string Line = "";
	stClient Client;
	if (File.is_open()) {

		while (getline(File, Line)) {
			Client = ConvertLineToRecord(Line);
			vString.push_back(Client);
		}
		File.close();
	}
	return vString;
}

bool FindClient(string AccountNumber, stClient& Client, vector <stClient>& Clients) {
	for (stClient& C : Clients) {
		if (C.AccountNumber == AccountNumber) {
			Client = C;
			return true;
		}
	}
	return false;
}

void PrintClient(stClient Client) {
	cout << "The Following Are The Client Details\n";
	cout << "Account Number   : " << Client.AccountNumber << endl;
	cout << "Pin Code	 : " << Client.PinCode << endl;
	cout << "The Name	 : " << Client.Name << endl;
	cout << "The Phone        : " << Client.Phone << endl;
	cout << "Account Balance  : " << Client.AccountBalance << endl;


}

string ReadAccountNumber() {
	string X = "";
	cout << "Enter The Acccount Number? ";
	cin >> X;
	return X;
}


stClient ReadData(string AccountNumber) {
	stClient Client;
	Client.AccountNumber = AccountNumber;
	cout << "Enter Pin Code? ";
	getline(cin >> ws, Client.PinCode);
	cout << "Enter The Name? ";
	getline(cin, Client.Name);
	cout << "Enter The Phone? ";
	getline(cin, Client.Phone);
	cout << "Enter The Account Balance? ";
	cin >> Client.AccountBalance;
	return Client;
}

bool UpdateData(string AccountNumber, vector <stClient>& Clients) {
	for (stClient& C : Clients) {
		if (C.AccountNumber == AccountNumber) {
			C = ReadData(AccountNumber);
			return true;
		}
	}
	return false;
}

void ShowClient() {
	vector <stClient> Clients = ReadDataFromFilr("Clients.txt");
	string AccountNumber = ReadAccountNumber();
	stClient Client;
	char Delete = 'f';

	if (FindClient(AccountNumber, Client, Clients)) {
		PrintClient(Client);
		cout << "\N\NAre You Sure Want To Update  This? \n";
		cin >> Delete;
		if (Delete == 'y' || Delete == 'Y') {
			UpdateData(AccountNumber, Clients);
			SaveClientsToFilt("Clients.txt", Clients);
			Clients = ReadDataFromFilr("Clients.txt");
			cout << "Updated ";
		}
	}
	else
	{
		cout << "There is No Account Number For These";
	}

}



int main()
{
	srand((unsigned)time(NULL));
	
	ShowClient();
	//AddClients();
		system("pause>0");
}

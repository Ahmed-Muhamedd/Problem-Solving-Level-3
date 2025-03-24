#include <iostream>
#include <vector>
#include "Func.h";
#include <cstdlib>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;
using namespace Func;
//
//////Revision Problem Solving <50>;
//////
////////Problem Solving #1
////////void FillMatrix(int arr[3][3], short Rows, short Cols) {
////////	for (short i = 0; i < Rows; i++) {
////////		for (short j = 0; j < Cols; j++) {
////////			arr[i][j] = RandomNumber(1, 100);
////////		}
////////	}
////////}
////////void PrintMatrix(int arr[3][3], short Rows, short Cols) {
////////	cout << "Matrix Array 3x3 \n";
////////	for (short i = 0; i < Rows; i++) {
////////		for (short j = 0; j < Cols; j++) {
////////			cout  << setw(3) << arr[i][j] << "   ";
////////		}
////////		cout << endl;
////////	}
////////}
//////
//////////Problem Solving #2
////////void FillMatrix3x3(int arr[3][3], short Rows, short Cols) {
////////	cout << "Matrix 3x3 Random\n";
////////	for (int i = 0; i < Rows; i++) {
////////		for (int j = 0; j < Cols; j++) {
////////			arr[i][j] = RandomNumber(1, 100);
////////		}
////////	}
////////}
////////
////////int SumRowsMartix(int arr[3][3], short Row, short Cols) {
////////	int sum = 0;
////////	for (int i = 0; i < Cols; i++) {
////////		sum += arr[Row][i];
////////	}
////////	return sum;
////////}
////////
////////void PrintSumEachRow(int arr[3][3], short Row, short Cols) {
////////	for (short i = 0; i < Row; i++) {
////////		cout << "Row " << i + 1 << " Sum = " << SumRowsMartix(arr, i, Cols) << endl;
////////	}
////////}
////////
////////void PrintMatrix(int arr[3][3], short Rows, short Cols) {
////////	cout << "Matrix Array 3x3 \n";
////////	for (short i = 0; i < Rows; i++) {
////////		for (short j = 0; j < Cols; j++) {
////////			cout  << setw(3) << arr[i][j] << "   ";
////////		}
////////		cout << endl;
////////	}
////////}
//////
//////////Problem Solving #3
////////int SumRowsMartix(int arr[3][3], short Row, short Cols) {
////////	int sum = 0;
////////	for (int i = 0; i < Cols; i++) {
////////		sum += arr[Row][i];
////////	}
////////	return sum;
////////}
////////
////////void SumMatrixAnotherArr(int arrMatrix[3][3], int arr[3], short Row, short Cols) {
////////
////////	for (int i = 0; i < Row; i++) {
////////		arr[i] = SumRowsMartix(arrMatrix, i, Cols);
////////	}
////////
////////}
////////void PrintArray(int arr[3], int Length) {
////////	for (int i = 0; i < Length; i++) {
////////		cout << "\nRow " << i + 1 << " Sum = " << arr[i] << endl;
////////	}
////////}
//////
////////Problem Solving #4 / 5
////////int SumColssMartix(int arr[3][3], short Row, short Cols) {
////////	int sum = 0;
////////	for (int i = 0; i < Row; i++) {
////////		sum += arr[i][Cols];
////////	}
////////	return sum;
////////}
////////
////////void SumMatrixAnotherArr(int arrMatrix[3][3], int arr[3], short Row, short Cols) {
////////
////////	for (int i = 0; i < Row; i++) {
////////		arr[i] = SumColssMartix(arrMatrix, Row, i);
////////	}
////////
////////}
////////void PrintArray(int arr[3], int Length) {
////////	for (int i = 0; i < Length; i++) {
////////		cout << "\nRow " << i + 1 << " Sum = " << arr[i] << endl;
////////	}
////////}
//////
//////////Problem Solving 6
////////void FillMatrixOredered(int arrMatrix[3][3], short Rows, short Cols) {
////////	short Counter = 1;
////////	for (int i = 0; i < Rows; i++) {
////////		for (int j = 0; j < Cols; j++) {
////////			arrMatrix[i][j] = Counter;
////////			Counter++;
////////		}
////////	}
////////}
//////
//////////Problem Solving 7
////////void FillMatrixOredered(int arrMatrix[3][3], short Rows, short Cols) {
////////	short Counter = 1;
////////	for (int i = 0; i < Rows; i++) {
////////		for (int j = 0; j < Cols; j++) {
////////			arrMatrix[i][j] = Counter;
////////			Counter++;
////////		}
////////	}
////////}
////////
////////void TransposedMatrix(int arrMatrix[3][3], int arr[3][3], short Rows, short Cols) {
////////	for (int i = 0; i < Rows; i++) {
////////		for (int j = 0; j < Cols; j++) {
////////			arr[j][i] = arrMatrix[i][j];
////////		}
////////	}
////////}					
//////
//////////Problem Solving 8
////////void TransposedMatrix(int arrMatrix[3][3], int arr[3][3] , int arr3[3][3], short Rows, short Cols) {
////////	for (int i = 0; i < Rows; i++) {
////////		for (int j = 0; j < Cols; j++) {
////////		arr3[i][j]  = arrMatrix[i][j] * arr[i][j];
////////		}
////////	}
////////}
//////
//////////Problem Solving 9
//////void FillMatrixOredered(int arrMatrix[3][3], short Rows, short Cols) {
//////	short Counter = 1;
//////	for (int i = 0; i < Rows; i++) {
//////		for (int j = 0; j < Cols; j++) {
//////			arrMatrix[i][j] = Counter;
//////			Counter++;
//////		}
//////	}
//////}
//////
//////void PrintMiddleCols(int arrMatrix[3][3], int Rows, int Cols) {
//////	cout << "\nMiddle Cols \n";
//////	short MiddleCols = Cols / 2;
//////	for (short i = 0; i < Rows; i++) {
//////		cout << arrMatrix[i][MiddleCols] << "   ";
//////	}
//////	cout << endl;
//////}
//////void PrintMiddleRows(int arrMatrix[3][3], int Rows, int Cols) {
//////	cout << "\nMiddle Rows \n";
//////
//////	short MiddleRows = Rows / 2;
//////	for (short i = 0; i < Cols; i++) {
//////		cout << arrMatrix[MiddleRows][i] << "   ";
//////	}
//////	cout << endl;
//////}
////
////////Problem Solving 11
//////void FillMatrix(int arr[3][3], short Rows, short Cols) {
//////	for (short i = 0; i < Rows; i++) {
//////		for (short j = 0; j < Cols; j++) {
//////			arr[i][j] = RandomNumber(1, 5);
//////		}
//////	}
//////}
//////
//////void printMatrix(int arr[3][3], short Rows, short Cols) {
//////	cout << "Array Matrix Random Numbers\n\n";
//////	for (short i = 0; i < Rows; i++) {
//////		for (short j = 0; j < Cols; j++) {
//////			cout << setw(3) << arr[i][j] << "   "; 
//////		}
//////		cout << endl << endl;
//////	}
//////}
//////
//////int sumOfArray(int arr[3][3], short Rows, short Cols) {
//////	int sum = 0;
//////	for (short i = 0; i < Rows; i++) {
//////		for (short j = 0; j < Cols; j++) {
//////			sum += arr[i][j];
//////		}
//////	}
//////
//////	return sum;
//////}
//////
//////bool TwoMatricsEqual(int arr[3][3] , int arr2[3][3], short Rows, short Cols) {
//////	return sumOfArray(arr, Rows, Cols) == sumOfArray(arr2, Rows, Cols);
//////}
////
////
//////Problem Solving 12
//////void FillMatrix(int arr[3][3], short Rows, short Cols) {
//////	for (short i = 0; i < Rows; i++) {
//////		for (short j = 0; j < Cols; j++) {
//////			arr[i][j] = RandomNumber(1, 5);
//////		}
//////	}
//////}
//////
//////void printMatrix(int arr[3][3], short Rows, short Cols) {
//////	cout << "Array Matrix Random Numbers\n\n";
//////	for (short i = 0; i < Rows; i++) {
//////		for (short j = 0; j < Cols; j++) {
//////			cout << setw(3) << arr[i][j] << "   ";
//////		}
//////		cout << endl << endl;
//////	}
//////}
//////
//////bool TypicalOfArray(int arr[3][3],   int arr2[3][3] , short Rows, short Cols) {
//////	for (short i = 0; i < Rows; i++) {
//////		for (short j = 0; j < Cols; j++) {
//////			if (arr[i][j] != arr2[i][j])
//////				return false;
//////		}
//////	}
//////	return true;
//////
////
////////Problem Solving 13
//////void PrintMatrix(int arr[3][3], short Rows, short Cols) {
//////	cout << "Matrix Array 3x3 \n";
//////	for (short i = 0; i < Rows; i++) {
//////		for (short j = 0; j < Cols; j++) {
//////			cout  << setw(3) << arr[i][j] << "   ";
//////		}
//////		cout << endl;
//////	}
//////}
//////
//////bool isIdentityMatrix(int arrMatrix[3][3], short Rows, short Cols) {
//////	for (short i = 0; i < Rows; i++) {
//////		for (short j = 0; j < Cols; j++) {
//////			if (i == j && arrMatrix[i][j] != 1)
//////				return false;
//////			if (i != j && arrMatrix[i][j] != 0)
//////				return false;
//////		}
//////		
//////	}
//////	return true;
//////}
////
////////Problem Solving 14
//////void PrintMatrix(int arr[3][3], short Rows, short Cols) {
//////	cout << "Matrix Array 3x3 \n";
//////	for (short i = 0; i < Rows; i++) {
//////		for (short j = 0; j < Cols; j++) {
//////			cout << setw(3) << arr[i][j] << "   ";
//////		}
//////		cout << endl;
//////	}
//////}
//////
//////bool isScalarMatrix(int arrMatrix[3][3], short Rows, short Cols) {
//////	short Number = arrMatrix[0][0];
//////	for (short i = 0; i < Rows; i++) {
//////		for (short j = 0; j < Cols; j++) {
//////			if (i == j && arrMatrix[i][j] != Number)
//////				return false;
//////			if (i != j && arrMatrix[i][j] != 0)
//////				return false;
//////		}
//////
//////	}
//////	return true;
//////}
////
//////Problem Solving 15
//////void PrintMatrix(int arr[3][3], short Rows, short Cols) {
//////	cout << "Matrix Array 3x3 \n";
//////	for (short i = 0; i < Rows; i++) {
//////		for (short j = 0; j < Cols; j++) {
//////			cout << setw(3) << arr[i][j] << "   ";
//////		}
//////		cout << endl;
//////	}
//////}
//////
//////short countGivenNumber(int arr[3][3], short Rows, short Cols) {
//////	short Number = 0;
//////	cout << "Enter The Number You want To Search : ";
//////	cin >> Number;
//////	short counter = 0;
//////
//////	for (short i = 0; i < Rows; i++) {
//////		for (short j = 0; j < Cols; j++) {
//////			if (arr[i][j] == Number)
//////				counter++;
//////		}
//////		
//////	}
//////	return counter;
//////}
////
//////Problem Solving 16
//////void PrintMatrix(int arr[3][3], short Rows, short Cols) {
//////	cout << "Matrix Array 3x3 \n";
//////	for (short i = 0; i < Rows; i++) {
//////		for (short j = 0; j < Cols; j++) {
//////			cout << setw(3) << arr[i][j] << "   ";
//////		}
//////		cout << endl;
//////	}
//////}
//////bool countGivenNumber(int arr[3][3], short Rows, short Cols) {
//////	short counterZero = 0;
//////	short Random = 0;
//////	for (short i = 0; i < Rows; i++) {
//////		for (short j = 0; j < Cols; j++) {
//////			if (arr[i][j] == 0)
//////				counterZero++;
//////			else
//////				Random++;
//////		}
//////		
//////	}
//////	return counterZero > Random;
////////}
//////
//////short countGivenNumber(int arr[3][3], short Number , short Rows, short Cols) {
//////	short counterZero = 0;
//////	for (short i = 0; i < Rows; i++) {
//////		for (short j = 0; j < Cols; j++) {
//////			if (arr[i][j] == Number)
//////				counterZero++;
//////		}
//////
//////	}
//////	return counterZero ;
//////}
//////bool IsSparce(int arr[3][3], short Rows, short Cols) {
//////
//////	short Total = Rows * Cols;
//////	return countGivenNumber(arr, 0, Rows, Cols) > (Total / 2);
//////
//////}
////
////////Problem Solving 17
//////bool isExist(int arr[3][3], short Rows, short Cols) {
//////	short Number = 0; 
//////	cout << "\nEnter Number To Search In Matrix : ";
//////	cin >> Number;
//////	for (short i = 0; i < Rows; i++) {
//////		for (short j = 0; j < Cols; j++) {
//////			if (arr[i][j] == Number)
//////				return true;
//////		}
//////
//////	}
//////	return false;
//////}
////
////////Problem Solving 18
//////void FillMatrixOredered(int arrMatrix[3][3], short Rows, short Cols) {
//////	for (int i = 0; i < Rows; i++) {
//////		for (int j = 0; j < Cols; j++) {
//////			arrMatrix[i][j] = RandomNumber(1,100);
//////		}
//////	}
//////}
//////
//////bool isExist(int arr[3][3], short Number , short Rows, short Cols) {
//////	for (short i = 0; i < Rows; i++) {
//////		for (short j = 0; j < Cols; j++) {
//////			if (arr[i][j] == Number)
//////				return true;
//////		}
//////
//////	}
//////	return false;
//////}
//////
//////void Intersected(int arr[3][3], int arr2[3][3], short Rows, short Cols) {
//////	short Number;
//////	for (short i = 0; i < Rows; i++) {
//////		for (short j = 0; j < Cols; j++) {
//////			Number = arr[i][j];
//////			if (isExist(arr2, Number, Rows, Cols))
//////				cout << Number << "  ";
//////				
//////		}
//////
//////	}
//////}
////
//////Problem Solving 19
//////void FillMatrixOredered(int arrMatrix[3][3], short Rows, short Cols) {
//////	for (int i = 0; i < Rows; i++) {
//////		for (int j = 0; j < Cols; j++) {
//////			arrMatrix[i][j] = RandomNumber(1,100);
//////		}
//////	}
//////}
//////
//////void minNumber(int arrMatrix[3][3], short Rows, short Cols) {
//////	short minNumber = arrMatrix[0][0];
//////
//////	for (int i = 0; i < Rows; i++) {
//////		for (int j = 0; j < Cols; j++) {
//////			if (arrMatrix[i][j] < minNumber)
//////				minNumber = arrMatrix[i][j];
//////
//////		}
//////	}
//////			cout << "The Minimum Number : " << minNumber << endl;
//////}
//////
//////void maxNumber(int arrMatrix[3][3], short Rows, short Cols) {
//////	short maxNumber = arrMatrix[0][0];
//////
//////	for (int i = 0; i < Rows; i++) {
//////		for (int j = 0; j < Cols; j++) {
//////			if (arrMatrix[i][j] > maxNumber)
//////				maxNumber = arrMatrix[i][j];
//////
//////		}
//////	}
//////			cout << "The Maximum Number : " << maxNumber << endl;
//////}
////
//////Problem Solving 20
////bool isPalindrome(int arr[3][3], short Rows, short Cols) {
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols/2; j++) {
////			if (arr[i][j] != arr[i][Cols - 1 - j])
////				return false;
////		}
////	}
////	return true;
//
////Problem Solving #23
////void PrintFirstLetter(string String) {
////	bool IsFirstLetter = true;
////
////	for (short i = 0; i < String.length(); i++) {
////		if (String[i] != ' ' && IsFirstLetter)
////			cout << String[i] << endl;
////
////		IsFirstLetter = String[i] == ' ' ? true : false;
////
////	}
////
////}
//
//////Problem Solving #24
////string FirstLetterToUpper(string String) {
////	bool IsFirstLetter = true;
////
////	for (short i = 0; i < String.length(); i++) {
////		if (String[i] != ' ' && IsFirstLetter)
////			String[i] =  toupper(String[i]) ;
////
////		IsFirstLetter = String[i] == ' ' ? true : false;
////
////	}
////
////	return String;
////
////}
//
////Problem Solving #25
////string FirstLetterToLower(string String) {
////	bool IsFirstLetter = true;
////
////	for (short i = 0; i < String.length(); i++) {
////		if (String[i] != ' ' && IsFirstLetter)
////			String[i] = tolower(String[i]);
////
////		IsFirstLetter = String[i] == ' ' ? true : false;
////
////	}
////
////	return String;
////
////}
//*/
//
////Problem Solving #26
////string LowerString(string String) {
////	
////
////	for (short i = 0; i < String.length(); i++) {
////		String[i] = tolower(String[i]);
////
////
////
////	}
////
////	return String;
////
////}
////
////string UpperString(string String) {
////
////
////	for (short i = 0; i < String.length(); i++) {
////		String[i] = toupper(String[i]);
////
////	}
////
////	return String;
////
////}
//
//////Problem Solving #27
////char InvertChar(char c) {
////	return isupper(c) ? tolower(c) : toupper(c);
////}
//
//////Problem Solving #28
////char InvertChar(char c) {
////	return isupper(c) ? tolower(c) : toupper(c);
////}
////
////string Inverletters(string s1) {
////	for (short i = 0; i < s1.length(); i++) {
////		s1[i] = InvertChar(s1[i]);
////	}
////
////	return s1;
////}
//
////Problem Solving #29
////void CountLetters(string S1) {
////	short LengthString = S1.length();
////	short SmallLetter = 0;
////	short CapitalLetter = 0;
////
////	cout << "The Length Is : " << LengthString<< endl;
////
////
////	for (short i = 0; i < LengthString; i++) {
////
////		if (isupper(S1[i]))
////			CapitalLetter++;
////		else
////			SmallLetter++;
////	}
////
////
////	cout << "\n The Capital Letters :  " << CapitalLetter << endl;
////	cout << "\n The Small Letters :  " << SmallLetter<< endl;
////}
//
//////Problem Solving #30
////short CountCharacters(string S1, char C) {
////
////	short Counter = 0; 
////
////	for (short i = 0; i < S1.length(); i++) {
////		if (S1[i] == C)
////			Counter++;
////	}
////
////	return Counter;
////
////}
//
//////Problem Solving #31
////short CountCharacters(string S1, char C , bool MatchCase = true) {
////
////	short Counter = 0;
////
////	for (short i = 0; i < S1.length(); i++) {
////		if (MatchCase) {
////
////		if (S1[i] == C)
////			Counter++;
////
////		}
////		else
////		{
////			if (tolower(S1[i]) == tolower(C))
////				Counter++;
////		}
////
////
////
////	}
////
////	return Counter;
////
////}
//
////Problem Solving #32
////bool IsVowel(char c) {
////	c = tolower(c);
////	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
////
////}
//
//////Problem Solving #33
////bool IsVowel(char c) {
////	c = tolower(c);
////	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
////
////}
////
////short CountVowelsInString(string S1) {
////	short Counter = 0; 
////	
////	for (short i = 0; i < S1.length(); i++) {
////		if (IsVowel(S1[i]))
////			Counter++;
////	}
////	return Counter;
////}
////
//
//////Problem Solving #34
////bool IsVowel(char c) {
////	c = tolower(c);
////	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
////
////}
////
////void PrintVowelsInString(string S1) {
////
////	cout << "The Voowels IN String is  :  ";
////	for (short i = 0; i < S1.length(); i++) {
////		if (IsVowel(S1[i]))
////		 
////		cout << S1[i] << " ";
////	}
////
////}
//
//////Problem Solving #35'
////
////void PrintEachWord(string S1) {
////	string Del = " ";
////
////	short Position = 0;
////	string Word = "";
////
////	while ((Position = S1.find(Del)) != S1.npos) {
////		Word = S1.substr(0, Position);
////
////		if (Word != " ")
////			cout << Word << endl;
////
////		S1.erase(0, Position + Del.length());
////
////	}
////
////	if (S1 != " ")
////		cout << S1;
////
////
////}
//
//////Problem Solving #36
////short CountEachWord(string S1) {
////	string Del = " ";
////
////	short Position = 0;
////	string Word = "";
////		
////	short Counter = 0;
////
////	while ((Position = S1.find(Del)) != S1.npos) {
////		Word = S1.substr(0, Position);
////
////		if (Word != " ")
////			Counter++;
////
////		S1.erase(0, Position + Del.length());
////
////	}
////
////	if (S1 != " ")
////		Counter++;
////
////
////	return Counter;
////}
//
//////Problem Solving #37
////vector <string> Split(string S1 , string Del) {
////		
////	vector <string> Words;
////
////	short Position = 0;
////	
////	string Word;
////
////	while ((Position = S1.find(Del)) != S1.npos) {
////		Word = S1.substr(0, Position);
////
////		if (Word != " ")
////			Words.push_back(Word);
////
////		S1.erase(0, Position + Del.length());
////
////	}
////
////	if (S1 != " ")
////		Words.push_back(S1);
////
////
////
////	return Words;
////}
//
//////Problem Solving #38
////string TrimLeft(string S1) {
////	for (short i = 0; i < S1.length(); i++) {
////		if (S1[i] != ' ')
////			return S1.substr(i, S1.length() - 1);
////	}
////
////}
////string TrimRight(string S1) {
////	for (short i = S1.length(); i > 0; i--) {
////		if (S1[i] != ' ')
////			return S1.substr( 0 , i + 1 );
////	}
////
////}
////string Trim(string S1) {
////	return TrimLeft(TrimRight(S1));
////
////}
//
////////Problem Solving #39
////string JoinString(vector <string>& S1, string Del) {
////	string word = "";
////
////	for (string& String : S1) {
////		word += String + Del;
////	}
////	return word.substr(0, word.length() - Del.length());
////}
//
////Problem Solving #40
////string JoinString(vector <string>& S1, string Del) {
////	string word = "";
////
////	for (string& String : S1) {
////		word += String + Del;
////	}
////	return word.substr(0, word.length() - Del.length());
////}
////
////string JoinString(string arr[], short length, string Del) {
////	string Word = "";
////	for (short i = 0; i < length; i++) {
////		Word += arr[i] + Del;
////	}
////
////	return Word.substr(0, Word.length() - Del.length());
////}
//
//////Problem Solving #41
////vector <string> Split(string S1 , string Del) {
////		
////	vector <string> Words;
////
////	short Position = 0;
////	
////	string Word;
////
////	while ((Position = S1.find(Del)) != S1.npos) {
////		Word = S1.substr(0, Position);
////
////		if (Word != " ")
////			Words.push_back(Word);
////
////		S1.erase(0, Position + Del.length());
////
////	}
////
////	if (S1 != " ")
////		Words.push_back(S1);
////
////
////
////	return Words;
////}
////
////string ReverseWord(string S1) {
////	vector <string> vString = Split(S1, " ");
////
////	vector <string>::iterator Itr = vString.end();
////	string S2 = "";
////	while (Itr != vString.begin()) {
////		--Itr;
////		S2 += *Itr + " ";
////	}
////	return S2.substr(0, S2.length() - 1);
////}
//
//////Problem Solving #42
////string ReplaceWords(string s1, string Word, string ReplaceTo) {
////	short position = s1.find(Word);
////	while (position != std::string::npos) {
////
////		s1 = s1.replace(position, Word.length(), ReplaceTo);
////		position = s1.find(Word);
////
////	}
////	return s1;
////
////}
//
////Problem Solving #45
////struct sClients {
////	string AccountNumber;
////	string PinCode;
////	string Name;
////	string Phone;
////	double AccountBalance;
////};
////
////sClients ReadDataFromUser() {
////	sClients Client;
////	cout << "Please Enter Client Data\n\n";
////
////	cout << "Please Enter Account Number:  ";
////	getline(cin, Client.AccountNumber);
////
////	cout << "Please Enter Pin Code:  ";
////	getline(cin, Client.PinCode);
////
////	cout << "Please Enter Name:  ";
////	getline(cin, Client.Name);
////
////	cout << "Please Enter Phone:  ";
////	getline(cin, Client.Phone);
////
////	cout << "Please Enter Account Balance:  ";
////	cin >> Client.AccountBalance;
////
////	return Client;
////}
////
////string ConvertRecordToLine(string Del = "//#//") {
////	sClients Client = ReadDataFromUser();
////	string Line = "";
////	Line += Client.AccountNumber + Del;
////	Line += Client.PinCode + Del;
////	Line += Client.Name+ Del;
////	Line += Client.Phone+ Del;
////	Line += to_string(Client.AccountBalance);
////
////	return Line;
////}
////
////void UploadLineToFile(string FileName) {
////	string Line = ConvertRecordToLine();
////	fstream File;
////	File.open(FileName, ios::out | ios::app);
////
////	if (File.is_open()) {
////		File << Line << endl;
////	}
////
////
////}
//
////Problem Solving #46
////struct sClients {
////	string AccountNumber;
////	string PinCode;
////	string Name;
////	string Phone;
////	double AccountBalance;
////};
////
////vector <string> SplitString(string Line, string Del = "//#//") {
////	vector <string> Record;
////
////	short Position = 0;
////	string Word;
////
////	while ((Position = Line.find(Del)) != std::string::npos) {
////		Word = Line.substr(0, Position);
////
////		if (Word != "")
////			Record.push_back(Word);
////
////		Line.erase(0, Position + Del.length());
////	}
////	if (Line != "")
////		Record.push_back(Line);
////
////	return Record;
////}
////
////sClients ConvertLineToRecord(string Linee) {
////	vector <string> Line = SplitString(Linee);
////	sClients Client;
////	Client.AccountNumber = Line[0];
////	Client.PinCode = Line[1];
////	Client.Name= Line[2];
////	Client.Phone= Line[3];
////	Client.AccountBalance =stod(Line[4]);
////	return Client;
////}
////
////void PrintDataRecord(string Line) {
////	sClients Client = ConvertLineToRecord(Line);
////	cout << "The Following Is The Extracted Client Record\n";
////
////	cout << "The Account Number  :" << Client.AccountNumber << endl;
////	cout << "The Pin Code        :" << Client.PinCode << endl;
////	cout << "Name                :" << Client.Name << endl;
////	cout << "Phone               :" << Client.Phone << endl;
////	cout << "Account Balance     :" << Client.AccountBalance << endl;
////}
//
////Problem Solving #47
////struct sClients {
////	string AccountNumber;
////	string PinCode;
////	string Name;
////	string Phone;
////	double AccountBalance;
////};
////
////sClients ReadDataFromUser() {
////	sClients Client;
////	cout << "Please Enter Client Data\n\n";
////
////	cout << "Please Enter Account Number:  ";
////	getline(cin >> ws, Client.AccountNumber);
////
////	cout << "Please Enter Pin Code:  ";
////	getline(cin, Client.PinCode);
////
////	cout << "Please Enter Name:  ";
////	getline(cin, Client.Name);
////
////	cout << "Please Enter Phone:  ";
////	getline(cin, Client.Phone);
////
////	cout << "Please Enter Account Balance:  ";
////	cin >> Client.AccountBalance;
////
////	return Client;
////}
////
////string ConvertRecordToLine(string Del = "//#//") {
////	sClients Client = ReadDataFromUser();
////	string Line = "";
////	Line += Client.AccountNumber + Del;
////	Line += Client.PinCode + Del;
////	Line += Client.Name+ Del;
////	Line += Client.Phone+ Del;
////	Line += to_string(Client.AccountBalance);
////
////	return Line;
////}
////
////void AddClientToFile(string FileName) {
////	string Line = ConvertRecordToLine();
////	fstream File;
////	File.open(FileName, ios::out | ios::app);
////
////	if (File.is_open()) {
////		File << Line << endl;
////	}
////
////
////}
////
////void AddMoreClients() {
////	char More = 'y';
////	do {
////		system("cls");
////		cout << "Adding More Clients\n\n";
////		AddClientToFile("Clients.txt");
////		cout << "Client Added Successfully Do You Want Add More Clients ";
////		cin >> More;
////	} while (More == 'Y' || More == 'y');
////}
//
//////Problem Solving #48
////struct sClients {
////	string AccountNumber;
////	string PinCode;
////	string Name;
////	string Phone;
////	double AccountBalance;
////};
////const string FileName = "Clients.txt";
////vector <string> SplitString(string Line, string Del = "//#//") {
////	vector <string> Record;
////
////	short Position = 0;
////	string Word;
////
////	while ((Position = Line.find(Del)) != std::string::npos) {
////		Word = Line.substr(0, Position);
////
////		if (Word != "")
////			Record.push_back(Word);
////
////		Line.erase(0, Position + Del.length());
////	}
////	if (Line != "")
////		Record.push_back(Line);
////
////	return Record;
////}
////
////vector <string> UploadLineToVector() {
////	fstream MyFile;
////
////	vector <string> Line;
////
////	MyFile.open(FileName, ios::in);
////
////	if (MyFile.is_open()) {
////
////		string Linee = "";
////		while (getline(MyFile, Linee)) {
////			Line.push_back(Linee);
////		}
////	}
////
////	return Line;
////}
////
////sClients ConvertLineIntoRecord(string Line) {
////	vector <string > LoopOnLine = SplitString(Line);
////	sClients Client;
////	Client.AccountNumber = LoopOnLine[0];
////	Client.PinCode = LoopOnLine[1];
////	Client.Name= LoopOnLine[2];
////	Client.Phone= LoopOnLine[3];
////	Client.AccountBalance = stod(LoopOnLine[4]);
////
////	return Client;
////}
////
////vector <sClients> UploadRecordIntoVector() {
////	vector <string> AllStrings = UploadLineToVector();
////	vector<sClients> AllCients;
////	sClients Client;
////
////	for(string& Line : AllStrings){
////
////		Client = ConvertLineIntoRecord(Line);
////		AllCients.push_back(Client);
////	}
////	return AllCients;
////}
////
////
////void PrintOneClient(sClients Client) {
////	cout << "| " << setw(15) << left << Client.AccountNumber;     
////	cout << "| " << setw(10) << left << Client.PinCode;    
////	cout << "| " << setw(40) << left << Client.Name;     
////	cout << "| " << setw(12) << left << Client.Phone;     
////	cout << "| " << setw(12) << left << Client.AccountBalance;
////}
////
////
////void PrintAllClientsData() {
////	vector <sClients> Clients = UploadRecordIntoVector();
////
////	cout << "\n\t\t\t\t\tClient List (" << Clients.size() << ") Client(s).";
////	cout << "\n_______________________________________________________";     
////	cout << "_________________________________________\n" << endl;     
////	cout << "| " << left << setw(15) << "Accout Number";     
////	cout << "| " << left << setw(10) << "Pin Code";     
////	cout << "| " << left << setw(40) << "Client Name";     
////	cout << "| " << left << setw(12) << "Phone";     
////	cout << "| " << left << setw(12) << "Balance";     
////	cout << "\n_______________________________________________________";    
////	cout << "_________________________________________\n" << endl;
////
////	for (sClients One : Clients) {
////		PrintOneClient(One);
////		cout << endl;
////
////	}
////
////}
//
//////Problem Solving #49
////struct sClients {
////	string AccountNumber;
////	string PinCode;
////	string Name;
////	string Phone;
////	double AccountBalance;
////};
////const string FileName = "Clients.txt";
////vector <string> SplitString(string Line, string Del = "//#//") {
////	vector <string> Record;
////
////	short Position = 0;
////	string Word;
////
////	while ((Position = Line.find(Del)) != std::string::npos) {
////		Word = Line.substr(0, Position);
////
////		if (Word != "")
////			Record.push_back(Word);
////
////		Line.erase(0, Position + Del.length());
////	}
////	if (Line != "")
////		Record.push_back(Line);
////
////	return Record;
////}
////
////vector <string> UploadLineToVector() {
////	fstream MyFile;
////
////	vector <string> Line;
////
////	MyFile.open(FileName, ios::in);
////
////	if (MyFile.is_open()) {
////
////		string Linee = "";
////		while (getline(MyFile, Linee)) {
////			Line.push_back(Linee);
////		}
////	}
////
////	return Line;
////}
////
////sClients ConvertLineIntoRecord(string Line) {
////	vector <string > LoopOnLine = SplitString(Line);
////	sClients Client;
////	Client.AccountNumber = LoopOnLine[0];
////	Client.PinCode = LoopOnLine[1];
////	Client.Name = LoopOnLine[2];
////	Client.Phone = LoopOnLine[3];
////	Client.AccountBalance = stod(LoopOnLine[4]);
////
////	return Client;
////}
////
////vector <sClients> UploadRecordIntoVector() {
////	vector <string> AllStrings = UploadLineToVector();
////	vector<sClients> AllCients;
////	sClients Client;
////
////	for (string& Line : AllStrings) {
////
////		Client = ConvertLineIntoRecord(Line);
////		AllCients.push_back(Client);
////	}
////	return AllCients;
////}
////
////
////void PrintOneClient(sClients Client) {
////	cout << "\nThe following are the client details:\n";     
////	cout << "\nAccout Number: " << Client.AccountNumber;    
////	cout << "\nPin Code     : " << Client.PinCode;     
////	cout << "\nName         : " << Client.Name;     
////	cout << "\nPhone        : " << Client.Phone;     
////	cout << "\nAccount Balance: " << Client.AccountBalance;
////}
////
////
////
////bool GetClientByAccountNumber(sClients &Client , string AccountNumber) {
////	vector <sClients> Clients = UploadRecordIntoVector();
////	for (sClients& One : Clients) {
////		if (One.AccountNumber == AccountNumber) {
////			Client = One;
////			return true;
////		}
////	}
////	return false;
////}
////
////bool DeleteClientFromVector(string AccountNumber) {
////
////}
////
////
////string ReadAccNumber() {
////	string Num = "";
////	cout << "Please Enter Account Number: ";
////	cin >> Num;
////	return Num;
////}
//
//
////Porblem Solving #1
////void FillTwoDimensionalArray(int arr[3][3] , int Row , int Cols) {
////	for (int i = 0; i < Row; i++) {
////		for (int j = 0; j < Cols; j++) {
////			arr[i][j] = RandomNumber(1, 100);
////		}
////	}
////}
////void PrintArray(int arr[3][3], int Row, int Cols) {
////	cout << "The Following Is a 3x3 Random Matrix\n";
////	for (int i = 0; i < Row; i++) {
////		for (int j = 0; j < Cols; j++) {
////			cout <<setw(3) <<arr[i][j] << "     ";
////		}
////		cout << endl;
////	}
////}
//
//////Problem Solving #2
////void FillTwoDimensionalArray(int arr[3][3], int Row, int Cols) {
////	for (int i = 0; i < Row; i++) {
////		for (int j = 0; j < Cols; j++) {
////			arr[i][j] = RandomNumber(1, 100);
////		}
////	}
////}
////void PrintArray(int arr[3][3], int Row, int Cols) {
////	cout << "The Following Is a 3x3 Random Matrix\n";
////	for (int i = 0; i < Row; i++) {
////		for (int j = 0; j < Cols; j++) {
////			cout << setw(3) << arr[i][j] << "     ";
////		}
////		cout << endl;
////	}
////}
////
////int SumOfRows(int arr[3][3], int NumberRow, int Cols) {
////	int sum = 0; 
////
////	for (int i = 0; i < Cols; i++) {
////		sum += arr[NumberRow][i];
////	}
////	return sum;
////}
////
////void PrintSumRows(int arr[3][3], int Row , int Cols) {
////	for (int i = 0; i < Row; i++) {
////		cout << "\nRow " << i + 1 << "Sum = " << SumOfRows(arr, i, Cols) << endl;
//// 	}
////}
//
//////Problem Solving #3
////void FillTwoDimensionalArray(int arr[3][3], int Row, int Cols) {
////	for (int i = 0; i < Row; i++) {
////		for (int j = 0; j < Cols; j++) {
////			arr[i][j] = RandomNumber(1, 100);
////		}
////	}
////}
////void PrintArray(int arr[3][3], int Row, int Cols) {
////	cout << "The Following Is a 3x3 Random Matrix\n";
////	for (int i = 0; i < Row; i++) {
////		for (int j = 0; j < Cols; j++) {
////			cout << setw(3) << arr[i][j] << "     ";
////		}
////		cout << endl;
////	}
////}
////
////int SumOfRows(int arr[3][3], int NumberRow, int Cols) {
////	int sum = 0;
////
////	for (int i = 0; i < Cols; i++) {
////		sum += arr[NumberRow][i];
////	}
////	return sum;
////}
////
////void copySum(int arr[3], int arrr[3][3], int& length, int Cols) {
////	for (int i = 0; i < length; i++) {
////		arr[i] = SumOfRows(arrr, i, Cols);
////
////	}
////}
////
////
////
////void PrintSumRows(int arr[3] ,int length) {
////	for (int i = 0; i < length; i++) {
////		cout << "\nRow " << i + 1 << "Sum = " << arr[i] << endl;
////	}
////}
//
//////Problem Solving #4
////void FillTwoDimensionalArray(int arr[3][3], int Row, int Cols) {
////	for (int i = 0; i < Row; i++) {
////		for (int j = 0; j < Cols; j++) {
////			arr[i][j] = RandomNumber(1, 100);
////		}
////	}
////}
////void PrintArray(int arr[3][3], int Row, int Cols) {
////	cout << "The Following Is a 3x3 Random Matrix\n";
////	for (int i = 0; i < Row; i++) {
////		for (int j = 0; j < Cols; j++) {
////			cout << setw(3) << arr[i][j] << "     ";
////		}
////		cout << endl;
////	}
////}
////
////int SumOfRows(int arr[3][3], int NumberCols, int Rows) {
////	int sum = 0;
////
////	for (int i = 0; i < Rows; i++) {
////		sum += arr[i][NumberCols];
////	}
////	return sum;
////}
////
//////void copySum(int arr[3], int arrr[3][3], int& length, int Cols) {
//////	for (int i = 0; i < length; i++) {
//////		arr[i] = SumOfRows(arrr, i, Cols);
//////
//////	}
//////}
////
////
////
////void PrintSumCols(int arr[3][3], int NumberCols, int Rows) {
////	for (int i = 0; i < NumberCols; i++) {
////		cout << "\n Cols " << i + 1 << "Sum = " << SumOfRows(arr , i , Rows) << endl;
////	}
////}
//
//////Problem Solving #5
////void FillTwoDimensionalArray(int arr[3][3], int Row, int Cols) {
////	for (int i = 0; i < Row; i++) {
////		for (int j = 0; j < Cols; j++) {
////			arr[i][j] = RandomNumber(1, 100);
////		}
////	}
////}
////void PrintArray(int arr[3][3], int Row, int Cols) {
////	cout << "The Following Is a 3x3 Random Matrix\n";
////	for (int i = 0; i < Row; i++) {
////		for (int j = 0; j < Cols; j++) {
////			cout << setw(3) << arr[i][j] << "     ";
////		}
////		cout << endl;
////	}
////}
////
////int SumOfCols(int arr[3][3], int NumberCols, int Rows) {
////	int sum = 0;
////
////	for (int i = 0; i < Rows; i++) {
////		sum += arr[i][NumberCols];
////	}
////	return sum;
////}
////
////void copySum(int arr[3], int arrr[3][3], int Rows, int Cols) {
////	for (int i = 0; i < Rows; i++) {
////		arr[i] = SumOfCols(arrr, i, Cols);
////
////	}
////}
////
////
////
////void PrintSumCols(int arr[3] , int Rows) {
////	for (int i = 0; i < Rows; i++) {
////		cout << "\n Cols " << i + 1 << "Sum = " << arr[i] << endl;
////	}
////}
//
//////Problem Solving #6
////void FillMatrixOrdered(int arr[3][3], short Rows, short Cols) {
////	short counter = 1;
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			arr[i][j] = counter;
////			counter++;
////		}
////	}
////}
////
////
////
////void PrintMatrixOrdered(int arr[3][3], short Rows, short Cols) {
////	cout << "Matrix 3x3 Ordered Numbers\n";
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			cout << setw(3) << arr[i][j] << "    ";;
////		}
////		cout << endl;
////	}
////}
////
////void TransposedMatrix(int arr[3][3], int arr1[3][3], short Rows, short Cols) {
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			arr[i][j] = arr1[j][i];
////		}
////		
////	}
////}
//
////Problem Solving #7
////void FillMatrixRadom(int arr[3][3] , short Rows, short Cols) {
////	for (int i = 0; i < Rows; i++) {
////		for (int j = 0; j < Cols; j++) {
////			arr[i][j] = RandomNumber(1, 10);
////		}
////	}
////}
////
////void PrintMatrixOrdered(int arr[3][3], short Rows, short Cols , short number) {
////	cout << "Matrix " << number << endl ;
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			cout << setw(3) << arr[i][j] << "    ";;
////		}
////		cout << endl;
////	}
////}
////
////void CopyEquail(int arr[3][3], int arr2[3][3], int arr3[3][3], short Rows, short Cols)
////{
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			arr3[i][j] = arr[i][j] * arr2[i][j];
////		}
////	}
////}
//
////Problem Solving #8
////void FillMatrixRadom(int arr[3][3], short Rows, short Cols) {
////	for (int i = 0; i < Rows; i++) {
////		for (int j = 0; j < Cols; j++) {
////			arr[i][j] = RandomNumber(1, 10);
////		}
////	}
////}
////void PrintMiddlRow(int arr[3][3], short Rows, short Cols) {
////	cout << "Middle Row In Matrix \n";
////	short MiddleRow = Rows / 2;
////	for (short i = 0; i < Cols; i++) {
////		cout << arr[MiddleRow][i] << " ";
////	}
////}
////void PrintMiddlCols(int arr[3][3], short Rows, short Cols) {
////	cout << "Middle Cols In Matrix \n";
////	short MiddleCols = Cols / 2;
////	for (short i = 0; i < Rows; i++) {
////		cout << arr[i][MiddleCols] << " ";
////	}
////}
////void PrintMatrixOrdered(int arr[3][3], short Rows, short Cols) {
////	cout << "Matrix 1" << endl;
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			cout << setw(3) << arr[i][j] << "    ";
////		}
////		cout << endl;
////	}
////}
//
//////Problem Solving #11
////void FillMatrixRandom(int arr[3][3], short Rows, short Cols) {
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			arr[i][j] = RandomNumber(1, 10);
////		}
////	}
////}
////
////void PrintMatrix(int arr[3][3], short Rows, short Cols) {
////	cout << "The Matrix With Random Numbers \n";
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			cout << setw(3) << arr[i][j] << "     ";
////		}
////		cout << endl <<endl;
////	}
////}
////
////int SumOfMatrixRandom(int arr[3][3], short Rows, short Cols) {
////	int Sum = 0;
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			Sum += arr[i][j];
////		}
////	}
////	return Sum;
////}
////
////bool AreEqual(int arr[3][3], int arr2[3][3], short Rows, short Cols) {
////	return SumOfMatrixRandom(arr, Rows, Cols) == SumOfMatrixRandom(arr2, Rows, Cols);
////}
//
//////Problem Solving #12
////void FillMatrixRandom(int arr[3][3], short Rows, short Cols) {
////
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			arr[i][j] = RandomNumber(1,10);
////
////		}
////	}
////}
////
////void PrintMatrix(int arr[3][3], short Rows, short Cols) {
////	cout << "The Matrix With Random Numbers \n";
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			cout << setw(3) << arr[i][j] << "     ";
////		}
////		cout << endl << endl;
////	}
////}
////
////bool TypicalMatrox(int arr[3][3], int arr2[3][3], short Rows, short Cols) {
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			if (arr[i][j] != arr2[i][j])
////				return false;
////		}
////	}
////	return true;
////}
//
//////Problem Solving #13
//////void FillMatrixRandom(int arr[3][3], short Rows, short Cols) {
//////	short counter = 0;
//////	for (short i = 0; i < Rows; i++) {
//////			arr[i][counter] =1 ;
//////			counter++;
//////	}
//////}
////
////void PrintMatrix(int arr[3][3], short Rows, short Cols) {
////	cout << "The Matrix With Random Numbers \n";
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			cout << setw(3) << arr[i][j] << "     ";
////		}
////		cout << endl << endl;
////	}
////}
////
////bool IsIdenticalMatrix(int arr[3][3], short Rows, short Cols) {
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			if (i == j && arr[i][j] != 1) {
////				return false;
////			}
////			else if (i != j && arr[i][j] != 0) {
////				return false;
////				}
////
////
////			}
////		}
////	return true;
////}
//
//////Problem Solving #14
////
////void PrintMatrix(int arr[3][3], short Rows, short Cols) {
////	cout << "The Matrix With Random Numbers \n";
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			cout << setw(3) << arr[i][j] << "     ";
////		}
////		cout << endl << endl;
////	}
////}
////
////bool IsScalerMatrix(int arr[3][3], short Rows, short Cols) {
////	short Record = arr[0][0];
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////
////			if (i == j && arr[i][j] != Record) {
////				return false;
////			}
////			else if (i != j && arr[i][j] != 0) {
////				return false;
////			}
////
////
////		}
////	}
////	return true;
////}
//
////////Problem Solving #15
//////
////void PrintMatrix(int arr[3][3], short Rows, short Cols) {
////	cout << "The Matrix With Random Numbers \n";
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			cout << setw(3) << arr[i][j] << "     ";
////		}
////		cout << endl << endl;
////	}
////}
////void CountSameNumber(int arr[3][3], int Rows, int Cols ) {
////	short Number = 0;
////	cout << "Enter The Number To Count In Matrix : \n";
////	cin >> Number;
////	short Counter = 0;
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			if (arr[i][j] == Number)
////				Counter++;
////		}
////		
////	}
////	cout << "The Number " << Number << " Count In Matrix is : " << Counter;
////}
//
////////Problem Solving #16
//////
////void PrintMatrix(int arr[3][3], short Rows, short Cols) {
////	cout << "The Matrix With Random Numbers \n";
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			cout << setw(3) << arr[i][j] << "     ";
////		}
////		cout << endl << endl;
////	}
////}
////short CountSameNumber(int arr[3][3], int Rows, int Cols , short Number) {
////	short Counter = 0;
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			if (arr[i][j] == Number)
////				Counter++;
////
////		}
////
////	}
////	return	Counter;
////	
////}
////bool IsSparce(int arr[3][3], int Rows, int Cols) {
////	short Total = (Rows * Cols) / 2;
////	return CountSameNumber(arr, Rows, Cols , 0) > Total;
////}
//
//////Problem Solving #17
//////
////void PrintMatrix(int arr[3][3], short Rows, short Cols) {
////	cout << "The Matrix With Random Numbers \n";
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			cout << setw(3) << arr[i][j] << "     ";
////		}
////		cout << endl << endl;
////	}
////}
////
////bool IsNumberExist(int arr[3][3], short Rows, short Cols) {
////	short Number = 0;
////	cout << "Enter The Number To Search In Matrix : ";
////	cin >> Number;
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			if (arr[i][j] != Number)
////				return false;
////			else
////				return true;
////		}
////	}
////}
//
////#Problem Solving #18
////void fillMatrixRandom(int arr[3][3], short Rows, short Cols) {
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			arr[i][j] = RandomNumber(1, 25);
////		}
////	}
////}
////
////void PrintMatrix(int arr[3][3], short Rows, short Cols) {
////	cout << "The Matrix With Random Numbers \n";
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			cout << setw(3) << arr[i][j] << "     ";
////		}
////		cout << endl << endl;
////	}
////}
////
////bool IsNumberExist(int arr[3][3], int number, short Rows, short Cols) {
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			if (arr[i][j] == number)
////				return true;
////		}
////	}
////	return false;
////}
////
////void PrintIntersected(int arr[3][3], int arr2[3][3], short Rows, short Cols) {
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			if (IsNumberExist(arr, arr2[i][j], Rows, Cols)) {
////				cout << setw(3) << arr2[i][j] << "    ";
////			}
////		}
////		
////	}
////}
//
////#Problem Solving #19
////void fillMatrixRandom(int arr[3][3], short Rows, short Cols) {
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			arr[i][j] = RandomNumber(1, 10);
////		}
////	}
////}
////
////void PrintMatrix(int arr[3][3], short Rows, short Cols) {
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			cout << setw(3) << arr[i][j] << "   ";
////		}
////		cout << endl;
////
////	}
////}
////
////short maxNummber(int arr[3][3], short Rows, short Cols) {
////	short maxNum = arr[0][0]; 
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			if (maxNum < arr[i][j])
////				maxNum = arr[i][j];
////		}
////	}
////	return maxNum;
////}
////
////short minNummber(int arr[3][3], short Rows, short Cols) {
////	short maxNum = arr[0][0];
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			if (maxNum > arr[i][j])
////				maxNum = arr[i][j];
////		}
////	}
////	return maxNum;
////}
//
////#Problem Solving #20
////void PrintMatrix(int arr[3][3], short Rows, short Cols) {
////	cout << "Matrix Number is \n";
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols; j++) {
////			cout << setw(3) << arr[i][j] << "   ";
////		}
////		cout << endl;
////
////	}
////}
////bool isPalindrome(int arr[3][3], short Rows, short Cols) {
////	for (short i = 0; i < Rows; i++) {
////		for (short j = 0; j < Cols / 2; j++) {  
////			if (arr[i][j] != arr[i][Cols - 1 - j]) 
////				return false;
////		}
////	}
////	return true;
////}
//
//////Problem Solving #21
////void Fibonacci(short Number) {
////	int Fabonaccii = 0;
////	int perv2 = 0 , perv1 = 1;
////	cout << "1  ";
////	for (short i = 2; i <= Number; i++) {
////		Fabonaccii = perv1 + perv2;
////		cout << Fabonaccii << "  ";
////		perv2 = perv1;
////		perv1 = Fabonaccii;
////	}
////}
//
////Problem Solving #22
////void Fibonacci(short Number , short perv1 , short perv2) {
////	int Fabonaccii = 0;
////
////	if (Number > 0) {
////		Fabonaccii = perv2 + perv1;
////		perv2 = perv1;
////		perv1 = Fabonaccii;
////		cout << Fabonaccii << "  ";
////
////
////		Fibonacci(Number - 1 , perv1 , perv2);
////	}
////
////}
//
//////Problem Solving #23
////string EnterString() {
////	string Words = "";
////	cout << "Enter Your String :  "; 
////	getline(cin, Words);
////	return Words;
////}
////
////void FirstLettters(string s1) {
////
////	bool IsFirstLetter = true;
////	for (short i = 0; i < s1.size(); i++) {
////
////		if (s1[i] != ' ' && IsFirstLetter)
////			cout << s1[i] << endl;
////
////		IsFirstLetter = s1[i] == ' ' ? true : false;
////	}
////
////}
////
////void FirstLettters(string s1) {
////
////	cout << s1[0] << endl;
////	for (short i = 0; i < s1.size(); i++) {
////
////		if (s1[i] == ' ' )
////			cout << s1[i + 1] << endl;
////
////	}
////}
//
//////Problem Solving #24
////string EnterString() {
////	string Words = "";
////	cout << "Enter Your String :  ";
////	getline(cin, Words);
////	return Words;
////}
////
////string FirstLettters(string s1) {
////
////	bool IsFirstLetter = true;
////	for (short i = 0; i < s1.size(); i++) {
////
////		if (s1[i] != ' ' && IsFirstLetter)
////			s1[i] = toupper(s1[i]);
////
////		IsFirstLetter = s1[i] == ' ' ? true : false;
////	}
////	return s1;
////}
//
////Problem Solving #25
////string EnterString() {
////	string Words = "";
////	cout << "Enter Your String :  ";
////	getline(cin, Words);
////	return Words;
////}
////
////string FirstLettters(string s1) {
////
////	bool IsFirstLetter = true;
////	for (short i = 0; i < s1.size(); i++) {
////
////		if (s1[i] != ' ' && IsFirstLetter)
////			s1[i] = tolower(s1[i]);
////
////		IsFirstLetter = s1[i] == ' ' ? true : false;
////	}
////	return s1;
////}
//
//////Problem Solving #26
////string EnterString() {
////	string Words = "";
////	cout << "Enter Your String :  ";
////	getline(cin, Words);
////	return Words;
////}
////
////string AllUpperString(string s1) {
////
////	
////	for (short i = 0; i < s1.size(); i++) {
////		s1[i] = toupper(s1[i]);
////
////	}
////	return s1;
////}
////string AllLowerString(string s1) {
////
////
////	for (short i = 0; i < s1.size(); i++) {
////		s1[i] = tolower(s1[i]);
////
////	}
////	return s1;
////}
//
//////Problem Solving #27
////char InvertCharacter(char Char) {
////	return isupper(Char) ? tolower(Char) : toupper(Char);
////}
//
////Problem Solving #28
////string EnterString() {
////	string Words = "";
////	cout << "Enter Your String :  ";
////	getline(cin, Words);
////	return Words;
////}
////
////string InvertCharLetters(string s1) {
////	for (short i = 0; i < s1.size(); i++) {
////		s1[i] = InvertCharacter(s1[i]);
////
////	}
////	return s1;
////}
//
//////Problem Solving #29
////
////void countLetter(string s1) {
////	short upperCount = 0, lowerCount = 0, length = s1.length();
////
////	for (short i = 0; i < length; i++) {
////		isupper(s1[i]) ? upperCount++ : lowerCount++;
////
////	}
////
////
////	cout << "string length :  " << length << endl;
////	cout << "capital letters :   " << upperCount << endl;
////	cout << "small letters :   " << lowerCount << endl;
////
////}
//
//////Problem Solving #30
////short countLetter(string s1 , char Letter) {
////	short counter=0;
////
////	for (short i = 0; i < s1.length(); i++) {
////		
////		s1[i] == Letter ? counter++ : NULL;
////
////	}
////	return counter;
////
////}
//
////Problem Solving #31
////short MatchCase(string s1 , char Letter , bool MatchCase = true) {
////	short counter = 0;
////
////	for (short i = 0; i < s1.length(); i++) {
////		if (MatchCase) {
////			s1[i] == Letter ? counter++ : NULL;
////		}
////		else {
////			if(tolower(s1[i])== tolower(Letter))
////				counter++;
////		}
////
////	}
////	return counter;
////}
//
//////Problem Solving #32
////bool IsVowel(char arr[4], char Letter) {
////	for (short i = 0; i < 4; i++) {
////		if (arr[i] == tolower(Letter))
////			return true;
////	}
////	return false;
////}
////bool IsVowel(char Letter) {
////	Letter = tolower(Letter);
////	return Letter == 'a' || Letter == 'i' || Letter == 'o' || Letter == 'u';
////}
//
//////Problem Solving #33
////bool IsVowel(char Letter) {
////	Letter = tolower(Letter);
////	return Letter == 'a' || Letter == 'e' ||Letter == 'i' || Letter == 'o' || Letter == 'u';
////}
////
////short CountVowel(string Word) {
////	short counter = 0; 
////	for (short i = 0; i < Word.length(); i++) {
////		if (IsVowel(Word[i]))
////			counter++;
////	}
////	return counter;
////}
//
////Problem Solving #34
////bool IsVowel(char Letter) {
////	Letter = tolower(Letter);
////	return Letter == 'a' || Letter == 'e' || Letter == 'i' || Letter == 'o' || Letter == 'u';
////}
////
//// void CountVowel(string Word) {
////	for (short i = 0; i < Word.length(); i++) {
////		if (IsVowel(Word[i]))
////			cout << Word[i] << " ";
////	}
////
////}
//
//////Problem Solving #35
//////void PrintEachWord(string Word) {
//////	for (short i = 0; i < Word.length(); i++) {
//////		if (Word[i] != ' ')
//////			cout << Word[i] ;
//////		else
//////			cout << endl;
//////	}
//////	cout << endl;
//////}
////
////void PrintEachWord(string String) {
////	string delimter = " ";
////
////	short position = 0;
////	string Sword;
////
////	while ((position = String.find(delimter)) != std::string::npos) {
////		Sword = String.substr(0, position);
////
////		if (Sword != " ") {
////			cout << Sword << endl;
////		}
////
////		String.erase(0, position + delimter.length());
////	}
////	if (String != " ") {
////		cout << String << endl;
////	}
////}
//
//////Problem Solving #36
////short PrintEachWord(string String) {
////	string delimter = " ";
////
////	short position = 0;
////	string Sword;
////
////	short counter = 0;
////
////	while ((position = String.find(delimter)) != std::string::npos) {
////		Sword = String.substr(0, position);
////
////		if (Sword != " ") {
////			counter++;
////		}
////
////		String.erase(0, position + delimter.length());
////	}
////
////	if (String != "")
////		counter++;
////	return counter;
////
////}
//
//
////Problem Solving #37
////string PrintEachWord(string String) {
////	string delimter = " ";
////
////	short position = 0;
////	string Sword;
////
////	short counter = 0;
////
////	while ((position = String.find(delimter)) != std::string::npos) {
////		Sword = String.substr(0, position);
////
////		String.erase(0, position + delimter.length());
////	}
////
////	return Sword;
////}
////
////vector <string> Strings(string S1, string Delm) {
////
////	vector <string> strings;
////
////	short position = 0;
////	string Word;
////
////	while ((position = S1.find(Delm)) != std::string::npos) {
////		Word = S1.substr(0, position);
////
////		if (Word != " ")
////			strings.push_back(Word);
////
////		S1.erase(0, position + Delm.length());
////
////	}
////
////	if (S1 != "")
////		strings.push_back(S1);
////
////	return strings;
////
////
////
////	}
//
//////Poblem Solving #38
////string TrimLeft(string S1) {
////	for (short i = 0; i < S1.length(); i++)
////	{
////		if (S1[i] != ' ')
////			return S1.substr(i, S1.length() - i);
////	}
////
////}
////
////
////string TrimRight(string S1) {
////	for (short i = S1.length(); i > 0; i--)
////	{
////		if (S1[i] != ' ')
////			return S1.substr(0,  i + 1);
////	}
////}
////
////string TrimAll(string S1) {
////	return TrimLeft(TrimRight(S1));
////}
//
//////Problem Solving #39
////
////string Join(vector<string> &S1, string Del) {
////
////	string Words = "";
////	for (string& Names : S1) {
////
////		Words = Words +  Names + Del;
////
////	}
////	return Words.substr(0, Words.length() - Del.length());
////
////}
//
//////Problem Solving #40
////string Join(vector<string> &S1, string Del) {
////
////	string Words = "";
////	for (string& Names : S1) {
////
////		Words = Words +  Names + Del;
////
////	}
////	return Words.substr(0, Words.length() - Del.length());
////
////}
////
////string Join(string arr[], short length,  string Del) {
////
////	string Words = "";
////	for (short i = 0; i < length; i++) {
////
////		Words = Words + arr[i] + Del;
////
////	}
////	return Words.substr(0, Words.length() - Del.length());
////
////}
//
//////Problem Solving #41
////vector <string> Words(string S1 , string Delm) {
////
////	vector <string> String;
////
////	short position = 0;
////
////	string Words = "";
////
////	while ((position = S1.find(Delm)) != std::string::npos) {
////		Words = S1.substr(0 , position);
////		if (Words != "")
////			String.push_back(Words);
////
////		S1.erase(0, position + Delm.length());
////	}
////	if (S1 != "")
////		String.push_back(S1);
////
////	return String;
////}
////
////string ReverseWord(string S1) {
////	vector <string> Word;
////	string words = "";
////	Word = Words(S1, " ");
////	
////	vector <string>::iterator itr = Word.end();
////
////	while (itr != Word.begin()) {
////		--itr;
////
////		words += *itr + " ";
////	}
////	words = words.substr(0, words.length() - 1);
////
////
////	return words;
////
////}
//
//////Problem Solving #42
////string ReplaceWordWithBuilInFunction(string S1, string ReplaceTo, string Sreplace) {
////	short Position = S1.find(ReplaceTo);
////
////	while (Position != std::string::npos) {
////		S1 = S1.replace(Position, ReplaceTo.length(), Sreplace);
////		Position = S1.find(ReplaceTo);
////	}
////	return S1;
////
////
////}
//
//////Problem Solving #43
////
////vector<string> Split(string S1, string Del) {
////	vector<string> Word;
////
////	short position = 0;
////	string Words = "";
////
////	while ((position = S1.find(Del)) != std::string::npos) {
////		Words = S1.substr(0, position);
////
////		if (Words != " ")
////			Word.push_back(Words);
////
////		S1.erase(0, position + Del.length());
////	}
////
////	if (S1 != " ")
////		Word.push_back(S1);
////
////	return Word;
////}
////
////string Join(vector <string>& Strings, string Del) {
////	string Words = "";
////	
////	for (string& Word : Strings) {
////		Words += Word + Del;
////	}
////
////	return Words.substr(0, Words.length() - Del.length());
////
////}
////
////string LowerAllStrings(string S1) {
////	for (short i = 0; i < S1.length(); i++) {
////		S1[i] = tolower(S1[i]);
////	}
////	return S1;
////}
////
////string ReplaceWordsWithSplit(string S1, string Word, string Replace, bool MatchCase = true) {
////	vector <string> AllStrings = Split(S1, " ");
////
////	for (string& Words : AllStrings) {
////
////		if (MatchCase) {
////
////			if (Words == Word) {
////				Words = Replace;
////			}
////
////		}
////		else {
////
////			if (LowerAllStrings(Words) == LowerAllStrings(Word)) {
////				Words = Replace;
////			}
////
////		}
////	}
////	return Join(AllStrings, " ");
////}
//
////Problem Solving #44
////string RemovePunctuation(string S1) {
////	string WithOutPun = "";
////	for (short i = 0; i < S1.length(); i++) {
////		if (!ispunct(S1[i]))
////			WithOutPun += S1[i];
////	}
////	return WithOutPun;
////}
//
////Problem Solving #45
////struct sClients {
////	string AccountNumber;
////	string Name;
////	string Phone;
////	string PinCode;
////	double AccountBalance;
////};
////
////sClients ReadInfo() {
////	sClients PersonalInfo;
////
////	cout << "Enter Account Number:  ";
////	getline(cin, PersonalInfo.AccountNumber);
////
////	cout << "Enter PinCode:  ";
////	getline(cin, PersonalInfo.PinCode);
////
////	cout << "Enter The Name:  ";
////	getline(cin, PersonalInfo.Name);
////
////	cout << "Enter Phone:  ";
////	getline(cin, PersonalInfo.Phone);
////
////	cout << "Enter Account Balance:  ";
////	cin >> PersonalInfo.AccountBalance;
////
////	return PersonalInfo;;
////}
////
////string PrintInfo(sClients Info, string Del) {
////	string InfoInString = "";
////
////	InfoInString += Info.AccountNumber + Del;
////	InfoInString += Info.PinCode + Del;
////	InfoInString += Info.Name + Del;
////	InfoInString += Info.Phone + Del;
////	InfoInString += to_string(Info.AccountBalance);
////
////	return InfoInString;
////}
//
////Problem Solving #46
////struct sClients {
////	string AccountNumber;
////	string Name;
////	string Phone;
////	string PinCode;
////	double AccountBalance;
////};
////
////vector <string> SplitString(string S1, string Del) {
////	vector <string> Word;
////
////	short Position = 0;
////	string Words = "";
////
////	while ((Position = S1.find(Del)) != std::string::npos) {
////		Words = S1.substr(0, Position);
////		 
////		if (Words != "")
////			Word.push_back(Words);
////
////		S1.erase(0, Position + Del.length());
////	}
////	if (S1 != "")
////		Word.push_back(S1);
////	return Word;
////}
////
////sClients ReadDataFromVector(string S1 , string Del) {
////	sClients Data;
////	vector <string> vData = SplitString(S1, Del);
////	Data.AccountNumber = vData[0];
////	Data.PinCode = vData[1];
////	Data.Name = vData[2];
////	Data.Phone = vData[3];
////	Data.AccountBalance = stod(vData[4]);
////
////	return Data;
////
////}
////
////void PrinRecord(sClients Record) {
////	cout << "The Following Is The Extracted Client Record\n";
////	cout << "Account Number  :" << Record.AccountNumber << endl;
////	cout << "Pin Code        :" << Record.PinCode << endl;
////	cout << "Name            :" << Record.Name << endl;
////	cout << "Phone           :" << Record.Phone << endl;
////	cout << "Account Balance :" << Record.AccountBalance << endl;
////}
//
////Problem Solving #47
////struct sClients {
////	string AccoutNumber;
////	string PinCode;
////	string Name;
////	string Phone;
////	double AccountBalance;
////};
////
////sClients ReadData() {
////	sClients Info;
////	cout << "Enter Account Number:  ";
////	getline(cin >> ws, Info.AccoutNumber);
////	cout << "Enter PinCode:  ";
////	getline(cin, Info.PinCode);
////	cout << "Enter Name:  ";
////	getline(cin, Info.Name);
////	cout << "Enter Phone:  ";
////	getline(cin, Info.Phone);
////	cout << "Enter Account Balance:  ";
////	cin >> Info.AccountBalance;
////
////	return Info;
////}
////
////string ConvertDataToLine(sClients Record , string Del) {
////	string Line = "";
////
////	Line += Record.AccoutNumber + Del;
////	Line += Record.PinCode + Del;
////	Line += Record.Name + Del;
////	Line += Record.Phone + Del;
////	Line += to_string(Record.AccountBalance) ;
////
////	return Line;
////
////}
////
////void SaveRecordInFile(string FileName, string Content) {
////	fstream MyFile;
////	MyFile.open(FileName, ios::out | ios::app);
////
////	if (MyFile.is_open()) {
////		MyFile << Content <<endl;
////
////		MyFile.close();
////
////	}
////
////
////}
////
////void StartProcess() {
////	sClients Final = ReadData();
////	
////	string Line = ConvertDataToLine(Final, "//#//");
////
////	SaveRecordInFile("Clients.txt", Line);
////}
////
////void MoreClients() {
////	char More = 'Y';
////	do {
////		system("cls");
////		cout << "Adding New Clients\n";
////		StartProcess();
////		cout << "\nClient Added Successfully, do you want to add more clients? Y/N? ";    
////		cin >> More;
////
////	} while (More == 'y' || More == 'Y');
////
////}
//
////Problem Solving #48
////vector <string> Split(string StringLine, string Del);
////const string FileName = "Clients.txt";
////struct sClients {
////	string AccoutNumber;
////	string PinCode;
////	string Name;
////	string Phone;
////	double AccountBalance;
////};
////
////sClients ConvertLineToRecord(string String, string Del = "//#//") {
////	vector <string> Line = Split(String, Del);
////	sClients Client;
////	Client.AccoutNumber = Line[0];
////	Client.PinCode = Line[1];
////	Client.Name = Line[2];
////	Client.Phone= Line[3];
////	Client.AccountBalance = stod(Line[4]);
////	return Client;
////}
////
////vector <sClients> ReadDataFromFile(string FileName) {
////	vector <sClients> Records;
////	fstream MyFile;
////	MyFile.open(FileName, ios::in);
////	if (MyFile.is_open()) {
////
////		string Line;
////		sClients Client;
////		while (getline(MyFile, Line)) {
////			Client = ConvertLineToRecord(Line);
////			Records.push_back(Client);
////
////		}
////		MyFile.close();
////	}
////	return Records;
////
////}
////
////vector <string>  Split(string StringLine, string Del) {
////	vector <string> DataLine;
////	
////	short Position = 0;
////	string Word;
////
////	while ((Position = StringLine.find(Del)) != std::string::npos) {
////		Word = StringLine.substr(0, Position);
////
////		if (Word != "")
////			DataLine.push_back(Word);
////
////		StringLine.erase(0, Position + Del.length());
////	}
////	if (StringLine != "")
////		DataLine.push_back(StringLine);
////
////	return DataLine;
////
////}
////void PrintClientRecord(sClients Client) {
////	cout << "| " << setw(15) << left << Client.AccoutNumber;     
////	cout << "| " << setw(10) << left << Client.PinCode;     
////	cout << "| " << setw(40) << left << Client.Name;     
////	cout << "| " << setw(12) << left << Client.Phone;    
////	cout << "| " << setw(12) << left << Client.AccountBalance;
////}
////
////void PrintAllClientData(vector <sClients> vClients) {
////	cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ") Client(s).";    
////	cout << "\n_______________________________________________________";     
////	cout << "_________________________________________\n" << endl;     
////	cout << "| " << left << setw(15) << "Accout Number";     
////	cout << "| " << left << setw(10) << "Pin Code";     
////	cout << "| " << left << setw(40) << "Client Name";     
////	cout << "| " << left << setw(12) << "Phone";     
////	cout << "| " << left << setw(12) << "Balance";    
////	cout << "\n_______________________________________________________";     
////	cout << "_________________________________________\n" << endl;
////
////	for (sClients& Client : vClients) {
////		PrintClientRecord(Client);
////		cout << endl;
////	}
////}
//
//
//////Problem Solving #48
////struct sClients {
////	string AccountNumber;
////	string PinCode;
////	string Name;
////	string Phone;
////	double AccountBalance;
////};
////const string FileName = "Clients.txt";
////vector <string> SplitString(string Line, string Del) {
////	vector <string> Record;
////
////	short Postiton = 0;
////	string Word;
////
////	while ((Postiton = Line.find(Del)) != std::string::npos) {
////		Word = Line.substr(0, Postiton);
////		if (Word != "")
////			Record.push_back(Word);
////
////		Line.erase(0, Postiton + Del.length());
////	}
////	if (Line != "")
////		Record.push_back(Line);
////
////	return Record;
////
////}
////
////sClients ConvertLineToRecord(string Line, string Del = "//#//") {
////	vector <string> Record = SplitString(Line, Del);
////	sClients Client;
////	Client.AccountNumber = Record[0];
////	Client.PinCode= Record[1];
////	Client.Name= Record[2];
////	Client.Phone= Record[3];
////	Client.AccountBalance= stod(Record[4]);
////	return Client;
////}
////
////vector <sClients> ReadDataFromFile() {
////	vector <sClients> Data;
////	fstream File;
////
////	File.open(FileName, ios::in);
////	string Line = "";
////	sClients Client;
////		
////	if (File.is_open()) {
////		while (getline(File, Line)) {
////			Client = ConvertLineToRecord(Line);
////			Data.push_back(Client);
////		}
////	}
////	return Data;
////}
////bool FindClientByAccNumber(string Compare , sClients& Clients) {
////	vector <sClients> Client = ReadDataFromFile();
////
////	for (sClients& User : Client) {
////		if (User.AccountNumber == Compare) {
////			Clients = User;
////			return true;
////		}
////	}
////	return false;
////}
////void PrintRecord(sClients Client) {
////	cout << "\nThe following are the client details:\n";     
////	cout << "\nAccout Number: " << Client.AccountNumber;     
////	cout << "\nPin Code     : " << Client.PinCode;     
////	cout << "\nName         : " << Client.Name;     
////	cout << "\nPhone        : " << Client.Phone;     
////	cout << "\nAccount Balance: " << Client.AccountBalance;
////}
////
////string ReadAccountNumber() {
////	string Num = "";
////	cout << "Enter Account Number :  ";
////	cin >> Num;
////	return Num;
////}
//
////Problem Solving #48
////struct sClients {
////	string AccountNumber;
////	string PinCode;
////	string Name;
////	string Phone;
////	double AccountBalance;
////	bool MarkForDelete = false;
////};
////const string FileName = "Clients.txt";
////vector <string> SplitString(string Line, string Del) {
////	vector <string> Record;
////
////	short Postiton = 0;
////	string Word;
////
////	while ((Postiton = Line.find(Del)) != std::string::npos) {
////		Word = Line.substr(0, Postiton);
////		if (Word != "")
////			Record.push_back(Word);
////
////		Line.erase(0, Postiton + Del.length());
////	}
////	if (Line != "")
////		Record.push_back(Line);
////
////	return Record;
////
////}
////
////sClients ConvertLineToRecord(string Line, string Del = "//#//") {
////	vector <string> Record = SplitString(Line, Del);
////	sClients Client;
////	Client.AccountNumber = Record[0];
////	Client.PinCode = Record[1];
////	Client.Name = Record[2];
////	Client.Phone = Record[3];
////	Client.AccountBalance = stod(Record[4]);
////	return Client;
////}
////
////vector <sClients> ReadDataFromFile() {
////	vector <sClients> Data;
////	fstream File;
////
////	File.open(FileName, ios::in);
////	string Line = "";
////	sClients Client;
////
////	if (File.is_open()) {
////		while (getline(File, Line)) {
////			Client = ConvertLineToRecord(Line);
////			Data.push_back(Client);
////		}
////	}
////	return Data;
////}
////bool FindClientByAccNumber(string Compare, sClients& Clients) {
////	vector <sClients> Client = ReadDataFromFile();
////
////	for (sClients& User : Client) {
////		if (User.AccountNumber == Compare) {
////			Clients = User;
////			return true;
////		}
////	}
////	return false;
////}
////void PrintRecord(sClients Client) {
////	cout << "\nThe following are the client details:\n";
////	cout << "\nAccout Number: " << Client.AccountNumber;
////	cout << "\nPin Code     : " << Client.PinCode;
////	cout << "\nName         : " << Client.Name;
////	cout << "\nPhone        : " << Client.Phone;
////	cout << "\nAccount Balance: " << Client.AccountBalance;
////}
////
////string ReadAccountNumber() {
////	string Num = "";
////	cout << "Enter Account Number :  ";
////	cin >> Num;
////	return Num;
////}
////
////void DeleteFromRecord() {
////	fstream MyFile;
////
////	MyFile.open(FileName, ios::out);
////
////	if (MyFile.is_open()) {
////
////	}
////}
//
//
//////Problem Solving #50
////struct sClients {
////	string AccountNumber;
////	string PinCode;
////	string Name;
////	string Phone;
////	double AccountBalance;
////	bool MarkToDelete = false;
////};
////const string FileName = "Clients.txt";
////vector <string> SplitString(string Line, string Del = "//#//") {
////	vector <string> Record;
////
////	short Position = 0;
////	string Word;
////
////	while ((Position = Line.find(Del)) != std::string::npos) {
////		Word = Line.substr(0, Position);
////
////		if (Word != "")
////			Record.push_back(Word);
////
////		Line.erase(0, Position + Del.length());
////	}
////	if (Line != "")
////		Record.push_back(Line);
////
////	return Record;
////}
////
////vector <string> UploadLineToVector() {
////	fstream MyFile;
////
////	vector <string> Line;
////
////	MyFile.open(FileName, ios::in);
////
////	if (MyFile.is_open()) {
////
////		string Linee = "";
////		while (getline(MyFile, Linee)) {
////			Line.push_back(Linee);
////		}
////		MyFile.close();
////	}
////
////	return Line;
////}
////
////sClients ConvertLineIntoRecord(string Line) {
////	vector <string > LoopOnLine = SplitString(Line);
////	sClients Client;
////	Client.AccountNumber = LoopOnLine[0];
////	Client.PinCode = LoopOnLine[1];
////	Client.Name = LoopOnLine[2];
////	Client.Phone = LoopOnLine[3];
////	Client.AccountBalance = stod(LoopOnLine[4]);
////
////	return Client;
////}
////
////vector <sClients> UploadRecordIntoVector() {
////	vector <string> AllStrings = UploadLineToVector();
////	vector<sClients> AllCients;
////	sClients Client;
////
////	for (string& Line : AllStrings) {
////
////		Client = ConvertLineIntoRecord(Line);
////		AllCients.push_back(Client);
////	}
////	return AllCients;
////}
////
////
////void PrintOneClient(sClients Client) {
////	cout << "\nThe following are the client details:\n";
////	cout << "\nAccount Number: " << Client.AccountNumber;
////	cout << "\nPin Code     : " << Client.PinCode;
////	cout << "\nName         : " << Client.Name;
////	cout << "\nPhone        : " << Client.Phone;
////	cout << "\nAccount Balance: " << Client.AccountBalance;
////}
////
////
////
////bool GetClientByAccountNumber(sClients& Client, string AccountNumber, vector <sClients>& Clients) {
////	for (sClients& One : Clients) {
////		if (One.AccountNumber == AccountNumber) {
////			Client = One;
////			return true;
////		}
////	}
////	return false;
////}
////
////
////string ConvertRecordToLine(sClients Client, string Del = "//#//") {
////	string Line = "";
////
////	Line += Client.AccountNumber + Del;
////	Line += Client.PinCode + Del;
////	Line += Client.Name + Del;
////	Line += Client.Phone + Del;
////	Line += to_string(Client.AccountBalance);
////	return Line;
////}
////
////
////bool ChangeMarkToDelete(string AccountNumber, vector <sClients>& Clients) {
////	for (sClients& One : Clients) {
////		if (One.AccountNumber == AccountNumber) {
////			One.MarkToDelete = true;
////			return true;
////		}
////	}
////	return false;
////}
////
////void UploadClientsToFolder(vector<sClients> String) {
////	fstream File;
////	File.open(FileName, ios::out);
////
////	if (File.is_open()) {
////		string OneLine = "";
////		for (sClients& One : String) {
////			if (One.MarkToDelete == false) {
////				OneLine = ConvertRecordToLine(One);
////				File << OneLine << endl;
////			}
////		}
////		File.close();
////	}
////}
////
////
////void DeleteClient(string AccountNumber, vector<sClients>& Client) {
////	sClients Record;
////
////	char Letter = 'n';
////	if (GetClientByAccountNumber(Record, AccountNumber, Client)) {
////		PrintOneClient(Record);
////		cout << "\nAre You Sure To Deleted It:  ";
////		cin >> Letter;
////		if (Letter == 'y' || Letter == 'Y') {
////			ChangeMarkToDelete(AccountNumber, Client);
////			UploadClientsToFolder(Client);
////			Client = UploadRecordIntoVector();
////			cout << "\nClient Deleted\n";
////		
////		}
////	}
////	else {
////		cout << "This Number " << AccountNumber << " Not Exist\n";
////		
////	}
////
////}
////
////
////
////string ReadAccNumber() {
////	string Num = "";
////	cout << "Please Enter Account Number: ";
////	cin >> Num;
////	return Num;
////}
//
//////Problem Solving #51
////struct sClients {
////	string AccountNumber;
////	string PinCode;
////	string Name;
////	string Phone;
////	double AccountBalance;
////	bool MarkToDelete = false;
////};
////const string FileName = "Clients.txt";
////vector <string> SplitString(string Line, string Del = "//#//") {
////	vector <string> Record;
////
////	short Position = 0;
////	string Word;
////
////	while ((Position = Line.find(Del)) != std::string::npos) {
////		Word = Line.substr(0, Position);
////
////		if (Word != "")
////			Record.push_back(Word);
////
////		Line.erase(0, Position + Del.length());
////	}
////	if (Line != "")
////		Record.push_back(Line);
////
////	return Record;
////}
////
////vector <string> UploadLineToVector() {
////	fstream MyFile;
////
////	vector <string> Line;
////
////	MyFile.open(FileName, ios::in);
////
////	if (MyFile.is_open()) {
////
////		string Linee = "";
////		while (getline(MyFile, Linee)) {
////			Line.push_back(Linee);
////		}
////		MyFile.close();
////	}
////
////	return Line;
////}
////
////sClients ConvertLineIntoRecord(string Line) {
////	vector <string > LoopOnLine = SplitString(Line);
////	sClients Client;
////	Client.AccountNumber = LoopOnLine[0];
////	Client.PinCode = LoopOnLine[1];
////	Client.Name = LoopOnLine[2];
////	Client.Phone = LoopOnLine[3];
////	Client.AccountBalance = stod(LoopOnLine[4]);
////
////	return Client;
////}
////
////vector <sClients> UploadRecordIntoVector() {
////	vector <string> AllStrings = UploadLineToVector();
////	vector<sClients> AllCients;
////	sClients Client;
////
////	for (string& Line : AllStrings) {
////
////		Client = ConvertLineIntoRecord(Line);
////		AllCients.push_back(Client);
////	}
////	return AllCients;
////}
////
////
////void PrintOneClient(sClients Client) {
////	cout << "\nThe following are the client details:\n";
////	cout << "\nAccount Number: " << Client.AccountNumber;
////	cout << "\nPin Code     : " << Client.PinCode;
////	cout << "\nName         : " << Client.Name;
////	cout << "\nPhone        : " << Client.Phone;
////	cout << "\nAccount Balance: " << Client.AccountBalance;
////}
////
////
////
////bool GetClientByAccountNumber(sClients& Client, string AccountNumber, vector <sClients>& Clients) {
////	for (sClients& One : Clients) {
////		if (One.AccountNumber == AccountNumber) {
////			Client = One;
////			return true;
////		}
////	}
////	return false;
////}
////
////
////string ConvertRecordToLine(sClients Client, string Del = "//#//") {
////	string Line = "";
////
////	Line += Client.AccountNumber + Del;
////	Line += Client.PinCode + Del;
////	Line += Client.Name + Del;
////	Line += Client.Phone + Del;
////	Line += to_string(Client.AccountBalance);
////	return Line;
////}
////
////sClients ReadData(string AccountNumber) {
////	sClients Client;
////	Client.AccountNumber = AccountNumber;
////	cout << "Enter The PinCode ";
////	getline(cin >> ws, Client.PinCode);
////	cout << "Enter The Nmae ";
////	getline(cin, Client.Name);
////	cout << "Enter The Phone ";
////	getline(cin, Client.Phone);
////	cout << "Enter Acccount Balance ";
////	cin >> Client.AccountBalance;
////	return Client;
////}
////
////
////bool ChangeMarkToDelete(string AccountNumber, vector <sClients>& Clients) {
////	for (sClients& One : Clients) {
////		if (One.AccountNumber == AccountNumber) {
////			One = ReadData(AccountNumber);
////			return true;
////		}
////	}
////	return false;
////}
////
////void UploadClientsToFolder(vector<sClients> String) {
////	fstream File;
////	File.open(FileName, ios::out);
////
////	if (File.is_open()) {
////		string OneLine = "";
////		for (sClients& One : String) {
////				OneLine = ConvertRecordToLine(One);
////				File << OneLine << endl;
////		
////		}
////		File.close();
////	}
////}
////
////
////void DeleteClient(string AccountNumber, vector<sClients>& Client) {
////	sClients Record;
////
////	char Letter = 'n';
////	if (GetClientByAccountNumber(Record, AccountNumber, Client)) {
////		PrintOneClient(Record);
////		cout << "\nAre You Sure To Update It:  ";
////		cin >> Letter;
////		if (Letter == 'y' || Letter == 'Y') {
////			ChangeMarkToDelete(AccountNumber, Client);
////			UploadClientsToFolder(Client);
////			Client = UploadRecordIntoVector();
////			cout << "\nClient Deleted\n";
////
////		}
////	}
////	else {
////		cout << "This Number " << AccountNumber << " Not Exist\n";
////
////	}
////
////}
////
////
////
////string ReadAccNumber() {
////	string Num = "";
////	cout << "Please Enter Account Number: ";
////	cin >> Num;
////	return Num;
////}

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
//Problem Solving 22///////
//A105//#//100//#//Ahmed Muhamed//#//010//#//10.000000
/*
=============================================






=============================================
*/

#include <iostream>

using namespace std ;

int main() {
	
//	cal. CGPA percentage of a student 

	float english , maths , hindi , science , soicalSci ;
	
	cout << "Enter marks scored in English : " << endl ;
	cin >> english ;
	
	cout << "Enter marks scored in Maths : " << endl ;
	cin >> maths ;
	
	cout << "Enter marks scored in Hindi : " << endl ;
	cin >> hindi ;
	
	cout << "Enter marks scored in Science : " << endl ;
	cin >> science ;
	
	cout << "Enter marks scored in Social Science : " << endl ;
	cin >> soicalSci ;
	
	float totalMarks = english + maths + hindi + science + soicalSci ;
	
	float cgpa = totalMarks / 5 ;
	
	cout << "Percentage is :" << cgpa << endl ;
	
	
	return 0 ;
}

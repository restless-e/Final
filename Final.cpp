#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string hw = "Hello World!";
	string firstName, lastName, studentID, email, fullName;
	ifstream read_file;
	ofstream out_file;
	string fileName = "hello.txt";
	cout << "Please type your FIRST name: ";
	cin >> firstName;
	cout << "Please type your LAST name: ";
	cin >> lastName;
	cout << "Please type your student ID:";
	cin >> studentID;
	cout << "Please type your email address: ";
	cin >> email;

	fullName = firstName + " " + lastName;

	cout << "Opening " << fileName << endl;
	out_file.open(fileName);
	if (out_file.fail())	{
		cout << "File not found or inaccessible!" << endl;
	}
	else{
		cout << "Adding 'Hello World!'" << endl
			<< "Adding " << fullName << endl
			<< "Adding " << studentID << endl
			<< "Adding " << email << endl
			<< "to " << fileName << endl;
		out_file << hw << endl << fullName << endl << studentID<< endl << email;
		out_file.close();
	}

	cout << "Reading contents of " << fileName << endl;
	read_file.open(fileName);
	if(read_file.fail()){
		cout << "File not found or inaccessible!" << endl;
	}
	else{
		string out;
		while(!read_file.eof()){
			getline(read_file, out);
			cout << out << endl;
		}
		cout << "Reading file completed." << endl;
		read_file.close();
	}

	system("pause");
	return 0;
}


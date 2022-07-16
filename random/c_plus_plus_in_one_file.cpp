#include<bits/stdc++.h>
using namespace std;


// function
int multiply(int a, int b)
{
	int c = a * b;
	return c;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
// #typedef long long ll;

	//->single line comment
	/*multiline comment*/

	// short _sa = 9;
	// cout << _sa;
	// string harry = "harry";
	// short a ;//-->shortest integers;
	// double more precisive than float
	// float const score = 34.1;//-->it remains constant and it won't change for the whole program


	// ||camelCase Notation
	/*int marksInMaths = 83;
	cout << marksInMaths;*/


	//|||CONDITIONALS
	/*
	if(condition){

	}
	else if(condition){

	}
	else{

	}*///when if is true then the program won't go to else or else if



	// ||switch
// 	switch (expression)  {
//     case constant1:
//         // code to be executed if
//         // expression is equal to constant1;
//         break;

//     case constant2:
//         // code to be executed if
//         // expression is equal to constant2;
//         break;
//         .
//         .
//         .
//     default:
//         // code to be executed if
//         // expression doesn't match any constant
// }

	// ||LOOPS
	// int index = 0;
	// while (index < 34)
	// {
	// 	cout << "we are at index number " << index << endl;
	// 	index = index + 1;
	// }
	// // this loop will run atleast once
	// do
	// {
	// 	cout << "we are at index number " << index << endl;
	// } while (index > 34123);
	// for (int i = 0; i < 34; ++i)
	// {
	// 	cout << i << endl;
	// 	// ++i->first increment then print
	// 	// i++->first print then increment
	// }

	//||FUNCTIONS
	// int a, b;
	// cin >> a >> b;
	// cout << "the multiplication of entered numbers is " << multiply(a, b) << endl;


	//||arrays
	// int arr[3] = {1, 2, 3};
	// for (int i = 0; i < 3; i++)
	// {
	// 	cout << arr[i] << endl;
	// }
	// arrays can also be created from the inputs
	// int arr2[3];
	// for (int i = 0; i < 3; i++)
	// {
	// 	cin >> arr2[i];
	// }
	// for (int i = 0; i < 3; i++)
	// {
	// 	cout << arr2[i] << endl;
	// }
	// arrays can be of 2 dimensions also
	// eg. int arr2d[2][3]-->2d array of 2 cross 3
	// to print the elements of 2d array we need two for loops nested in one another
	// 2d array is like matrix only


	//|||TYPECASTING
	// int a = 232;
	// float b = 81.123;
	// cout << (float)a / 125;


	//||strings
	// string name = "aryan";
	// cout << "my name is " << name << endl;
	// cout << "length of name is " << name.length() << endl;
	// cout << "substring of name is " << name.substr(0, 3) << endl;



	//|||POINTERS
	// // store address of variables;
	// int a = 34;
	// int* ptra;
	// ptra = &a;//address of a
	// cout << "the address of a "<<ptra<<endl;;
	// cout << "value of a"<<*ptra<<endl;//dereferenced by * we get 34
	// // used in arrays dynamic programming


	//||OBJECTS AND CLASSES
	//public class
	// class Employee
	// {
	// public:
	// 	string name;
	// 	int salary;
	// 	//constructor
	// 	Employee(string name, int salary, int secretPassword)
	// 	{
	// 		this->name = name;
	// 		this->salary = salary;
	// 		this->secretPassword = secretPassword;
	// 	}
	// 	void printDetails() {
	// 		cout << "the name of employee is " << this->name << "\nthe salary of the employee is " << this->salary << endl;
	// 	}
	// 	void getsecretPassword()
	// 	{
	// 		cout << "the secret password is " << this->secretPassword;
	// 	}
	// private:
	// 	int secretPassword;
	// };

	// Employee ar("aryan constructor", 1010, 342);
	// ar.name = "Aryan";
	// ar.salary = 100;
	// ar.printDetails();
	// ar.getsecretPassword();//hence we accessed the secret password from the method inside the class
	// ar.secretPassword;//it would give error because it is private can't be accessed from ouside but from the class itself only

	//class can also be created outside the main function
	//"this->" is used to apply particularly to the thing we are using



	//|||INHERITANCE
	// class Programmer : public Employee
	// {
	// public:
	// 	int errors;
	// };

	return 0;
}
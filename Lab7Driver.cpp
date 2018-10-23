// Lab7Driver.cpp
// Trevor Dine
// COSC 2030
// 22 October 2018
// Lab 5

#include <iostream>
#include <stack>
#include <string>
#include <functional>
#include <vector>
#include <list>
#include "Lab7MyStack.h"

using std::stack;
using std::string;
using std::vector;
using std::list;
using std::cout;
using std::cin;
using std::endl;

string stringReversal1(string input);
string stringReversal2(string input);
string stringReversal3(string input);
string stringReversal4(string input);

int main()
{
	string reversal1Test = "String reversal with a stack";
	cout << "Original String: " << reversal1Test << endl;
	cout << "Reversed String: " << stringReversal1(reversal1Test) << endl;

	string reversal2Test = "String reversal with a vector";
	cout << "Original String: " << reversal2Test << endl;
	cout << "Reversed String: " << stringReversal2(reversal2Test) << endl;

	string reversal3Test = "String reversal with a list";
	cout << "Original String: " << reversal3Test << endl;
	cout << "Reversed String: " << stringReversal3(reversal3Test) << endl;

	string reversal4Test = "String reversal with MyStack";
	cout << "Original String: " << reversal4Test << endl;
	cout << "Reversed String: " << stringReversal4(reversal4Test) << endl;

	system("pause");
	return 0;
}

string stringReversal1(string input)
{
	stack<char> reversedStack;
	string finalString;

	for (int i = 0; i < input.size(); i++)
	{
		reversedStack.push(input[i]);
	}
	
	for (int i = 0; i < input.size(); i++)
	{
		finalString.push_back(reversedStack.top());
		reversedStack.pop();
	}

	return finalString;
}

string stringReversal2(string input)
{
	vector<char> reverseVector;
	string finalString;

	for (int i = 0; i < input.size(); i++)
	{
		reverseVector.push_back(input[i]);
	}

	while (!reverseVector.empty())
	{
		finalString.push_back(reverseVector.back());
		reverseVector.pop_back();
	}
	
	return finalString;
}

string stringReversal3(string input)
{
	list<char> reverseList;
	string finalString;

	for (int i = 0; i < input.size(); i++)
	{
		reverseList.push_back(input[i]);
	}

	while (!reverseList.empty())
	{
		finalString.push_back(reverseList.back());
		reverseList.pop_back();
	}

	return finalString;
}

string stringReversal4(string input)
{
	MyStack reverseMyStack;
	string finalString;

	for (int i = 0; i < input.size(); i++)
	{
		reverseMyStack.push(input[i]);
	}

	while (!reverseMyStack.isEmpty())
	{
		finalString.push_back(reverseMyStack.pull());
	}

	return finalString;
}
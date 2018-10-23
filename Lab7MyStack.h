// Lab7MyStack.h
// Trevor Dine
// COSC 2030
// 22 October 2018
// Lab 05

#ifndef _LAB_7_MY_STACK_H_
#define _LAB_7_MY_STACK_H_

#include <vector>

using std::vector;

class MyStack
{
public:
	//Determines wheter or not the stack is empty and returns true or false.
	bool isEmpty() const;

	//Pushes a character into the myStackVec.
	void push(char& c);

	//Retrieves the top value from the vector stack and then pops that value off of the stack.
	char pull();

	// Vector to store the values of the stack.
	vector<char> myStackVec;
};

#endif
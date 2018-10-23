// Lab7MyStack.cpp
// Trevor Dine
// COSC 2030
// 22 October 2018
// Lab 05

#include "Lab7MyStack.h"

bool MyStack::isEmpty() const
{
	return myStackVec.empty();
}

void MyStack::push(char& c)
{
	myStackVec.push_back(c);
}

char MyStack::pull()
{
	char output;
	output = myStackVec.back();
	myStackVec.pop_back();
	return output;
}
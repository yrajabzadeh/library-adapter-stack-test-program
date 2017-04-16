//stack in C++ programming

#include <iostream>
#include <stack>
#include <vector>
#include <list>

using namespace std;
//library adapter stack test program
template < typename T > void pushElements (T &stackRef);
template < typename T > void pushElements (T &stackRef);

intmain()
{
	//stack with default underlying deque
	
	stack<int>
	
	//stack with underlying vector
	
	stack<int,vector<int>>intVectorStack;
	
	//stack with underlying list
	
	stack<int,list<int>> intListStack;
	
	//push the values 0-9 onto each stack
	
	cout<<"Pushing onto intDequeStack:";
	pushElements(intDequeStack);
	cout<<"\nPushing onto intListStack:";
	pushElemnts (intVectorStack);
	cout<<"\nPushing ontp intListStack;";
	pushElements(intListStack);
	cout<<endl<<endl;
	
	//display and remove elements from each stack
	cout<<"Popping from intDequeStack:";
	popElements(intDequeStack);
	cout<<"\nPopping from intVectorStack:";
	popElements(intVectorStack);
	cout<<"\nPopping from intListStack:";
	popElements(intListStack);
	cout<<endl;
} // end main

//push elements onto stack object to which stackRef refers

template<template T> void pushElements(T &stackRef)

{
	for (int i=0; i<10; ++i)
	{
		stackRef.push(i); //push element onto stack
		cout<<stackRef.top()<<' '; //view (and display) top element
	}
}

//pop elements from stack object to which stackRef refers

template<typename T> void popElements (T &stackRef)
{
	while (!stackRef.empty())
	{
		cout<<stackRef.top()<<' '; //view (and display)top element
		stackRef.pop(); //remove top element
	} // end while
} //end function popElements

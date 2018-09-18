//============================================================
// Emma Steinman
// March 24, 2017
// List.cc
// Class methods for List class.
//============================================================

#include "List.h"

//============================================================
// default constructor
//============================================================

		List::List	(void)
{
	array = new int[DEFAULT_LIST_SIZE];
	capacity = DEFAULT_LIST_SIZE;
	size = 0;
}

//============================================================
// copy constructor
// copies a list from an existing list
//============================================================

		List::List	(const List &c)
{
	array = new int[c.capacity];		//creates new array
	capacity = c.capacity;
	size = c.size;						//changes size/cap
	for (int i = 0; i < size; i++)
		array[i] = c.array[i];			//copies items over
				
}

//============================================================
// isEmpty
// tests if list is empty and returns boolean value
//============================================================

bool	List::isEmpty	(void)
{
	return (size == 0);
}

//============================================================
// length
// returns number of items in list
//============================================================

int		List::length	(void) const
{
	return size;
}

//============================================================
// operator []
// returns item in list at indicated index
//============================================================

int&	List::operator[]	(int i)
{
	if (i >= size or i < 0)
	{
		cout << "Error. Invalid index\n";
		exit(1);
	}
	return array[i];
}

//============================================================
// cout operator <<
// overloads cout operator to print list
//============================================================

ostream& operator<<	(ostream &os, List c)
{
	for (int i = 0; i < c.size; i++)
		os << c[i] << " ";

	return os;
}

//============================================================
// toString
// converts list to string 
//============================================================

string	List::toString		(void)
{
	string s;

	for (int i = 0; i < size; i++)
	{									//converts each values
		s += to_string(array[i]);		//to string and appends
		s += " ";
	}
	return s;
}

//============================================================
// append
// adds item to the end of list
//============================================================

void	List::append		(int c)
{
	if (size + 1 > capacity)			//checks capacity
	{									//creates new pointer
		int *oldArray = array;			//to existing array
		capacity *= 2;					
		array = new int[capacity];		//creates new array

		for (int i = 0; i < size; i++)
			array[i] = oldArray[i];		//copies existing values

		array[size] = c;				//copies last value
		size += 1;
		delete[] oldArray;				//deletes original array
	}
	else
		array[size] = c;
		size += 1;

}

//============================================================
// insert
// inserts indicated item at indicated position
//============================================================

void	List::insert		(int item, int pos)
{
	if (pos > size or pos < 0)
	{
		cout << "Error. Invalid index.\n";
		exit(1);
	}
	else if (size + 1 > capacity)
	{
		int *oldArray = array;
		capacity *= 2;
		array = new int[capacity];

		for (int i = 0; i < pos; i++)
			array[i] = oldArray[i];

		array[pos] = item;

		for (int i = pos; i < size; i++)
			array[i+1] = oldArray[i];

		size += 1;
		delete[] oldArray;
	}
	else
	{
		int *oldArray = array;
		array = new int[capacity];

		for (int i = 0; i < pos; i++)
			array[i] = oldArray[i];

		array[pos] = item;

		for (int i = pos; i < size; i++)
			array[i+1] = oldArray[i];

		size += 1;
		delete[] oldArray;
	}
		

}

//============================================================
// remove
// removes item from list at indicated position
//============================================================

void	List::remove		(int pos)
{
	if (pos >= size or pos < 0)
	{
		cout << "Error. Invalid index.\n";
		exit(1);
	}
	int *oldArray = array;
	array = new int[capacity];

	for (int i = 0; i < pos; i ++)
		array[i] = oldArray[i];

	for (int i = pos; i < size; i++)
		array[i] = oldArray[i+1];

	size -= 1;
	delete[] oldArray;
}

//============================================================
// operator +
// concatenates two lists into a third list
//============================================================

List	List::operator+		(const List c) const
{
	List l;									//creates empty list


	for (int i = 0; i < size; i++)			//appends values from
		l.append(array[i]);					//first list

	for	(int i = 0; i < c.size; i++)		//appends values from 
		l.append(c.array[i]);				//second list

	return l;
}

//============================================================
// operator =
// assigns values in a list to another list
//============================================================

List	List::operator=		(List c) const
{
	List l;
	l.capacity = c.capacity;

	for (int i = 0; i < size; i++)
		l.append(c.array[i]);

	return l;
}

//============================================================
// clear
// removes items from list
//============================================================

void	List::clear			(void)
{
	int *oldArray = array;
	array = new int[capacity];
	size = 0;
	delete[] oldArray;
}

//============================================================
// destructor
// deletes list and clears the memory
//============================================================

		List::~List			(void)
{
	delete[] array;
}

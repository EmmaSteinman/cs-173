//============================================================
// Emma Steinman
// March 24, 2017
// List.h
// Class definition for the List class dealing with Lists
//============================================================

#include <iostream>
#include <string>
using namespace std;

#ifndef LIST_H
#define LIST_H


//============================================================
// List Class
//============================================================

class List
{
private:
	int 	*array;
	int		DEFAULT_LIST_SIZE = 10;
	int		capacity;
	int 	size;
	
public:
	
			List		(void);		//default
			List		(const List &c);	//copy constructor
	bool	isEmpty		(void);
	int		length		(void) const;
	int&	operator[]	(int i);	//index operator
	friend ostream& operator<< (ostream &os, List c);
	string	toString	(void);
	void	append		(int c);
	void	insert		(int, int);
	void	remove		(int);
	List 	operator+	(const List c) const ;
	List 	operator=	(List c) const ;
	void	clear		(void);
			~List		(void);		//destructor

};

#endif

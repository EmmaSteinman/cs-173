//===========================================================
// Matt Kretchmar
// Queue.h
// April 21, 2017
// A Queue based implementation of a Queue class
//===========================================================

#include <iostream>
#include <stdlib.h>
#include <string>
#include "List.h"
using namespace std;


//===========================================================
#ifndef QUEUE_H
#define QUEUE_H

template <class T>
class Queue
{
protected:
    List<T>     list;
public:
                Queue       ( void );
               ~Queue       ( void );
                Queue       ( const Queue<T> & );
    Queue<T>     operator=  ( const Queue<T> & );
    void        enqueue     ( T item );
    T           dequeue     ( void );
    T           peek        ( void );
    void        clear       ( void );
    int         length      ( void ) const;
    bool        isEmpty     ( void ) const;
    friend ostream & operator<< ( ostream &os, const Queue<T> &queue )
    {
        os << queue.list.toString();
        return os;
    }
};

//===========================================================
// default constructor
//===========================================================
template <class T>
            Queue<T>::Queue       ( void )
{
}
//===========================================================
// copy constructor
//===========================================================
template <class T>
            Queue<T>::Queue       ( const Queue<T> &queue )
{
    list = queue.list;
}
//===========================================================
// destructor
//===========================================================
template <class T>
            Queue<T>::~Queue       ( void )
{
}
//===========================================================
// assignment operator
//===========================================================
template <class T>
Queue<T>     Queue<T>::operator=  ( const Queue<T> & queue )
{
    list = queue.list;
    return *this;
}
//===========================================================
// enqueue
//===========================================================
template <class T>
void        Queue<T>::enqueue ( T item )
{
    list.append(item);
}

//===========================================================
// dequeue
//===========================================================
template <class T>
T         Queue<T>::dequeue ( void )
{
    if ( list.isEmpty() )
    {
        cout << "Error: cannot dequeue from empty queue\n";
        exit(1);
    }
    T ret = list[0];
    list.remove(0);
    
    return ret;
}

//===========================================================
// peek
//===========================================================
template <class T>
T         Queue<T>::peek ( void )
{
    if ( list.isEmpty() )
    {
        cout << "Error: cannot peek from empty queue\n";
        exit(1);
    }
    return list[0];
}

//===========================================================
// length
//===========================================================
template <class T>
int         Queue<T>::length     ( void ) const
{
    return list.length();
}
//===========================================================
// isEmpty
//===========================================================
template <class T>
bool        Queue<T>::isEmpty     ( void ) const
{
    return list.length()==0;
}
//===========================================================
// clear
//===========================================================
template <class T>
void        Queue<T>::clear       ( void )
{
    list.clear();
}
//===========================================================
#endif


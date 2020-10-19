#pragma once
#include <iostream>
#include "Queue.h"
using namespace std;

template <class T >
Queue<T>::Queue(){
    IsEmpty = true;
}// Queue Object Constructor

template <class T>
Queue<T>::~Queue<T>(){
}

template <class T>
void Queue<T>::clear(void){
    Sequence.clear();
    IsEmpty = true;
}// clear

template <class T>
void Queue<T>::transferFrom (Queue& source){
    Sequence.transferFrom(source.Sequence);
    source.clear();
}// transferFrom


template <class T>
Queue<T>& Queue<T>::operator=(Queue& rhs){
    Sequence.operator=(rhs.Sequence);
    return (*this);
}// operator


template <class T>
void Queue<T>::enqueue(T& x){
    Sequence.add(x, length());
    IsEmpty = false;
}// enqueue

template <class T>
void Queue<T>::dequeue(T& x){
    x = Sequence.entry(0);
    Sequence.remove(x, 0);
    if (Sequence.length() == 0){
        IsEmpty = true;
    }
    else{
        IsEmpty = false;
    }
}// dequeue

template <class T>
void Queue<T>::replaceFront(T& x){
    if (Sequence.length() == 0){
        cout << "Queue is Empty, please enter valid Queue";
    }
    else{
        T temp = x;
        T temp2 = Sequence.entry(0);
        Sequence.remove(x, 0);
        Sequence.add(temp, 0);
        x = temp2;

    }
}// replaceFront

template <class T>
T& Queue<T>::front(void){
        return Sequence.entry(0);
}// front

template <class T>
int Queue<T>::length(void){
  return Sequence.length();
}// length

template <class T>
void Queue<T>::outputQueue(void){
    Sequence.outputSequence();
}

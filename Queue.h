#pragma once
#include "Sequence.hpp"
template <class T>
class Queue
    //! is modeled by string of T
    //!   exemplar self
    
{
public: // Standard Operations
        Queue();
        //! replaces self
        //! ensures: self = <>
        ~Queue();
        void clear(void);
        //! clears self
        // IMPLEMENTED IN QUEUE.HPP
        void transferFrom(Queue& source);
        //! replaces self
        //! clears source
        //! ensures: self = #source
        // IMPLEMENTED IN QUEUE.HPP
        Queue& operator = (Queue& rhs);
        //! replaces self
        //! restores rhs
        //! ensures: self = rhs
        // IMPLEMENTED IN QUEUE.HPP
        
        // Queue Specific Operations
        void enqueue(T& x);
        //! updates self
        //! clears x
        //! ensures: self = #self * <#x>
        // IMPLEMENTED IN QUEUE.HPP

        void dequeue(T& x);
        //! updates self
        //! replaces x
        //! requires: self /= <>
        //! ensures: <x> is prefix of #self  and  self = #self[1, |#self|)
        // IMPLEMENTED IN QUEUE.HPP

        void replaceFront(T& x);
        //! updates self, x
        //! requires: self /= <>
        //! ensures: <x> is prefix of #self  and  self = <#x> * #self[1, |#self|)
        // IMPLEMENTED IN QUEUE.HPP

        T& front(void);
        //! restores self
        //! requires: self /= <>
        //! ensures: <front> is prefix of self
        // IMPLEMENTED IN QUEUE.HPP


        int length(void);
        //! restores self
        //! ensures: length = |self|
        // IMPLEMENTED IN QUEUE.HPP

        void outputQueue(void);


private: // Representation
    Sequence<T> Sequence;
    bool IsEmpty;
};



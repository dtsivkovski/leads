#ifndef CARRIAGE_H
#define CARRIAGE_H

#include <iostream>
#include <exception>
#include <string>

using namespace std;

template <typename T>
class Carriage {
    public:
        Carriage(); // defaults to size 3
        Carriage(unsigned int size, string name);
        ~Carriage();

        // next and previous carriages
        Carriage* next;
        Carriage* prev;
        string name;

        // adding/setting/seeing/removing data
        void add(T data);
        void set(unsigned int index, T data);
        T see(unsigned int index);
        T remove(unsigned int index);
        T* getAll();

        // aux functions
        int getSize();
        void printData();
        string getManifest();
        unsigned int numInCarriage();
        bool isEmpty();
        bool isFull();

    private:
        T* data; // array of size size
        unsigned int size;
        unsigned int inCarriage;

};

#include "Carriage_Implementation.h"

#endif // CARRIAGE_H
/**
* stack.hpp
* .txt den okunan değerleri yığın oluşturup içinde tutuyor
* 1-B
* 2.Ödev
* 28/07/2023
* Furkan Geren furkan.geren@ogr.sakarya.edu.tr && Azmi Çağrı Karakaya azmi.karakaya@ogr.sakarya.edu.tr
*/
#ifndef STACK_HPP
#define STACK_HPP
#include "node.hpp"


class Stack{

    

    public:

    Node* top;
    Stack();
    ~Stack();

    void push(int data);
    void pop();
    int peek();
    int size();
    bool isEmpty();
    void display();

};





#endif
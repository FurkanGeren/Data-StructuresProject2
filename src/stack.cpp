/**
* stack.cpp
* .txt den okunan değerleri yığın oluşturup içinde tutuyor
* 1-B
* 2.Ödev
* 28/07/2023
* Furkan Geren furkan.geren@ogr.sakarya.edu.tr && Azmi Çağrı Karakaya azmi.karakaya@ogr.sakarya.edu.tr
*/
#include "stack.hpp"
#include <iostream>


Stack::Stack(){
    top = nullptr;
}

Stack::~Stack() {
    while (!isEmpty()) {
        pop();
    }
}
void Stack::push(int data) {
    Node* newNode = new Node(data);
    newNode->data = data;
    newNode->next = top;
    top = newNode;
}

void Stack::pop() {
    if (isEmpty()) {
        return;
    }

    Node* temp = top;
    
    
    top = top->next;
    delete temp;
}


int Stack::peek() {
    if (isEmpty()) {
        std::cout << "Stack is empty peek." << std::endl;
        return -1; 
    }

    return top->data;
}

bool Stack::isEmpty() {
    return top == nullptr;
}


void Stack::display() {
    if (isEmpty()) {
        std::cout << "Stack is empty." << std::endl;
        return;
    }
    std::cout << "Stack: ";
    Node* current = top;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int Stack::size() {
    int count = 0;
    Node* current = top;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}
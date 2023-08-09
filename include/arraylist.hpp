/**
* arraylist.hpp
* Oluşturulan stackleri burada tutuyorum
* 1-B
* 2.Ödev
* 28/07/2023
* Furkan Geren furkan.geren@ogr.sakarya.edu.tr && Azmi Çağrı Karakaya azmi.karakaya@ogr.sakarya.edu.tr
*/

#ifndef ARRAYLIST_HPP
#define ARRAYLIST_HPP

#include "stack.hpp"
#include "node.hpp"

#include <iomanip>

using namespace std;
class ArrayList
{
private:
    int length;
    int capacity;
    void reserve(int newCapacity);
public:
    Stack **items;
   
    ArrayList(); 
    int size();
    bool isEmpty();
    void add(Stack *&item);
    void insert(int i, Stack *&item);
    void clear();
    ~ArrayList();
    
};

#endif
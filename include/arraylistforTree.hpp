/**
* arraylistforTree.hpp
* Oluşturulan tree'leri burada tutuyorum
* 1-B
* 2.Ödev
* 29/07/2023
* Furkan Geren furkan.geren@ogr.sakarya.edu.tr && Azmi Çağrı Karakaya azmi.karakaya@ogr.sakarya.edu.tr
*/

#ifndef ARRAYLISTFORTREE_HPP
#define ARRAYLISTFORTREE_HPP

#include "Tree.hpp"
#include "treenode.hpp"

#include <iomanip>

using namespace std;

class ArrayListforTree{
private:
    int length;
    int capacity;
    void reserve(int newCapacity);
    
public:
    Tree **items;

    ArrayListforTree();
    int size();
    bool isEmpty();
    void add(Tree *&item);
    void insert(int i, Tree *&item);
    Tree* maxtoplam();
    void clear();
    ~ArrayListforTree();
    
};

#endif
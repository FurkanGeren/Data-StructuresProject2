/**
* arraylistforTree.cpp
* Oluşturulan tree'leri burada tutuyorum
* 1-B
* 2.Ödev
* 29/07/2023
* Furkan Geren furkan.geren@ogr.sakarya.edu.tr && Azmi Çağrı Karakaya azmi.karakaya@ogr.sakarya.edu.tr
*/

#include "arraylistforTree.hpp"

void ArrayListforTree::reserve(int newCapacity)
{
    if (capacity >= newCapacity)
        return;
    Tree **tmp = new Tree *[newCapacity];
    for (int j = 0; j < length; j++)
        tmp[j] = items[j];
    if (items != NULL)
        delete[] items;
    items = tmp;
    capacity = newCapacity;
}

ArrayListforTree::ArrayListforTree()
{
    length = 0;
    capacity = 0;
    items = NULL;
}

int ArrayListforTree::size()
{
    return length;
}
bool ArrayListforTree::isEmpty()
{
    return size() == 0;
}

void ArrayListforTree::add(Tree *&item)
{
    insert(length, item);
}
void ArrayListforTree::insert(int i, Tree *&item)
{

    if (length >= capacity)
        reserve(max(1, 2 * capacity));
    for (int j = length - 1; j >= i; j--)
        items[j + 1] = items[j];
    items[i] = item;
    length++;
}
Tree *ArrayListforTree::maxtoplam()
{
    if (size() == 0)
        return nullptr;

    Tree *maxsum = items[0];
    int maxtoplam = maxsum->sum();

    for (int i = 1; i < size(); i++)
    {
        Tree *currentTree = items[i];
        int currenttoplam = currentTree->sum();
        if (currenttoplam > maxtoplam)
        {
            maxsum = currentTree;
            maxtoplam = currenttoplam;
        }
    }
    return maxsum;
}
void ArrayListforTree::clear()
{
    length = 0;
}

ArrayListforTree::~ArrayListforTree()
{
    if (items != NULL)
        delete[] items;
}
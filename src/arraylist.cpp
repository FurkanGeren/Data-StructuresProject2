/**
* arraylist.cpp
* Oluşturulan stackleri burada tutuyorum
* 1-B
* 2.Ödev
* 28/07/2023
* Furkan Geren furkan.geren@ogr.sakarya.edu.tr && Azmi Çağrı Karakaya azmi.karakaya@ogr.sakarya.edu.tr
*/

#include "arraylist.hpp"


void ArrayList::reserve(int newCapacity)
{
    if (capacity >= newCapacity)
        return;
    Stack **tmp = new Stack *[newCapacity];
    for (int j = 0; j < length; j++)
        tmp[j] = items[j];
    if (items != NULL)
        delete[] items;
    items = tmp;
    capacity = newCapacity;
}

ArrayList::ArrayList()
{
    length = 0;
    capacity = 0;
    items = NULL;
}

int ArrayList::size()
{
    return length;
}
bool ArrayList::isEmpty()
{
    return size() == 0;
}

void ArrayList::add(Stack *&item)
{
    insert(length, item);
}
void ArrayList::insert(int i, Stack *&item)
{

    if (length >= capacity)
        reserve(max(1, 2 * capacity));
    for (int j = length - 1; j >= i; j--)
        items[j + 1] = items[j];
    items[i] = item;
    length++;
}

void ArrayList::clear()
{
    length = 0;
}



ArrayList::~ArrayList()
{
    if (items != NULL)
        delete[] items;
}

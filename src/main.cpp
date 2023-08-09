/**
* main.cpp
* Classlar buradan çağrılıyor
* 1-B
* 2.Ödev
* 28/07/2023
* Furkan Geren furkan.geren@ogr.sakarya.edu.tr && Azmi Çağrı Karakaya azmi.karakaya@ogr.sakarya.edu.tr
*/


#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <windows.h>

#include "node.hpp"
#include "stack.hpp"
#include "arraylist.hpp"
#include "arraylistforTree.hpp"
#include "Tree.hpp"

using namespace std;

int main(int argc, char **argv)
{
    ifstream dosya;
    dosya.open("Sayilar.txt", ios::in);
    if (!dosya)
    {
        cerr << "Dosya Acilmadi!!" << endl;
        return 1;
    }
    string tp;
    int sayac = 0;

    while (getline(dosya, tp))
    {
        stringstream ss(tp);
        int parca;
        ArrayList *arrayList = new ArrayList();
        Stack *stack = new Stack();
        int parcasayisi = 1;
        sayac++;

        while (ss >> parca)
        {
            if (stack->isEmpty())
            {
                stack->push(parca);
            }
            else if (parca % 2 == 0 && parca > stack->peek())
            {
                arrayList->add(stack);
                stack = new Stack();
                stack->push(parca);
            }
            else
            {
                stack->push(parca);
            }
        }
        arrayList->add(stack);

        // agaclar listede tutuluyor olusturulup
        ArrayListforTree *agacarray = new ArrayListforTree();
        Tree *agac = new Tree();

        for (int k = 0; k < arrayList->size(); k++)
        {
            int turn = arrayList->items[k]->size();
            for (int j = 0; j < turn; j++)
            {
                agac->insert(arrayList->items[k]->peek());

                arrayList->items[k]->pop();
            }

            agacarray->add(agac);
            agac = new Tree();
        }
        
        for (int a = 0; a < arrayList->size(); a++)
        {
            delete arrayList->items[a];
        }
        
        delete arrayList;

        int maxyuk = 0;
        int maxsum = 0;
        int bu = 0;
        Tree *printTree = new Tree();
        for (int y = 0; y < agacarray->size(); y++)
        {
            if (agacarray->items[y]->yukseklik() > maxyuk)
            {
                maxyuk = agacarray->items[y]->yukseklik();
                printTree = agacarray->items[y];
            }
            else if (agacarray->items[y]->yukseklik() == maxyuk)
            {
                if (agacarray->items[y]->sum() > printTree->sum())
                {
                    printTree = agacarray->items[y];
                }
                else if (agacarray->items[y]->sum() == printTree->sum())
                {
                    continue;
                }
                else
                {
                    continue;
                }
            }
        }
        printTree->postorder();
        cout << endl;
        
        Sleep(10);

        

                    
        // agacarray->~ArrayListforTree();
        
        delete printTree;
        delete agacarray;


        //delete agac;
        
    }
    dosya.close();

    return 0;
}
/**
* Tree.hpp
* Stackten verileri alıp Tree'ye ekliyor
* 1-B
* 2.Ödev
* 29/07/2023
* Furkan Geren furkan.geren@ogr.sakarya.edu.tr && Azmi Çağrı Karakaya azmi.karakaya@ogr.sakarya.edu.tr
*/

#ifndef TREE_HPP
#define TREE_HPP
#include<iostream>
#include "treenode.hpp"

class Tree{
    private:

    int sumRecursive(TreeNode* current);
    void silme(TreeNode* node);
    TreeNode *insertRecursive(TreeNode* current,int value);
    bool searchRecursive(TreeNode* current,int value);
    int agacyukseklik;
    void postOrder(TreeNode* index);
    public:
    Tree();
    ~Tree();
    TreeNode *root;
    void insert(int value);
    bool search(int value);
    void postorder();
    int yukseklik();
    int yukseklik(TreeNode* tempNode);
    int sum();
    

};







#endif


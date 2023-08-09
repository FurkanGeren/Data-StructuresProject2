/**
* treenode.hpp
* Tree'nin düğümlerini temsil eder
* 1-B
* 2.Ödev
* 29/07/2023
* Furkan Geren furkan.geren@ogr.sakarya.edu.tr && Azmi Çağrı Karakaya azmi.karakaya@ogr.sakarya.edu.tr
*/

#ifndef TREENODE_HPP
#define TREENODE_HPP

#include <iostream>

class TreeNode {

    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    int yukseklik;
    TreeNode(int value);
};


#endif
/**
* treenode.cpp
* Tree'nin düğümlerini temsil eder
* 1-B
* 2.Ödev
* 29/07/2023
* Furkan Geren furkan.geren@ogr.sakarya.edu.tr && Azmi Çağrı Karakaya azmi.karakaya@ogr.sakarya.edu.tr
*/

#include "treenode.hpp"

TreeNode::TreeNode(int value){
    this->data=value;
    left=nullptr;
    right=nullptr;
}
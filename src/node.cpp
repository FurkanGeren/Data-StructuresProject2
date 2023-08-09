 /**
* node.cpp
* Arraylistin düğümünü oluşturuyor
* 1-B
* 2.Ödev
* 28/07/2023
* Furkan Geren furkan.geren@ogr.sakarya.edu.tr && Azmi Çağrı Karakaya azmi.karakaya@ogr.sakarya.edu.tr
*/
#include "node.hpp"

Node::Node(int data){
    this->data=data;
    next=nullptr;
}
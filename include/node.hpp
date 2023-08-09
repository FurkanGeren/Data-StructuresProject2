 /**
* node.hpp
* Arraylistin düğümünü oluşturuyor
* 1-B
* 2.Ödev
* 28/07/2023
* Furkan Geren furkan.geren@ogr.sakarya.edu.tr && Azmi Çağrı Karakaya azmi.karakaya@ogr.sakarya.edu.tr
*/
#ifndef NODE_HPP
#define NODE_HPP

using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data);
};




#endif
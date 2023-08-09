/**
* Tree.cpp
* Stackten verileri alıp Tree'ye ekliyor
* 1-B
* 2.Ödev
* 29/07/2023
* Furkan Geren furkan.geren@ogr.sakarya.edu.tr && Azmi Çağrı Karakaya azmi.karakaya@ogr.sakarya.edu.tr
*/

#include "Tree.hpp"
#include <iomanip>
#include <iostream>
#include <cmath>
#include <queue>

using namespace std;

Tree::Tree()
{
    root = nullptr;
}

TreeNode *Tree::insertRecursive(TreeNode *current, int value)
{
    if (current == nullptr)
    {
        return new TreeNode(value);
    }

    if (value < current->data)
    {
        current->left = insertRecursive(current->left, value);
    }
    else if (value > current->data)
    {
        current->right = insertRecursive(current->right, value);
    }

    return current;
}

void Tree::insert(int value)
{
    root = insertRecursive(root, value);
}

bool Tree::searchRecursive(TreeNode *current, int value)
{
    if (current == nullptr)
    {
        return false;
    }

    if (current->data == value)
    {
        return true;
    }
    else if (value < current->data)
    {
        return searchRecursive(current->left, value);
    }
    else
    {
        return searchRecursive(current->right, value);
    }
}

bool Tree::search(int value)
{
    return searchRecursive(root, value);
}

int Tree::yukseklik(TreeNode *tempNode)
{
    if (tempNode)
    {
        tempNode->yukseklik = 1 + max(yukseklik(tempNode->left),
                                      yukseklik(tempNode->right));
        return tempNode->yukseklik;
    }
    return -1;
}
int Tree::yukseklik()
{
    return yukseklik(root);
}
void Tree::postorder()
{

    postOrder(root);
}
void Tree::postOrder(TreeNode *index)
{
    if (index)
    {
        // cout<<" girdi ";

        postOrder(index->left);
        postOrder(index->right);
        cout << (char)index->data << " ";
    }
}

int Tree::sumRecursive(TreeNode *current)
{
    if (current == nullptr)
    {
        return 0;
    }

    int leftSum = sumRecursive(current->left);
    int rightSum = sumRecursive(current->right);

    return current->data + leftSum + rightSum;
}

int Tree::sum()
{
    return sumRecursive(root);
}

void Tree::silme(TreeNode *node)
{
    if (node == nullptr)
    {
        return;
    }

    silme(node->left);
    silme(node->right);

    delete node;
}



Tree::~Tree()
{
    silme(root);
}
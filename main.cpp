#include <iostream>
#include "BinarySearchTree.h"


/**
*   @param BinarySearchTree, minimum integer
*/
void printElements(BinarySearchTree<int> &ptr, int minInt)
{
    /**
    *   @brief calls the class method of BinarySearchTree class
    *          The implementation of binary search tree was written by Weiss
    *          https://users.cs.fiu.edu/~weiss/dsaa_c++4/code/BinarySearchTree.h
    *          I added the methods setTarget() and printElements() to specifically
    *          meet the requirements of this assignment (lines 159 - 181)
    *
    */
    ptr.setTarget(minInt);
}



int main( )
{

    int sizeInt, minInt;
    BinarySearchTree<int> tree;

    std::cout << "Binary Search Tree Program" << std::endl;
    std::cout << "How many integers to input: ";
    std::cin >> sizeInt;
    std::cout << "Enter unique integers: " << std::endl;

    int x;
    while(sizeInt>0)
    {
        std::cin >> x;

        // insert integer data into the tree as node
        tree.insert(x);

        sizeInt--;
    }

    std::cout << "\nData sorted: \n";

    // print all nodes of the tree
    tree.printTree();


    std::cout << "\n\nEnter a minimum integer: ";
    std::cin >> minInt;

    // pass the tree and the minimum integer
    printElements(tree, minInt);

    return 0;
}


#include <iostream>
#include <string>
#include <cctype>
#include "BinarySearchTree.h"
#include "Menu.h"


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

    Menu menu("BST PRINT ELEMENTS", "Don Castillo");
    int sizeInt, minInt;
    BinarySearchTree<int> tree;
    bool loop = true;
    char commandKey;
    std::string stringInput;

    menu.displayTitle();
    menu.displayInstructions();

    do{
        menu.displayCommands();
        std::cout << "\nHow many integers to input: ";
        std::cin >> stringInput;

        commandKey = menu.getCommandFlag(stringInput);

        if (!isdigit(commandKey))
        {
             if(commandKey == 'h')
                menu.displayInstructions();
             else
                loop = false;
        }
        else
        {
            sizeInt = std::stoi(stringInput);

            int x;
            while(sizeInt>0)
            {
                std::cout << "Enter unique integer: ";
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
        }
    }while(loop);

    return 0;
}


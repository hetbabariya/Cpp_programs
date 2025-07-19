/*
    12.Create a class called BinarySearchTree with member functions to insert and search for elements in the tree. Implement the tree using
     dynamic memory allocation. Instantiate a BinarySearchTree object, insert elements, and search for a specific element.
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

#define clrscr(); system("cls")


class TreeNode{

    public :
        int data;
        TreeNode *left;
        TreeNode *right;

    TreeNode(int val)
    {
        this->data = val;
        left = NULL;
        right = NULL ;
    }
};


class BinarysearchTree{

    private :

    TreeNode *root;

    // insert
    TreeNode *insertRecursivly(TreeNode *node , int value)
    {
        if(node == nullptr)
        {
            return new TreeNode(value);
        }

        if(value < node->data)
        {
            node->left = insertRecursivly(node->left , value);
        }
        else if(value > node->data)
        {
            node->right = insertRecursivly(node->right , value);
        }

        return node;
    }

    // search
    bool searchRecursivly(TreeNode *node , int value)
    {
        if(node == nullptr)
        {
            return false;
        }

        if(node->data == value)
        {
            return true;
        }
        else if(value < node->data)
        {
            return searchRecursivly(node->left , value);
        }
        else
        {
            return searchRecursivly(node->right , value);
        }
    }


    public :

        BinarysearchTree()
        {
            root = nullptr;
        }    

        // insert
        void insert()
        {
            int value;
            cout << "Enter value : ";
            cin >> value;

            root = insertRecursivly(root , value);

            cout << "\n------------------------" << endl;
            cout << "insert successfuly..." << endl;
            cout << "------------------------\n" << endl;
        }

        // search
        bool search()
        {
            int value;
            cout << "Enter value : ";
            cin >> value;

            return searchRecursivly(root , value);
        }

};


int main()
{

    BinarysearchTree b1;
    int n;

    while(1)
    {
        cout << "\n1. Insert" << endl;
        cout << "2. search" << endl;
        cout << "3. Exit" << endl;
        cout << "\nEnter number : ";
        cin >> n;

        if(n == 3)
        {
            break;
        }

        switch(n)
        {
            case 1:
                clrscr();
                b1.insert();
                break;

            case 2:
                clrscr();
                if(b1.search())
                {
                    cout << "\n-------------------------------------------" << endl;
                    cout << "is found in the binary search tree.." << endl;
                    cout << "-------------------------------------------\n" << endl;
                }
                else
                {
                    cout << "\n-------------------------------------------" << endl;
                    cout << "is Not found in the binary search tree.." << endl;
                    cout << "-------------------------------------------\n" << endl;
                }
                break;

            default :
                cout << "invalid...";
        }
    }


    

    return 0;
}
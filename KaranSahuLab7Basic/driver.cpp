// Author:  Karan Sahu
// Assignment Number: Lab 7
// File Name: driver.cpp
// Course/Section: data struct
// Due Date:  11/13/18
// Instructor: Bernard Ku
//This program creates and displays a binary search tree and can do functions such as search, remove, and add, it shows number of
// leaves, number of nodes, height of tree.

#include <iostream>
using namespace std;

#include "BST.h"


int main()
{
	bool removecheck, addcheck;
	int entrycheck, leafcount;
	int Treeheight;
	int number;
	unsigned int fullcount;
	int arr[6] = {60, 70, 20, 50, 10, 30};
    // Testing Constructor and empty()
    BST<int> intBST;            // test the class constructor
    cout << "Constructing empty BST\n";
    cout << "BST " << (intBST.isEmpty() ? "is" : "is not") << " empty\n";


    
    
    cout << "\nBST " << (intBST.isEmpty() ? "is" : "is not") << " empty\n";
    cout << "Inorder Traversal of BST: \n";
    intBST.inorder(cout);
    
    cout << "\npreorder Traversal of BST: \n";
    intBST.preorder(cout);
    
    cout << "\npostorder Traversal of BST: \n";
    intBST.postorder(cout);
    cout << endl;
    
    Treeheight = intBST.maxDepthC();
    cout << "The height of the tree is: " << Treeheight << endl;
    
    fullcount = intBST.getfullCountC();
    cout << "The total number of nodes is: " << fullcount << endl;
    
    leafcount = intBST.getleafCount();
    cout << "The total number of leaves is: " << leafcount << endl;
    
    
    cout << endl;
    


    
    cout << "\nWould you like already built 5 level full tree or would you like to input your own numbers for the binary tree?"
    << endl << "if yes type 1" << endl << "if no type 0" << endl;
    cin >> entrycheck;
    if(entrycheck ==0)
    {
    	for (;;)
	    {
	    	// Testing insert
    		cout << "\nNow insert a bunch of integers into the BST."
    		"\nTry items not in the BST and some that are in it:\n";
	        cout << "\nItem to insert (-999 to stop): ";
	        cin >> number;
	        if (number == -999) break;
	        addcheck = intBST.add(number);
	        if (addcheck == true){ cout << endl << "Item is already in tree so add was unsuccesfull" << endl << endl;}
	        Treeheight = intBST.maxDepthC();
		    cout << "The height of the tree is: " << Treeheight << endl;
		    
		    fullcount = intBST.getfullCountC();
		    cout << "The total number of nodes is: " << fullcount << endl;
		    
		    leafcount = intBST.getleafCount();
		    cout << "The total number of leaves is: " << leafcount << endl;
	
	
	    }
	}
	else
	{
		for (int i = 0;i < 6;i++)
	    {

	        intBST.add(arr[i]);
	
	
	    }
	}
    cout << "\n";
    intBST.graph(cout);
    
    cout << "\nBST " << (intBST.isEmpty() ? "is" : "is not") << " empty\n";
    cout << "Inorder Traversal of BST: \n";
    intBST.inorder(cout);
    
    cout << "\npreorder Traversal of BST: \n";
    intBST.preorder(cout);
    
    cout << "\npostorder Traversal of BST: \n";
    intBST.postorder(cout);
    cout << endl;
    
    Treeheight = intBST.maxDepthC();
    cout << "The height of the tree is: " << Treeheight << endl;
    
    fullcount = intBST.getfullCountC();
    cout << "The total number of nodes is: " << fullcount << endl;
    
    leafcount = intBST.getleafCount();
    cout << "The total number of leaves is: " << leafcount << endl;
    
    
    cout << endl;
    
    // Testing search()
    cout << "\n\nNow testing the contains() operation."
    "\nTry both items in the BST and some not in it:\n";
    for (;;)
    {
        cout << "Item to find (-999 to stop): ";
        cin >> number;
        if (number == -999) break;
        cout << (intBST.contains(number) ? "Found" : "Not found") << endl;
    }
    
    // Testing remove()
    cout << "\nNow testing the remove() operation."
    "\nTry both items in the BST and some not in it:\n";
    for (;;)
    {
        cout << "\nItem to remove (-999 to stop): ";
        cin >> number;
        if (number == -999) break;
        removecheck = intBST.remove(number);
        if(removecheck == false){cout << endl << "Item was not found so removal was unsuccesfull";	}
        cout << endl << endl;
        intBST.remove(number);
        intBST.graph(cout);


    }
    cout << "\nInorder Traversal of BST: \n";
    intBST.inorder(cout);
    cout << endl;
    
    cout << "\npreorder Traversal of BST: \n";
    intBST.preorder(cout);
    cout << endl;
    
    cout << "\npostorder Traversal of BST: \n";
    intBST.postorder(cout);
    cout << endl;
    
    Treeheight = intBST.maxDepthC();
    cout << "The height of the tree is: " << Treeheight << endl;
    
    fullcount = intBST.getfullCountC();
    cout << "The total number of nodes is: " << fullcount << endl;
    
    leafcount = intBST.getleafCount();
    cout << "The total number of leaves is: " << leafcount << endl;
    

    
}

/*

Constructing empty BST
BST is empty

BST is empty
Inorder Traversal of BST:

preorder Traversal of BST:

postorder Traversal of BST:

The height of the tree is: 0
The total number of nodes is: 0
The total number of leaves is: 0


Would you like already built 5 level full tree or would you like to input your own numbers for the binary tree?
if yes type 1
if no type 0
0

Now insert a bunch of integers into the BST.
Try items not in the BST and some that are in it:

Item to insert (-999 to stop): 60
The height of the tree is: 1
The total number of nodes is: 1
The total number of leaves is: 1

Now insert a bunch of integers into the BST.
Try items not in the BST and some that are in it:

Item to insert (-999 to stop): 70
The height of the tree is: 2
The total number of nodes is: 2
The total number of leaves is: 1

Now insert a bunch of integers into the BST.
Try items not in the BST and some that are in it:

Item to insert (-999 to stop): 20
The height of the tree is: 2
The total number of nodes is: 3
The total number of leaves is: 2

Now insert a bunch of integers into the BST.
Try items not in the BST and some that are in it:

Item to insert (-999 to stop): 50
The height of the tree is: 3
The total number of nodes is: 4
The total number of leaves is: 2

Now insert a bunch of integers into the BST.
Try items not in the BST and some that are in it:

Item to insert (-999 to stop): 10
The height of the tree is: 3
The total number of nodes is: 5
The total number of leaves is: 3

Now insert a bunch of integers into the BST.
Try items not in the BST and some that are in it:

Item to insert (-999 to stop): 30
The height of the tree is: 4
The total number of nodes is: 6
The total number of leaves is: 3

Now insert a bunch of integers into the BST.
Try items not in the BST and some that are in it:

Item to insert (-999 to stop): 30

Item is already in tree so add was unsuccesfull

The height of the tree is: 4
The total number of nodes is: 6
The total number of leaves is: 3

Now insert a bunch of integers into the BST.
Try items not in the BST and some that are in it:

Item to insert (-999 to stop): -999

        70
 60
                50
                        30
        20
                10

BST is not empty
Inorder Traversal of BST:
10  20  30  50  60  70
preorder Traversal of BST:
60  20  10  50  30  70
postorder Traversal of BST:
10  30  50  20  70  60
The height of the tree is: 4
The total number of nodes is: 6
The total number of leaves is: 3



Now testing the contains() operation.
Try both items in the BST and some not in it:
Item to find (-999 to stop): 30
Found
Item to find (-999 to stop): 45
Not found
Item to find (-999 to stop): -999

Now testing the remove() operation.
Try both items in the BST and some not in it:

Item to remove (-999 to stop): 40

Item was not found so removal was unsuccesfull

        70
 60
                50
                        30
        20
                10

Item to remove (-999 to stop): 20


        70
 60
                50
        30
                10

Item to remove (-999 to stop): 60


 70
                50
        30
                10

Item to remove (-999 to stop): 45

Item was not found so removal was unsuccesfull

 70
                50
        30
                10

Item to remove (-999 to stop): -999

Inorder Traversal of BST:
10  30  50  70

preorder Traversal of BST:
70  30  10  50

postorder Traversal of BST:
10  50  30  70
The height of the tree is: 3
The total number of nodes is: 4
The total number of leaves is: 2




*/

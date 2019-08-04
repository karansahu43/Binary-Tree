
/* BST.h contains the declaration of class template BST.
 Basic operations:
 Constructor: Constructs an empty BST
 isEmpty:       Checks if a BST is empty
 contains:      Search a BST for an item
 add:         Adds a value into a BST
 remove:      Removes a value from a BST
 inorder:     Inorder traversal of a BST -- output the item values
 graph:       Output a grapical representation of a BST
 Private utility helper operations:
 search2:     Used by delete
 inorderAux:  Used by inorder
 graphAux:    Used by graph
 Other operations described in the exercises:
 destructor
 copy constructor
 assignment operator
 preorder, postorder, and level-by-level traversals
 level finder
 Note: Execution terminates if memory isn't available for a new BST node.
 ---------------------------------------------------------------------------*/

#include <iostream>
#include <iomanip>
#include <string>
#include <stack>
#include <vector>
#include <stack>
#include <list>
#include <queue>
#include <map>
#include <algorithm>
#include "BinaryNode.h"


#ifndef BINARY_SEARCH_TREE
#define BINARY_SEARCH_TREE

template<class ItemType>
class BST
{
public:
    /***** Function Members *****/
    BST();
    /*------------------------------------------------------------------------
     Construct a BST object.
     
     Precondition:  None.
     Postcondition: An empty BST has been constructed.
     -----------------------------------------------------------------------*/
    
    ~BST();
    
    bool isEmpty() const;
    /*------------------------------------------------------------------------
     Check if BST is empty.
     
     Precondition:  None.
     Postcondition: Returns true if BST is empty and false otherwise.
     -----------------------------------------------------------------------*/
    
    bool contains(const ItemType & item) const;
    /*------------------------------------------------------------------------
     Search the BST for item.
     
     Precondition:  None.
     Postcondition: Returns true if item found, and false otherwise.
     -----------------------------------------------------------------------*/
    
    bool add(const ItemType & item);
    /*------------------------------------------------------------------------
     Add item into BST.
     
     Precondition:  None.
     Postcondition: BST has been modified with item inserted at proper
     position to maintain BST property.
     Returns true if item was successfull inserted.
     Returns false if item was already in the binary search tree
     ------------------------------------------------------------------------*/
    
    bool remove(const ItemType & item);
    /*------------------------------------------------------------------------
     Remove item from BST.
     
     Precondition:  None.
     Postcondition: BST has been modified with item removed (if present);
     BST property is maintained.
     Returns true if item was successfully removed.
     Otherwise, returns false.
     Note: remove uses auxiliary function search2() to locate the node
     containing item and its parent.
     ------------------------------------------------------------------------*/
    
    void inorder(ostream & out) const;
        /*------------------------------------------------------------------------
     Inorder traversal of BST.
     
     Precondition:  ostream out is open.
     Postcondition: BST has been inorder traversed and values in nodes
     have been output to out.
     Note: inorder uses private auxiliary function inorderAux().
     ------------------------------------------------------------------------*/
    void preorder(ostream & out) const;
        /*------------------------------------------------------------------------
     preorder traversal of BST.
     
     Precondition:  ostream out is open.
     Postcondition: BST has been preorder traversed and values in nodes
     have been output to out.
     Note: postorder uses private auxiliary function preorderAux().
     ------------------------------------------------------------------------*/
    void postorder(ostream & out) const;
        /*------------------------------------------------------------------------
     postorder traversal of BST.
     
     Precondition:  ostream out is open.
     Postcondition: BST has been postorder traversed and values in nodes
     have been output to out.
     Note: postorder uses private auxiliary function postorderAux().
     ------------------------------------------------------------------------*/
    

    int maxDepthC() const;																
        /*------------------------------------------------------------------------
     finds height of tree
     
     Precondition:  none
     Postcondition:  returns height
     Note: maxDepthC uses private auxiliary function maxDepth()
     ------------------------------------------------------------------------*/
	
	int getfullCountC() const;							
	        /*------------------------------------------------------------------------
     counts all nodes
     
     Precondition:  none
     Postcondition:  returns node count
     Note: getfullCountC uses private auxiliary function getfullCount()
     ------------------------------------------------------------------------*/
	
	int getleafCount() const;	
	
	/*------------------------------------------------------------------------
     counts all leaves
     
     Precondition:  none
     Postcondition:  returns leaf count
     Note: getleafCountC uses private auxiliary function getleafCount()
     ------------------------------------------------------------------------*/								


    
    void graph(ostream & out) const;
    /*------------------------------------------------------------------------
     Graphic output of BST.
     
     Precondition:  ostream out is open.
     Postcondition: Graphical representation of BST has been output to out.
     Note: graph() uses private auxiliary function graphAux().
     ------------------------------------------------------------------------*/
     
    


    
private:
    
    void destroyTree(BinaryNode<ItemType> *subTreePtr);
    
    
    bool search(const ItemType & item) const;
    /*------------------------------------------------------------------------
     Search the BST for item.
     
     Precondition:  None.
     Postcondition: Returns true if item found, and false otherwise.
     -----------------------------------------------------------------------*/
    
    /***** Private Function Members *****/
    void search2(const ItemType & item, bool & found,
                 BinaryNode<ItemType>* & locptr, BinaryNode<ItemType>* & parent) const;
    /*------------------------------------------------------------------------
     Locate a node containing item and its parent.
     
     Precondition:  None.
     Postcondition: locptr points to node containing item or is null if
     not found, and parent points to its parent.#include <iostream>
     ------------------------------------------------------------------------*/
    
    void inorderAux(ostream & out,
                    BinaryNode<ItemType>* subtreePtr) const;
        /*------------------------------------------------------------------------
     Inorder traversal auxiliary function.
     
     Precondition:  ostream out is open; subtreePtr points to a subtree
     of this BST.
     Postcondition: Subtree with root pointed to by subtreePtr has been
     output to out.
     ------------------------------------------------------------------------*/

    void preorderAux(ostream & out,
                    BinaryNode<ItemType>* subtreePtr) const;
        /*------------------------------------------------------------------------
     preorder traversal auxiliary function.
     
     Precondition:  ostream out is open; subtreePtr points to a subtree
     of this BST.
     Postcondition: Subtree with root pointed to by subtreePtr has been
     output to out.
     ------------------------------------------------------------------------*/
    void postorderAux(ostream & out,
                    BinaryNode<ItemType>* subtreePtr) const;
        /*------------------------------------------------------------------------
     postorder traversal auxiliary function.
     
     Postcondition:  ostream out is open; subtreePtr points to a subtree
     of this BST.
     Postcondition: Subtree with root pointed to by subtreePtr has been
     output to out.
     ------------------------------------------------------------------------*/

    
    void graphAux(ostream & out, int indent,
                  BinaryNode<ItemType>* subtreeRoot) const;
    /*------------------------------------------------------------------------
     Graph auxiliary function.
     
     Precondition:  ostream out is open; subtreePtr points to a subtree
     of this BST.
     Postcondition: Graphical representation of subtree with root pointed
     to by subtreePtr has been output to out, indented indent spaces.
     ------------------------------------------------------------------------*/
     
     int maxDepth(BinaryNode<ItemType>* subtreeRoot) const;	
	         /*------------------------------------------------------------------------
     finds height of tree
     
     Precondition:  subtreePtr points to a subtree
     Postcondition:  returns height
     ------------------------------------------------------------------------*/	
	 
	int getfullCount(BinaryNode<ItemType>* subtreeRoot) const;
	int binarytree_count_recursive(BinaryNode<ItemType>* subtreeRoot) const;
	/*------------------------------------------------------------------------
     counts all nodes
     
     Precondition:    subtreePtr points to a subtree
     Postcondition:  returns node count
     ------------------------------------------------------------------------*/
	
	
	int binarytree_count_leaves(BinaryNode<ItemType>* subtreeRoot) const;
	int binarytree_count_leaves_recursive(BinaryNode<ItemType>* subtreeRoot) const;
		/*------------------------------------------------------------------------
     counts all leaves
     
     Precondition:   subtreePtr points to a subtree
     Postcondition:  returns leaf count

     ------------------------------------------------------------------------*/	



    

    
    /***** Data Members *****/
    BinaryNode<ItemType>* myRoot;
    
}; // end of class template declaration


#include "BST.cpp"
#endif

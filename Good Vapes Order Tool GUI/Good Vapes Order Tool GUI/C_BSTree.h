#pragma once
#include <iostream>
#include "C_Node.h"
#include "C_Record.h"
#include <fstream>
#include <string>

// Binary Search Tree class
class C_BSTree {
private:
	C_Node * root;
	//void addC_Node(int key, C_Node* leaf);
	void addNode(C_Record key, C_Node* leaf);
	C_Node* deleteC_Node(C_Node* Node, C_Record key);
	void freeC_Node(C_Node* leaf);

public:
	C_BSTree();
	~C_BSTree();
	C_Node* Root() { return root; }
	void setRoot(C_Node * _root) { root = _root; }
	//void addC_Node(int key);
	void addNode(C_Record key);
	C_Node* findNode(C_Record key, C_Node* parent);
	void printPreorder(C_Node* Node);
	void printInorder(C_Node* Node);
	void printPostorder(C_Node* Node);

	void compileList(C_BSTree& compareTree, C_BSTree& buildTree, C_Node* Node);

	//void compileList(C_BSTree& compareTree, C_BSTree& buildTree,)

	void compileCheckList(C_Node* Node, fstream& out);
	void compileCheckList(C_Node* Node, System::IO::StreamWriter^ out);

	void fillDuplicates(C_BSTree& tree, C_Node* Node);


	//NJA adding to test if the tree is empty or not
	bool empty();
	//NJA Adding
	ostream& saveInorder(C_Node*, ostream&);

	void deleteC_Node(C_Record key);

	C_Node* min(C_Node* Node);
	C_Node* max(C_Node* Node);
	C_Node* successor(C_Record key, C_Node* parent);
	C_Node* predecessor(C_Record key, C_Node* parent);

	ostream& saveInorderCSV(C_Node*, ostream&);
	
	void saveInorderCSV(C_Node*, System::IO::StreamWriter^);
	void saveInorderCSV(C_Node*, C_BSTree tree, System::IO::StreamWriter^);

};


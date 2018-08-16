#pragma once

#include "C_Record.h"
#include "C_Node.h"
class C_Node {
private:
	// Removing these as i am moving to use RECORD
	//int key;
	//Datatype data;
	C_Record key;
	C_Node* left;
	C_Node* right;
	C_Node* parent;
public:
	//C_Node() { key = -1; left = 0; right = 0; parent = 0; };
	C_Node() { left = 0; right = 0; parent = 0; };
	//~C_Node() { cout << "deleting C_Node" << endl; delete this; };
	//void setKey(int aKey) { key = aKey; };
	void setKey(C_Record aKey) { key = aKey; };
	void setLeft(C_Node* aLeft) { left = aLeft; };
	void setRight(C_Node* aRight) { right = aRight; };
	void setParent(C_Node* aParent) { parent = aParent; };
	C_Record Key() { return key; };
	C_Node* Left() { return left; };
	C_Node* Right() { return right; };
	C_Node* Parent() { return parent; };
};
#include "stdafx.h"
#include "C_BSTree.h"
// Constructor
C_BSTree::C_BSTree() {
	root = 0;
}

// Destructor
C_BSTree::~C_BSTree() {
	if (root != 0)
		freeC_Node(root);
}

// Free the C_Node
void C_BSTree::freeC_Node(C_Node* leaf)
{
	if (this->Root() == leaf)
	{

	}
	else if (leaf != 0)

	{
		freeC_Node(leaf->Left());
		freeC_Node(leaf->Right());
		delete leaf;
	}

}

// Add a C_Node
void C_BSTree::addNode(C_Record key)
{
	// No elements. Add the root
	if (root == 0) {
		C_Node* n = new C_Node();
		n->setKey(key);
		root = n;
	}
	else {
		addNode(key, root);
	}
}

// Add a C_Node (private)
void C_BSTree::addNode(C_Record key, C_Node* leaf) {
	C_Node* n = 0;
	//C_Node* n1 = 0;
	if (key <= leaf->Key())
	{
		if (leaf->Left() != 0)
			addNode(key, leaf->Left());
		else {

			// CHANGING THIS AS THE NEW CALL CAUSES THE PROGRAM TO HAVE A STACK OVERFLOW AT 1293 C_Records.
			// Using a pointer to a C_Node in the way I have here has gotten rid of the stupid memory issues.
			// The process (that was failing) was running at about 28MB before the changes @ C_Record 
			// number 1293.
			// Currently in debug, I am showing 2MB at 9700 C_Records loaded.
			n = new C_Node();
			n->setKey(key);
			//n.setKey(key);
			//n1->setKey(key);
			n->setParent(leaf);
			//n.setParent(leaf);
			//n1->setParent(leaf);
			leaf->setLeft(n);
		}
	}
	else
	{
		if (leaf->Right() != 0)
			addNode(key, leaf->Right());
		else {
			n = new C_Node();
			n->setKey(key);
			//n.setKey(key);
			//n1->setKey(key);
			n->setParent(leaf);
			//n.setParent(leaf);
			//n1->setParent(leaf);
			//n1 = &n;
			leaf->setRight(n);
		}
	}
}

// Find a C_Node
C_Node* C_BSTree::findNode(C_Record key, C_Node* Node)
{
	if (key == Node->Key())
	{
		return Node;
	}
	if (key < Node->Key())
	{
		if (Node->Left() != 0)
			return findNode(key, Node->Left());
		else
			return 0;
	}
	if (key > Node->Key())
	{
		if (Node->Right() != 0)
			return findNode(key, Node->Right());
		else
			return 0;
	}
	return 0;
}

// Print the C_BSTree
void C_BSTree::printPreorder(C_Node* Node)
{
	C_Record holdC_Record;
	holdC_Record = Node->Key();
	cout << holdC_Record;
	//cout << C_Node->Key();
	if (Node->Left() != 0)
	{
		printPreorder(Node->Left());
	}
	if (Node->Right() != 0)
	{
		printPreorder(Node->Right());
	}
}
void C_BSTree::printInorder(C_Node* Node)
{
	if (Node->Left() != 0)
	{
		printInorder(Node->Left());
	}
	C_Record holdC_Record;
	holdC_Record = Node->Key();
	cout << holdC_Record;
	//cout << C_Node->Key();
	if (Node->Right() != 0)
	{
		printInorder(Node->Right());
	}
}

void C_BSTree::printPostorder(C_Node* Node)
{
	if (Node->Left() != 0)
	{
		printPostorder(Node->Left());
	}
	if (Node->Right() != 0)
	{
		printPostorder(Node->Right());
	}
	C_Record holdC_Record;
	holdC_Record = Node->Key();
	cout << holdC_Record;
	//cout << C_Node->Key();
}


void C_BSTree::compileList(C_BSTree& compareTree, C_BSTree& buildTree, C_Node* Node)
{
	if (Node->Left() != 0)
	{
		compileList(compareTree, buildTree, Node->Left());
	}
	C_Record holdC_Record;
	C_Node * holdNode;
	int qtyToOrder = 0;
	holdC_Record = Node->Key();


	holdNode = findNode(holdC_Record, compareTree.Root());
	// We found a record with what we want!
	if(holdNode != 0)
	{

		qtyToOrder = Node->Key().getQuantity() - holdNode->Key().getQuantity();
		
		if (qtyToOrder > 0)
		{
			holdC_Record.setQuantity(qtyToOrder);
		}
		holdC_Record.setCost(Node->Key().getCost());
		buildTree.addNode(holdC_Record);
	}

	//if(holdC_Record.getSKU() == )
	//cout << holdC_Record;
	if (Node->Right() != 0)
	{
		compileList(compareTree, buildTree, Node->Right());
	}
}

void C_BSTree::compileCheckList(C_Node* Node, fstream& out)
{
	if (Node->Left() != 0)
	{
		compileCheckList(Node->Left(), out);
	}
	C_Record holdC_Record;
	holdC_Record = Node->Key();
	string holdString = "";

	if (Node->Key().getQuantity() <= 2)
	{
		holdString = holdC_Record.getSKU() + "," + holdC_Record.getItemDescription() + "," + to_string(holdC_Record.getQuantity());
		out << holdString << endl;
		
	}
	
	if (Node->Right() != 0)
	{
		compileCheckList(Node->Right(), out);
	}
}

void C_BSTree::compileCheckList(C_Node* Node, System::IO::StreamWriter^ out)
{
	if (Node->Left() != 0)
	{
		compileCheckList(Node->Left(), out);
	}
	C_Record holdC_Record;
	holdC_Record = Node->Key();
	string holdString = "";
	System::String^ writeString;
	if (Node->Key().getQuantity() <= 2)
	{
		holdString = holdC_Record.getSKU() + "," + holdC_Record.getItemDescription() + "," + to_string(holdC_Record.getQuantity());
		writeString = gcnew System::String(holdString.c_str());
		out->WriteLine(writeString);
	}

	if (Node->Right() != 0)
	{
		compileCheckList(Node->Right(), out);
	}
}

// Find the C_Node with min key
// Traverse the left sub-C_BSTree recursively
// till left sub-C_BSTree is empty to get min
C_Node* C_BSTree::min(C_Node* Node)
{
	C_Node* tempC_Node = Node;
	if (Node == 0)
		tempC_Node = 0;
	else if (Node->Left())
	{
		tempC_Node = min(Node->Left());
	}
	else
		tempC_Node = Node;

	return tempC_Node;
};

// Find the C_Node with max key
// Traverse the right sub-C_BSTree recursively
// till right sub-C_BSTree is empty to get max
C_Node* C_BSTree::max(C_Node* Node)
{
	C_Node * tempC_Node = Node;
	if (Node == 0)
		tempC_Node = 0;
	else if (Node->Right())
		tempC_Node = max(Node->Right());
	else
		tempC_Node = Node;

	return tempC_Node;
};

// Find successor to a C_Node
// Find the C_Node, get the C_Node with max value
// for the right sub-C_BSTree to get the successor
C_Node* C_BSTree::successor(C_Record key, C_Node *Node)
{


	C_Node *successor = 0;
	C_Node *current = root;
	if (root == 0)
		return NULL;

	while (current->Key() != key) {
		/* If C_Node value is greater than the C_Node which are looking for, then go to left sub tree
		Also when we move left, update the successor pointer to keep track of lst left turn */

		if (current->Key() > key) {
			successor = current;
			current = current->Left();
		}
		/* Else take right turn and no need to update successor pointer */
		else
			current = current->Right();
	}
	/*Once we reached at the C_Node for which inorder successor is to be found, check if it has right sub tree, if yes then find the minimum in that right sub tree and return that C_Node

	Else last left turn taken C_Node is already stored in successor pointer and will be returned*/
	if (current && current->Right()) {
		successor = min(current->Right());
	}

	return successor;
}

// Find predecessor to a C_Node
// Find the C_Node, get the C_Node with max value
// for the left sub-C_BSTree to get the predecessor
C_Node* C_BSTree::predecessor(C_Record key, C_Node *Node)
{

	C_Node* current = findNode(key, Node);

	if (current == 0)
	{
		return 0;
	}

	if (current->Left() != 0)
	{
		return max(current->Left());
	}
	else

	{
		C_Node *tempParent = current->Parent();
		while (tempParent != 0) {
			if (current == tempParent->Right()) {
				break;
			}
			current = tempParent;
			tempParent = current->Parent();
		}
		return tempParent;
	}
}


void C_BSTree::deleteC_Node(C_Record key)
{
	if (deleteC_Node(Root(), key) == 0)
	{
		setRoot(0);
		return;
	}
}

//deleteC_Node (Private)
C_Node* C_BSTree::deleteC_Node(C_Node* root, C_Record key)
{

	/* Given a binary search tree and a key, this function deletes the key
	and returns the new root */


	if (root == 0) return root;
	else if (key < root->Key())
		root->setLeft(deleteC_Node(root->Left(), key));
	else if (key > root->Key())
		root->setRight(deleteC_Node(root->Right(), key));
	else {
		// Case 1: No Child
		if (root->Left() == 0 && root->Right() == 0) {
			delete root;
			root = 0;
			// Case 2: one child
		}
		else if (root->Left() == 0) {
			C_Node *temp = root;
			root = root->Right();
			delete temp;
		}
		else if (root->Right() == 0) {
			C_Node *temp = root;
			root = root->Left();
			delete temp;
		}
		else {
			C_Node *temp = min(root->Right());
			root->setKey(temp->Key());
			root->setRight(deleteC_Node(root->Right(), temp->Key()));
		}
	}
	return root;

}

bool C_BSTree::empty()
{
	if (root == 0)
	{
		//cout << "Tree is empty" << endl;
		return true;
	}
	else
		return false;
}

ostream& C_BSTree::saveInorder(C_Node* Node, ostream& out)
{

	if (Node->Left() != 0)
	{
		saveInorder(Node->Left(), out);
	}

	C_Record holdRecord;


	// Having to add this as the CSEGrid doesn't seem to appreciate the pass by function call.
	holdRecord = Node->Key();

	out << holdRecord;

	//out << C_Node->Key();

	if (Node->Right() != 0)
	{
		saveInorder(Node->Right(), out);
	}


	return out;

};


ostream& C_BSTree::saveInorderCSV(C_Node* Node, ostream& out)
{

	if (Node->Left() != 0)
	{
		saveInorderCSV(Node->Left(), out);
	}

	C_Record holdRecord;

	string holdString = "";

	// Having to add this as the CSEGrid doesn't seem to appreciate the pass by function call.
	holdRecord = Node->Key();

	holdString = holdRecord.getSKU() + "," + holdRecord.getItemDescription() + "," + to_string(holdRecord.getQuantity()) + "," + to_string(holdRecord.getCost()) + "," + to_string(holdRecord.getCost() * holdRecord.getQuantity());

	//cout << holdString << endl;
	//system("PAUSE");

	out << holdString.c_str() << endl;

	//out << C_Node->Key();

	if (Node->Right() != 0)
	{
		saveInorderCSV(Node->Right(), out);
	}


	return out;

};

void C_BSTree::saveInorderCSV(C_Node* Node, System::IO::StreamWriter^ out)
{
	if (Node->Left() != 0)
	{
		saveInorderCSV(Node->Left(), out);
	}

	C_Record holdRecord;

	string holdString = "";

	// Having to add this as the CSEGrid doesn't seem to appreciate the pass by function call.
	holdRecord = Node->Key();

	//holdString = holdRecord.getSKU() + "," + holdRecord.getItemDescription() + "," + to_string(holdRecord.getQuantity());
	// replaced with the below line
	holdString = holdRecord.getSKU() + "," + holdRecord.getItemDescription() + "," + to_string(holdRecord.getQuantity()) + "," + to_string(holdRecord.getCost()) + "," + to_string(holdRecord.getCost() * static_cast<float>(holdRecord.getQuantity()));
	// try it manually
	System::String^ writeString = gcnew System::String(holdString.c_str());

	out->WriteLine(writeString);


	if (Node->Right() != 0)
	{
		saveInorderCSV(Node->Right(), out);
	}
}
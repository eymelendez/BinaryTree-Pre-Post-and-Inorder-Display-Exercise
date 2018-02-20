#include<iostream>
#include<string>
#include "BinaryTreeInterface.h"
#include "BinaryNodeTree.h"
#include "BinarySearchTree.h"

using namespace std;

//function to display an item
void display(int & anItem) {
	cout << "Item: " << anItem << endl;
}
//checks if function was successful
void check(bool success) {
	if (success) {
		cout << "Done." << endl;
	}
	else {
		cout << "Entry not in tree. " << endl;
	}
}

int main() {
	//BinarySearchTree<string>* tree = new BinarySearchTree<string>();
	BinaryTreeInterface<int>* tree = new BinarySearchTree<int>();
	BinarySearchTree<int>* tree2 = new BinarySearchTree<int>();

	//añadir al arbol 1 numeros en orden ascendente
	tree->add(3);
	tree->add(7);
	tree->add(15);
	tree->add(24);
	tree->add(29);
	tree->add(57);
	tree->add(100);
	//añadir al arbol 2 numeros desordenados.
	tree2->add(24);
	tree2->add(7);
	tree2->add(29);
	tree2->add(100);
	tree2->add(57);
	tree2->add(3);
	tree2->add(15);
	cout << "Los datos se anadieron al arbol #1 en orden ascendente.\n\nContenido del arbol #1: " << endl;
	tree->inorderTraverse(display);
	cout << "\n\nEl arbol #1 tiene una altura de: " << endl;
	cout << tree->getHeight() << endl;

	cout << "\nLos datos se anadieron al arbol #2 en orden descendente. Contenido del arbol #2 (inorder traverse): " << endl;
	tree2->inorderTraverse(display);
	cout << "\n\nEl arbol #2 tiene una altura de: " << endl;
	cout << tree2->getHeight() << endl;

	cout << "\n\nEl arbol dos en preorder Traverse:\n\n ";
	tree2->preorderTraverse(display);

	cout << "\n\nEl arbol dos en postorder Traverse:\n\n ";
	tree2->postorderTraverse(display);

	system("pause");
	return 0;


}
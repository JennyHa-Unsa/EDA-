// Cambiar main() en archivo main.cpp para usar el siguiente test
#include <iostream>
#include "RBTree.h"

using namespace std;
int main() {
	RBTree bst;
	bst.insert(8);
	bst.insert(18);
	bst.insert(5);
	bst.insert(15);
	bst.insert(17);
	bst.insert(25);
	bst.insert(40);
	bst.insert(80);
	cout << bst.search(17)->parent <<"\n";
	bst.deleteNode(25);
	bst.prettyPrint();
	return 0;
}

/* // La consola deberia mostrar el siguiente Output
R----17(BLACK)
     L----8(RED)
     |    L----5(BLACK)
     |    R----15(BLACK)
     R----40(RED)
          L----18(BLACK)
          R----80(BLACK) */
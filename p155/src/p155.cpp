//============================================================================
// Name        : p155.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "Box.h"

int main() {
	Box b(10,2);
	b.draw();
	cout << endl;
	b.setSize(7,4);
	b.setFill('^');
	b.draw();
	return 0;
}

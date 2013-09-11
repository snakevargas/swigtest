#include <iostream>

#include "subthingy.H"


using namespace std;


Subthingy::Subthingy(int init_val) {
	this->val = init_val;
}

void Subthingy::Say_hi() {
	cout<<"Hi! The value is: "<<val<<endl;
}




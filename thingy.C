#include <iostream>

#include "thingy.H"


using namespace std;


Thingy::Thingy(int init_val, int init_sub_val) {
	this->val = init_val;
	this->lol = new Subthingy(init_sub_val);
}

void Thingy::Say_hi() {
	cout<<"Hi! The value is: "<<val<<endl;
	cout<<"And the sub:"<<endl;
	lol->Say_hi();
}

Thingy::~Thingy() {
	cout<<"Destructicating!"<<endl;
	delete this->lol;
}



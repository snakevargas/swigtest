#include <iostream>

#include "thingy.H"


using namespace std;


Thingy::Thingy(int init_val = 0) {
	this->val = init_val;
}

void Thingy::say_hi() {
	cout<<"Hi! The value is: "<<val<<endl;
}




#ifndef __THINGY_H_INCLUDED__
#define __THINGY_H_INCLUDED__

#include "subthingy.H"

class Thingy {
	public:
		Thingy(int init_val = 42, int init_sub_val = 13);
		void Say_hi();
		~Thingy();

	private:
		int val;
		Subthingy *lol;
};


#endif


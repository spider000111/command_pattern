#pragma once
#include "ICommand.h"

class invoker
{
	ICommand* on;
	ICommand* off;
	ICommand* up;
	ICommand* down;
public:
	invoker(ICommand* a, ICommand* b, ICommand* c, ICommand* d) :on(a),off(b),up(c),down(d) {}

	

	void execute_all() {
		on->execute();
		off->execute();
		up->execute();
		down->execute();
	}
	void unexecute_all() {
		on->unexecute();
		off->unexecute();
		up->unexecute();
		down->unexecute();
	}


};


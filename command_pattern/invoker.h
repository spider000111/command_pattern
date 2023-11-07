#pragma once
#include "ICommand.h"
#include <iostream>

class invoker
{
	const std::shared_ptr<ICommand> on;
	const std::shared_ptr<ICommand> off;
	const std::shared_ptr<ICommand> up;
	const std::shared_ptr<ICommand> down;
public:
	invoker(std::shared_ptr<ICommand> a, std::shared_ptr<ICommand> b, std::shared_ptr<ICommand> c, std::shared_ptr<ICommand>d) :on(a),off(b),up(c),down(d) {}

	

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


#pragma once
#include "ICommand.h"
#include <iostream>

class invoker
{
	//invoker is a remove like tv remote which has 4 buttons
	const std::shared_ptr<ICommand> button1;
	const std::shared_ptr<ICommand> button2;
	const std::shared_ptr<ICommand> button3;
	const std::shared_ptr<ICommand> button4;
public:
	invoker(std::shared_ptr<ICommand> a, std::shared_ptr<ICommand> b, std::shared_ptr<ICommand> c, std::shared_ptr<ICommand> d) :
		button1(a), button2(b), button3(c), button4(d) {}

	

	void execute_all() {
		button1->execute();
		button2->execute();
		button3->execute();
		button4->execute();
	}
	void unexecute_all() {
		button1->unexecute();
		button2->unexecute();
		button3->unexecute();
		button4->unexecute();
	}

	void button1_on() {
		button1->execute();
	}

	void button1_off() {
		button1->unexecute();
	}

};


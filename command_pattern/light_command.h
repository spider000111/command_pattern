#pragma once
#include "ICommand.h"
#include <iostream>
#include <string>

class light_command : public ICommand
{
	std::string name;
public:
	light_command(std::string a) :name(a) {}
	void execute() {
		printf("execute light ");
		std::cout << name << std::endl;
		
	}
	void unexecute() {
		printf("unexecute loght ");
		std::cout << name << std::endl;
	}
};


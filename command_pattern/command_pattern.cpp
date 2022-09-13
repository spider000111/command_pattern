// command_pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//invoker is remote controller
//light command is the philips light

#include <iostream>
#include "invoker.h"
#include "ICommand.h"
#include "light_command.h"

int main()
{
    printf("hello world\n");
    light_command room1("room1");
    light_command room2("room2");
    light_command room3("room3");
    light_command room4("room4");

    invoker inv(&room1, &room2, &room3, &room4);
    inv.execute_all();
    inv.unexecute_all();


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

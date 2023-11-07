// command_pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//invoker is remote controller
//light command is the philips light

#include <iostream>
#include "invoker.h"
#include "ICommand.h"
#include "light_command.h"

int main()
{
    std::shared_ptr<light_command> room1_light1 = std::make_shared<light_command>("room1_light1 pass");
    std::shared_ptr<light_command> room1_light2 = std::make_shared<light_command>("room1_light2 pass");
    std::shared_ptr<light_command> room2_light1 = std::make_shared<light_command>("room2_light1 pass");
    std::shared_ptr<light_command> room2_light2 = std::make_shared<light_command>("room2_light2 pass");


    invoker remote(room1_light1, room1_light2, room2_light1, room2_light2);
    remote.execute_all();
    remote.unexecute_all();

    remote.button1_on();
    remote.button1_off();

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

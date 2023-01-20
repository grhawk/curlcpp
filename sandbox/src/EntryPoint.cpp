

#include <Log.h>
#include <iostream>

#include "Sandbox.h"

int main(int argc, char* argv[])
{
    logging::Log LOGGER = logging::Log();
    

    

    auto* sandbox = new Sandbox();
    std::cout << sandbox->message() << std::endl;
    std::cout << addToMessage << std::endl;
    delete sandbox;
}

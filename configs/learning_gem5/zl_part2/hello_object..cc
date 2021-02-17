#include <iostream>

#include "learning_gem5/part2/hello_object.hh"

HelloObject::HelloObject(HelloObjectParams *params) :
    SimObject(params)
{
    std::cout << "Hello World! From a SimObject!" << std::endl;
}
HelloObject*
HelloObjectParams::create()
{
    return new HelloObject(this);
}

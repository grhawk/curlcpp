#ifndef CURLCPP_SANDBOX_H
#define CURLCPP_SANDBOX_H

#include <curlcpp.h>

class Sandbox
{
private:
    const char* p_message =
            curlcpp::Application::dummyFunction();
    curlcpp::Application app;
public:
    Sandbox()
            : app(curlcpp::Application()) {}
    ~Sandbox() = default;
    const char* message();
};


#endif //CURLCPP_SANDBOX_H

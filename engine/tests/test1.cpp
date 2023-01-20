#pragma clang diagnostic push
#pragma ide diagnostic ignored "cert-err58-cpp"

#include<gtest/gtest.h>

#include<curlcpp.h>

TEST(Example, ExampleTest){
ASSERT_STREQ(curlcpp::Application::dummyFunction(), "Hello!");
}

#pragma clang diagnostic pop
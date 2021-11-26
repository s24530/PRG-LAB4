#include <iostream>
#include <string>
int main()
{
    std::string a = "Hello world!";
    auto x = &a;
    std::cout<<a<<" "<<x<<"\n";
    return 0;
}

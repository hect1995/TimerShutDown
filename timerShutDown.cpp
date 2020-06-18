#include <sstream>
#include <iostream>

int main(){
    std::stringstream ss;
    std::cout << "In how many minutes does this cutie girl want to shut down the PC?\n";
    int n;
    std::cin >> n;
    ss << "shutdown -s -t " << n;
    system( ss.str().c_str() ); // str() returns a std::string with the contents of the stream, c_str() the equivalent C string
}
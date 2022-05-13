#include <cstdlib>
#include <string>
#include <cstring>
#include <iostream>

// Example of pass by reference
void person(std::string name, int age, bool inSchool) {
    std::cout << "hello";
}

int main() {

    person("Ethan", 19, true);
    return 0;
}
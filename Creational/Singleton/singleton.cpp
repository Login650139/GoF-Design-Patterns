#include "Singleton.h"
#include <iostream>

int main() {
    Singleton* s = Singleton::getInstance();
    s->doSomething();
    std::cout << "Singleton works" << std::endl;
    return 0;
}

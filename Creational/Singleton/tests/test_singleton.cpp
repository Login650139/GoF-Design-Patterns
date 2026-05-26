#include <cassert>
#include <iostream>
#include "../Singleton.h"

int main() {
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();

    // Проверка, что getInstance всегда возвращает один и тот же объект
    assert(s1 == s2);

    s1->doSomething();
    s2->doSomething();

    std::cout << "Test passed: Singleton is unique." << std::endl;
    return 0;
}

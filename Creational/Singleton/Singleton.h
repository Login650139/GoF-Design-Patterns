#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton {
private:
    static Singleton* instance;
    Singleton() {}
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

public:
    static Singleton* getInstance() {
        if (!instance)
            instance = new Singleton();
        return instance;
    }

    void doSomething() {
        // пример метода
    }
};

Singleton* Singleton::instance = nullptr;

#endif

#ifndef SINGLETON_H
#define SINGLETON_H
#include <memory>

class Singleton
{
public:
    ~Singleton();
    static std::shared_ptr<Singleton> getInstance();
private:
    Singleton();
    static std::shared_ptr<Singleton>  m_pInstance;

};

#endif // SINGLETON_H

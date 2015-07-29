#ifndef SUBJECT_H
#define SUBJECT_H
#include <memory>

class Observer;
class Subject
{
public:
    Subject();
    virtual   ~Subject();
    virtual void registerObserver(std::shared_ptr<Observer> inOb) = 0;
    virtual void removeObserver(std::shared_ptr<Observer> inOb) = 0;
    virtual void notifyObserver() =  0;
};

#endif // SUBJECT_H

#ifndef CAFFEINEBEVERAGEWITHHOOK_H
#define CAFFEINEBEVERAGEWITHHOOK_H

class CaffeineBeverageWithHook
{
public:
    CaffeineBeverageWithHook();
   virtual ~CaffeineBeverageWithHook();

    void prepareRecipe();
    virtual void brew() = 0;
    virtual void addCondiments() = 0;
    void boilWater();
    void pourInCup();
   virtual bool customerWantsCondiments();
};

#endif // CAFFEINEBEVERAGEWITHHOOK_H

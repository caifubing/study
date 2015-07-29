#ifndef LIGHTONCOMMAND_H
#define LIGHTONCOMMAND_H
#include<memory>
#include "command.h"
#include "light.h"
class LightOnCommand : public Command
{
public:
    LightOnCommand(std::shared_ptr<Light> light);
    ~LightOnCommand();
    void execute();
private:
    std::shared_ptr<Light> m_light;

};

#endif // LIGHTONCOMMAND_H

#ifndef CURENTCONDITIONSDISPLAY_H
#define CURENTCONDITIONSDISPLAY_H
#include <memory>

#include "observer.h"
#include "displayelement.h"
#include "subject.h"
#include "weatherdata.h"
class CurentConditionsDisplay : public Observer, public DisplayElement
{
public:
    CurentConditionsDisplay();
    ~CurentConditionsDisplay();
    void update(float temp,float humdity, float pressure);
    void display();
private:
    float m_temperature;
    float m_humidity;
    float m_pressure;
};

#endif // CURENTCONDITIONSDISPLAY_H

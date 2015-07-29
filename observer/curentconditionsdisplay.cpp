#include "curentconditionsdisplay.h"
#include <iostream>
using std::cout; using std::endl;
CurentConditionsDisplay::CurentConditionsDisplay()
{
}

CurentConditionsDisplay::~CurentConditionsDisplay()
{

}

void CurentConditionsDisplay::update(float temp, float humdity, float pressure)
{
    m_temperature = temp;
    m_humidity = humdity;
    m_pressure = pressure;
    display();
}

void CurentConditionsDisplay::display()
{
    cout << "Current conditions: " << m_temperature << "F degrees and "
         << m_humidity << "% humidity" << endl;
}


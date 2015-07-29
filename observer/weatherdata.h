#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include <list>
#include "subject.h"
#include "observer.h"

class WeatherData : public Subject
{
public:
    WeatherData();
    ~WeatherData();
    void registerObserver(std::shared_ptr<Observer> inOb);
    void removeObserver(std::shared_ptr<Observer> inOb);
    void notifyObserver();
    void measurementsChanged();
    void setMeasurements(float temp, float humidity, float pressure);
//    float getTemp() const;
//    float getHumidty() const;
//    float getPressure() const;
private:
    float m_temp;
    float m_humidty;
    float m_pressure;
    std::list<std::shared_ptr<Observer> > m_observers;
};

#endif // WEATHERDATA_H

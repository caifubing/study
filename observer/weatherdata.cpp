#include "weatherdata.h"
#include <memory>

using std::shared_ptr;  using std::make_shared;
WeatherData::WeatherData()
{

}

WeatherData::~WeatherData()
{

}

void WeatherData::registerObserver(std::shared_ptr<Observer> inOb)
{
        m_observers.push_back(inOb);
}

void WeatherData::removeObserver(std::shared_ptr<Observer> inOb)
{
    m_observers.remove(inOb);
}

void WeatherData::notifyObserver()
{
    for(auto &it:m_observers)
    {
        it->update(m_temp,m_humidty,m_pressure);
    }
}

void WeatherData::measurementsChanged()
{
    notifyObserver();
}

void WeatherData::setMeasurements(float temp, float humidity, float pressure)
{
    m_temp = temp;
    m_humidty = humidity;
    m_pressure = pressure;
    measurementsChanged();
}

//float WeatherData::getTemp() const
//{
//    return m_temp;
//}

//float WeatherData::getHumidty() const
//{
//    return m_humidty;
//}

//float WeatherData::getPressure() const
//{
//    return m_pressure;
//}


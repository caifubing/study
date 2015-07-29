#include <iostream>
#include <memory>
#include <weatherdata.h>
#include "curentconditionsdisplay.h"
using namespace std;

int main()
{
    shared_ptr<WeatherData> wd = make_shared<WeatherData>();
    shared_ptr<CurentConditionsDisplay> cur = make_shared<CurentConditionsDisplay>();
    wd->registerObserver(cur);
    wd->setMeasurements(80,65,30.4f);
    return 0;
}


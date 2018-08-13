#ifndef WEATHER_DATA_H
#define WEATHER_DATA_H

#include "observer.h"
#include "subject.h"

#include <vector>

class Weather_data : public Subject
{
public:
    Weather_data() : temp(0), humidity(0), pressure(0) {}
    virtual ~Weather_data() {}
    void register_observer(Observer* observer);
    void remove_observer(Observer* observer);
    void notify_observers();
    void measurements_changed();
    void set_measurements(float temp, float humidity, float pressure);

private:
    float temp;
    float humidity;
    float pressure;

    std::vector<Observer *> observers;
};

#endif

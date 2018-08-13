#include "weather_data.h"

#include <algorithm>

void Weather_data::register_observer(Observer* observer)
{
    observers.push_back(observer);
}

void Weather_data::remove_observer(Observer* observer)
{
    auto iterator = std::find(observers.begin(), observers.end(), observer);
    if (iterator != observers.end())
    {
        observers.erase(iterator);
    }
}

void Weather_data::notify_observers()
{
    for (Observer* observer : observers)
    {
        observer->update(temp, humidity, pressure);
    }
}

void Weather_data::measurements_changed()
{
    notify_observers();
}

void Weather_data::set_measurements(float temp, float humidity, float pressure)
{
    this->temp = temp;
    this->humidity = humidity;
    this->pressure = pressure;
    measurements_changed();
}

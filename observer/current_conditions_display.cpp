#include "current_conditions_display.h"

#include <iostream>

Current_conditions_display::Current_conditions_display(Subject& weather_data)
    : temp_(0), humidity_(0), pressure_(0), weather_data_(dynamic_cast<Weather_data&>(weather_data))
{
    weather_data_.register_observer(this);
}

void Current_conditions_display::update(float temp, float humidity, float pressure)
{
    temp_ = temp;
    humidity_ = humidity;
    pressure_ = pressure;
    display();
}

void Current_conditions_display::display()
{
    std::cout << "temp = " << temp_ << ", ";
    std::cout << "humidity = " << humidity_ << ", ";
    std::cout << "pressure = " << pressure_ << std::endl;
}

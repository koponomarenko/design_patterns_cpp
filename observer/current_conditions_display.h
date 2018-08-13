#ifndef CURRENT_CONDITIONS_DISPLAY_H
#define CURRENT_CONDITIONS_DISPLAY_H

#include "observer.h"
#include "display_element.h"
#include "weather_data.h"

class Current_conditions_display : public Observer, Display_element
{
public:
    Current_conditions_display(Subject& weather_data);
    virtual ~Current_conditions_display() {}
    void update(float temp, float humidity, float pressure);
    void display();

private:
    float temp_;
    float humidity_;
    float pressure_;

    Weather_data& weather_data_; // may be wrong approach
};

#endif

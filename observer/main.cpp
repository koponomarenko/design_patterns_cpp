// Weather Station

#include "weather_data.h"
#include "current_conditions_display.h"

int main()
{
    Weather_data weather_data;
    Current_conditions_display current_conditions_display(weather_data);

    weather_data.set_measurements(17, 40, 780);
    weather_data.set_measurements(16, 38, 770);
    weather_data.set_measurements(15, 40, 775);
}

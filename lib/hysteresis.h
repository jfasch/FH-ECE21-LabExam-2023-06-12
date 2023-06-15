#pragma once

class Hysteresis
{
public:
    Hysteresis(MockSensor* sensor, MockSwitch* switcH, double low, double high)
    {
        _sensor = sensor;
        _switch = switcH;
        _low = low;
        _high = high;
    }
    void check()
    {
        double current_temperature = _sensor->get_temperature();
        if (current_temperature < _low)
            _switch->on();
        else if (current_temperature > _high)
            _switch->off();
    }

private:
    MockSensor* _sensor;
    MockSwitch* _switch;
    double _low;
    double _high;
};

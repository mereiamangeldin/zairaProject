#include "Bus.h"

class SchoolBus : public Bus {
protected:
    string color;
    bool stopSign;
public:
    SchoolBus(string brand, string model, int year, string color, bool stopSign);
    string toString();
    string getColor();
    void setColor(string color);
    bool getStopSign();
    void setStopSign(bool stopSign);
};
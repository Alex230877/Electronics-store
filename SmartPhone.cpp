#include "SmartPhone.h"

using namespace std;

SmartPhone::SmartPhone(const string& type, const string& brand, const int battery, const std::string& sim) : MobileDevice(type, brand, battery)
{
    _sim = sim;
}

void SmartPhone::show()
{
    cout << "‘ирма " << _brand << " јккумул€тор " << _battery << "мјч  SIM " << _sim << endl;
}
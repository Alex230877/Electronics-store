#include "MobileDevice.h"

using namespace std;

MobileDevice::MobileDevice(const string& type, const string& brand, const int battery)
{
    _type = type;
    _brand = brand;
    _battery = battery;
}

void MobileDevice::show()
{
    cout <<"‘ирма "<< _brand << " јккумул€тор " << _battery << "мјч " << endl;
}
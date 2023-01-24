#include "HomeDevice.h"

using namespace std;

HomeDevice::HomeDevice(const string& type, const string& brand, const string& resol)
{
    _type = type;
    _brand = brand;
    _resol = resol;
}

HomeDevice::HomeDevice(const string& resol)
{
    _resol = resol;
}

void HomeDevice::show()
{
    cout << _brand << " Разрешение " << _resol << endl;
}
#include <iostream>
#include "Notebook.h"

using namespace std;

Notebook::Notebook(const string& type, const string& brand, const int battery, const string& resol, const double usb) : MobileDevice(type, brand, battery), HomeDevice(resol)
{
    _usb = usb;
}

void Notebook::show()
{
    cout <<"Фирма "<< _brand << " Аккумулятор " << _battery << "мАч  Разрешение " << _resol << " Тип USB " << _usb << endl;
}
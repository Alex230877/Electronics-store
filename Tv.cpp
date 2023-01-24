#include <iostream>
#include "Tv.h"

using namespace std;

Tv::Tv(const string& type, const string& brand, const string& resol, const string& smart) : HomeDevice(type, brand, resol)
{
    _smart = smart;
}

void Tv::show()
{
    cout <<"����� "<< _brand << " ���������� " << _resol << " SMART " << _smart << endl;

}
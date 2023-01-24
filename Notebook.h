#pragma once
#include "MobileDevice.h"
#include "HomeDevice.h"

class Notebook final : public MobileDevice, HomeDevice
{
public:
    Notebook(const std::string& type, const std::string& brand, const int battery, const std::string& resol, const double usb);
    void show() override;

private:
    double _usb;
};
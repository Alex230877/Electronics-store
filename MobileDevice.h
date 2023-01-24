#pragma once
#include "IElectronics.h"

class MobileDevice : virtual public IElectronics
{

public:
    MobileDevice(const std::string& type, const std::string& brand, const int battery);
    void show() override;
    ~MobileDevice() = default;

protected:
    int _battery;
};
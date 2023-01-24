#pragma once
#include "IElectronics.h"

class HomeDevice : virtual public IElectronics
{

public:
    HomeDevice(const std::string& type, const std::string& brand, const std::string& resol);
    HomeDevice(const std::string& resol);
    void show() override;
    ~HomeDevice() = default;

protected:
    std::string _resol;
};
#pragma once
#include "MobileDevice.h"

class SmartPhone final : public MobileDevice
{
public:
    SmartPhone(const std::string& type, const std::string& brand, const int battery, const std::string& sim);
    void show() override;
    ~SmartPhone() = default;

private:
    std::string _sim;
};
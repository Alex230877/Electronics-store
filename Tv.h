#pragma once
#include "HomeDevice.h"

class Tv final : public HomeDevice
{
public:
    Tv(const std::string& type, const std::string& brand, const std::string& resol, const std::string& smart);
    void show() override;
    ~Tv() = default;

private:
    std::string _smart;
};
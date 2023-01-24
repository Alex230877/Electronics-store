#include <iostream>
#pragma once

class IElectronics
{
public:
	virtual void show() = 0;
	virtual ~IElectronics() = default;
	std::string getDevice();

protected:
	std::string _type;
	std::string _brand;
};
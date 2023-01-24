#include <iostream>
#include "Smartphone.h"
#include "Notebook.h"
#include "Tv.h"

using namespace std;

void DeviceShow(IElectronics* device[], int asize, string devstr)
{
    cout << endl;
    for (int i = 0; i < asize; i++)
    {
        if (device[i]->getDevice() == devstr) device[i]->show();
    }
    cout << endl;
}

int main()
{
	setlocale(LC_ALL, "");

    const string smart = "Smartphone";
    const string nout = "Notebook";
    const string tv = "Tv";
    char key=NULL;
    const int arraySize = 6;
    IElectronics* device[arraySize];

    device[0] = new SmartPhone(smart, "NOKIA", 1500, "mini");
    device[1] = new Notebook(nout, "DELL", 2800, "HD", 3.2);
    device[2] = new Tv(tv, "SONY", "HD", "No");
    device[3] = new SmartPhone(smart, "SAMSUNG", 1800, "micro");
    device[4] = new Notebook(nout, "IBM", 1900, "noHD", 3.1);
    device[5] = new Tv(tv, "LG", "UHD", "Yes");

    while (true) {
        cout << "Выбор товара Смартфоны - s, Ноутбуки - n, Телевизоры - t, для выхода из программы - q: ";
        cin >> key;
        if (key == 'q') break;

        switch (key)
        {
        case 's':
            DeviceShow(device, arraySize, smart);
            break;

        case 'n':
            DeviceShow(device, arraySize, nout);
            break;

        case 't':
            DeviceShow(device, arraySize, tv);
            break;

        default:
            break;
        }
    }

    for (int i = 0; i < arraySize; i++) delete device[i];

	return 0;
}
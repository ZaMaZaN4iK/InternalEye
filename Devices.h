#ifndef DEVICES_H
#define DEVICES_H

#include <QString>

class Devices
{
private:
    class Sensors
    {
    private:
        class DriveSensors
        {

        };
        class CPUSensors
        {

        };
        class VideoSensors
        {

        };
    };
    class Resources
    {

    };
    class InputDevices
    {
    private:
        class InputDevice
        {
        private:
            enum TypeOfInputDevice {KEYBOARD, MOUSE, JOYSTICK, PCSPKR};
            TypeOfInputDevice type;
            QString name, connectedTo;
            int bus, vendor, product, version;
        public:
            InputDevice();
            InputDevice(const QString& name_, const QString& connectedTo_, const int bus_, const int vendor_,
                        const int product_, const int version_, const TypeOfInputDevice type_);
        };
        void _update();
    public:

    };
public:
    Devices();
};

#endif // DEVICES_H
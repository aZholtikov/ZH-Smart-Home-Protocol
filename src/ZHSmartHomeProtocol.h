#ifndef ZHSMARTHOMEPROTOCOL_H
#define ZHSMARTHOMEPROTOCOL_H

enum DeviceType
{
    GATEWAY = 1,
    SWITCH,
    LED,
    SENSOR,
    RF24_GATEWAY,
    CONTROL_PANEL
};

enum PayloadsType
{
    ATTRIBUTES = 1,
    KEEP_ALIVE,
    SET,
    STATE,
    UPDATE,
    RESTART
};

struct PayloadsData
{
    byte deviceType{0};
    byte payloadsType{0};
    char message[198]{0};
};

#endif

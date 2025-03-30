//=====[Libraries]=============================================================

#include "mbed.h"

#include "gas_sensor.h"

//=====[Declaration of private defines]========================================

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

bool mq2; 
AnalogIn GasSensor (A2);
float GasReading;

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

//=====[Declaration and initialization of private global variables]============

//=====[Declarations (prototypes) of private functions]========================

//=====[Implementations of public functions]===================================

void gasSensorInit()
{
}

void gasSensorUpdate()
{
}

bool gasSensorRead()
{
    GasReading = GasSensor.read()*3.3;

    if (GasReading < 1) {
        mq2 = true;
        }else {
        mq2 = false;
        }
    return mq2;
}

//=====[Implementations of private functions]==================================


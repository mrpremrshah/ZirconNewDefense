#ifndef MOVEMENT_H
#define MOVEMENT_H

#include <Arduino.h>
#include <zirconLib.h>
#include <math.h>

class movement {
    public:
        movement();
        void movementfunc(double degrees);
        
    private:
        const int theta1 = 60;
        const int theta2 = 180;
        const int theta3 = 300;    
        double FrontRight, Back, FrontLeft;
        double maxVal;
        double FRpower, Backpower, FLpower;
        double avg, average, num_sens;
        int sign(double var);

};

#endif


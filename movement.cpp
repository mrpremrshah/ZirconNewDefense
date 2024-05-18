#include <movement.h>
#include <Arduino.h>
#include <zirconLib.h>
#include <math.h>
#include <algorithm>
#include<tuple>
#include<iostream>

movement::movement () {

}

int movement:: sign(double var) {
    if (var < 0) {
        return 1;
    }
    else {
        return 0;
    }
}

void movement:: movementfunc(double degrees) {
    if (degrees >= 360) {
        degrees -= 360;
    }
    FrontRight = sin((degrees-theta1)*(PI/180.0));
    Back = sin((degrees-theta2)*(PI/180.0));
    FrontLeft = sin((degrees-theta3)*(PI/180.0));

    maxVal = max(max(abs(FrontRight), abs(FrontLeft)), abs(Back));


    FRpower  = FrontRight / maxVal;
    Backpower  = Back / maxVal;
    FLpower  = FrontLeft / maxVal;

// change back to 100
    motor3(100*abs(FLpower), sign(FrontLeft));
    motor2(100*abs(FRpower), sign(FrontRight));
    motor1(100*abs(Backpower), sign(Back));
}

// Test this as old code to put in presentation
// void loop() {
//     while (readBall(1) < 500) {
//         motor1(90, 1);
//         motor2(90, 1);
//         motor3(90, 1);
//     }
    
//     motor1(100,1);
//     motor2(100,0);
//     motor3(0,0);
// }
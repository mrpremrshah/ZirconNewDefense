#include <BallFinding.h>
#include <Arduino.h>
#include <zirconLib.h>
#include <math.h>
#include <algorithm>
#include<tuple>
#include<iostream>
// #include <cmath>


BallFinding::BallFinding () {

}

double BallFinding::ballAngleCalc() {
    double sin_sensors_sum = 0;
    double cos_sensors_sum = 0;
    double distance = 0;

    // Serial.println("ball 1:   " + String(readBall(1)));
    // Serial.println("ball 2:   " + String(readBall(2)));
    // Serial.println("ball 3:   " + String(readBall(3)));
    // Serial.println("ball 4:   " + String(readBall(4)));
    // Serial.println("ball 5:   " + String(readBall(5)));
    // Serial.println("ball 6:   " + String(readBall(6)));
    // Serial.println("ball 7:   " + String(readBall(7)));
    // Serial.println("ball 8:   " + String(readBall(8)));
    // double average;    
    for (int i = 0; i < num_sensors; i++) {
        sin_sensors_sum += readBall(i+1) * sin(((i+1)*45)*(PI/180));
        cos_sensors_sum += readBall(i+1) * cos(((i+1)*45)*(PI/180));
    }


    ballAngle = atan2(cos_sensors_sum, sin_sensors_sum) * (180/PI);
    // Serial.println(0);
    // Serial.println("cos" + String(cos_sensors_sum));
    // Serial.println("sin" + String(sin_sensors_sum));



    if (ballAngle < 0) {
        ballAngle += 360;
    }

    ballAngle -= 40;

    if (ballAngle < 0) {
        ballAngle += 360;
    }

    ballAngle = (360-ballAngle);

    // Serial.println(ballAngle);

    // return pow(cos_sensors_sum,2);
    // return pow(sin_sensors_sum, 2);
    // vector ball distance

    return ballAngle;

   
}
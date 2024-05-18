#include <Arduino.h>
#include <zirconLib.h>
#include <iostream>
#include <math.h>

#include <BallFinding.h>
#include <movement.h>
#include <LineAvoidance.h>

// use compass sensor to continuously make sure that the attachment is in the front
// fix weird wheel thing



movement Movement;
LineAvoidance avoidingline;
BallFinding ballFinder;

void setup() {
    InitializeZircon();
    Serial.begin(9600);

}

void reset_all () {
    motor1(0,0);
    motor2(0,0);
    motor3(0,0);

}
void loop () {

    // Movement.movementfunc(ballFinder.orbit());
    // avoidingline.findingLine();
    
    motor1(100,0);


    // Serial.println(ballFinder.main_calc());
    // movement(0);

    // Serial.println("BallAngle:" + String(ballFinder.main_calc()));
    // Serial.println("Orbit" + String(ballFinder.orbit()));

    // Serial.println(ballFinder.main_calc());
    // movement(ballFinder.orbit());
    // delay(100);

    // reset_all();

    // Serial.println("ball 1:   " + String(readBall(1)));
    // Serial.println("ball 2:   " + String(readBall(2)));
    // Serial.println("ball 3:   " + String(readBall(3)));
    // Serial.println("ball 4:   " + String(readBall(4)));
    // Serial.println("ball 5:   " + String(readBall(5)));
    // Serial.println("ball 6:   " + String(readBall(6)));
    // Serial.println("ball 7:   " + String(readBall(7)));
    // Serial.println("ball 8:   " + String(readBall(8)));
    // Serial.println(ballFinder.main_calc());
    // movement(ballFinder.orbit());



    // for (int i = 1; i < 9; i++) {
    //     if (readBall(i) >= 75) {
    //         avg += readBall(i);
    //         num_sens += 1;
    //     }
    // average = avg/num_sens;
    // Serial.println(average);
    // }

}
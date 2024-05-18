#ifndef LINE_AVOIDANCE_H
#define LINE_AVOIDANCE_H
#include <Arduino.h>
#include <zirconLib.h>
#include <math.h>
#include <movement.h>
#include <BallFinding.h>


class LineAvoidance {
    public:
        LineAvoidance();
        void findingLine();
        movement movement1;
        BallFinding ballFinder1;
    private:
        const int white_line = 700;
};

#endif
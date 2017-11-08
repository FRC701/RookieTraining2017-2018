#ifndef ROBOTMAP_H
#define ROBOTMAP_H
#include "WPILib.h"

class RobotMap {
public:

static const int kLeftFrontID = 5;
static const int kLeftRearID = 11;
static const int kRightFrontID = 6;
static const int kRightRearID = 12;

static const int kLeftSpoolID = 2;
static const int kRightSpoolID = 4;

static const int kLeftSpinnerID = 8;
static const int kRightSpinnerID = 7;

static const int kHaySqueezeF = 1;
static const int kHaySqueezeR = 6;
static const int kBrakeF = 2;
static const int kBrakeR = 5;

static const int kActuatorF = 0;
static const int kActuatorR = 7;

static const int kHeimdallGlowID = 0;
static const int kLeftLightID = 1;
static const int kRightLightID = 2;

static void init();

};

#endif


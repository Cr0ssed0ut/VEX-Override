#include "main.h"
#include "lemlib/configs.h"
#include "pros/motor_group.hpp"

void autonomous() {
    chassis.moveToPoint(0, 5, 100);
}
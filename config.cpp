#include "main.h"
#include "globals.h"
#include "helper_functions.h"

pros::Motor left_front(-7);
pros::Motor left_mid(6);
pros::Motor left_back(-5);
pros::Motor right_front(10);
pros::Motor right_mid(-9);
pros::Motor right_back(8);
pros::Motor intake_bottom(1);
pros::Motor intake_top(2);

pros::Motor horizontal_odom(3);
pros::Motor vertical_odom(4);

pros::Imu inertial_sensor(19);


double inch_constant=33.75;
int selected_auton=0;
pros::adi::DigitalOut scraper1('G');
pros::adi::DigitalOut scraper2('H');
pros::adi::DigitalOut ballblock('E');
pros::adi::DigitalOut descore('F');
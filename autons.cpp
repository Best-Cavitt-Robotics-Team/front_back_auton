#include "helper_functions.h"
#include "main.h"
#include "globals.h"

void autonomous() {
    switch (selected_auton){
        case 0:
        translate(25,0,750); //prev 24
        pros::delay(400);
        setHeading(0,70,500);
        pros::delay(250);
        intake_bottom.move_velocity(-600);
        pros::delay(100);
        translate(20,70,750); 
        pros::delay(500); 
        setHeading(0,260,750); //prev 253
        pros::delay(400);
        ballblock.set_value(true);
        translate(-17,260,1000); //prev 253
        pros::delay(400);
        intake_top.move_velocity(-400);
        intake_bottom.move_velocity(-400);
        pros::delay(1750);
        intake_top.move_velocity(0);
        intake_bottom.move_velocity(0);
        translate(66,260,2000);
        pros::delay(400);
        ballblock.set_value(false);
        setHeading(0,220,1000);
        scraper1.set_value(true);
        scraper2.set_value(true);
        translate(-5,215,500);
        pros::delay(100);//maybe not
        intake_bottom.move_velocity(-600);
        translate(20,215,750);
        pros::delay(1000);
        translate(-35,205,750);
        intake_top.move_velocity(-600);
            break;
}
}


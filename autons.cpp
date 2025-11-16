#include "helper_functions.h"
#include "main.h"
#include "globals.h"

void autonomous() {
    switch (selected_auton){
        case 0:
        
        
        translate(24,0,750);
        pros::delay(400);
        setHeading(0,70,500);
        pros::delay(250);
        intake_bottom.move_velocity(-600);
        pros::delay(100);
        translate(20,70,1000);
        pros::delay(1000);
        intake_bottom.move_velocity(0);
        setHeading(0,255,750);
        pros::delay(400);
        ballblock.set_value(true);
        translate(-17,255,1000);
        pros::delay(400);
        intake_top.move_velocity(-300);
        intake_bottom.move_velocity(-300);
        pros::delay(2000);
        intake_top.move_velocity(0);
        intake_bottom.move_velocity(0);
        translate(67 ,250,1000);
        pros::delay(400);
        ballblock.set_value(false);
        setHeading(0,205,1000);
        scraper1.set_value(true);
        scraper2.set_value(true);
        translate(-15,205,500);
        intake_bottom.move_velocity(-600);
        translate(18,205,750);
        pros::delay(1000);
        translate(-31,205,750);
        intake_top.move_velocity(-600);




        // setHeading(0,-45,500);
        // pros::delay(500);
        // translate(7,-45,1000);
        // pros::delay(500);
        // setHeading(0,135,1000);
        // pros::delay(500);
        // scraper1.set_value(true);
        // scraper2.set_value(true);
        // intake_bottom.move_velocity(600);
        // translate(22,135,500);
        // pros::delay(750);//tunelater
        // translate(-40,135,1250);
        // pros::delay(500);
        // intake_top.move_velocity(600);

            break;

        case 1:
        translate(30, 0, 1000);
        setHeading(0, 90, 400);
        //scraper down
        translate(12, 90, 750);
        intake_bottom.move_velocity(450);
        pros::delay(250); //tune later

        //go out and into long goal
        translate(-24, 90, 2000);
        //scraper up
        intake_top.move_velocity(600);
        pros::delay(500); //tune later
        intake_top.move_velocity(0);
        intake_bottom.move_velocity(0);

        //go back and go to other side
        translate(-15, 90, 750);
        setHeading(0, 180, 250);
        translate(96, 180, 5000);
        setHeading(0, 90, 250);
        //scraper down

        //go into other matchloader
        translate(30, 90, 750);
        intake_bottom.move_velocity(600);
        pros::delay(1000);

        //go into long goal and score
        translate(40, 90, 2000);
        intake_top.move_velocity(600);
        pros::delay(1000);

        //park
        translate(-10, 90, 750);
        setHeading(0, 45, 200);
        translate(30, 45, 750);
        setHeading(0, 0, 250);
        //scraper down
        translate(30, 0, 1500);
        //scraper up
            break;
}
}


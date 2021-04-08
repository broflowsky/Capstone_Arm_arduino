/*

Valentin Puyfourcat Apr 2021
SwapDock Constants
*/

//  Clamp servo - 180° roation
#define CLAMP_PIN 2
#define CLAMP_OPENED_POS 90
#define CLAMP_CLOSED_POS 75

// Forward servo - 180° rotation
#define FORWARD_PIN 3
#define FORWARD_MAX_POS 90// TODO
#define FORWARD_MIN_POS 0 //TODO


//  UP Down Stepper motor
// positive positions are above home position, hence positives pos > current pos moves up
#define STEPPER_DIR_PIN 4
#define STEPPER_STEP_PIN 5
#define STEPPER_MOTOR_INTERFACE 1

#define STEPPER_HOME_POS 0
#define STEPPER_DRONE_POS 2500
#define STEPPER_CHARGER_POS -2500
#define STEPPER_CHARGER_POS2 -5000
#define STEPPER_MAX_SPEED 4500
#define STEPPER_MAX_ACCEL 1000

//Led user feedback for arm
#define NUM_PIN 4
#define LED_BIT_0 10
#define LED_BIT_1 11
#define LED_BIT_2 12
#define LED_BIT_3 9
#define LED_HOME_POSITION 0
#define LED_DRONE_APPROACH 1
#define LED_BATTERY_REACH 2
#define LED_CLAW_TRIGGER 3
#define LED_BATTERY_RETRACT 4
#define LED_CHARGER_APPROACH 5
#define LED_BATTERY_INSERT 6
#define LED_CLAW_RELEASE 7
#define LED_CHARGER_APPROACH2 8
#define LED_BATTERY_REACH2 9
#define LED_CLAW_TRIGGER2 10
#define LED_BATTERY_RETRACT2 11
#define LED_DRONE_APPROACH2 12
#define LED_BATTERY_INSERT2 13
#define LED_CLAW_RELEASE2 14
#define LED_HOME_APPROACH 15

void LedSetup(){

  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);


}

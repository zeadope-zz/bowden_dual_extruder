/*
    This file is part of Repetier-Firmware.

    Repetier-Firmware is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Repetier-Firmware is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Repetier-Firmware.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef CONFIGURATION_H
#define CONFIGURATION_H

/**************** READ FIRST ************************

   This configuration file was created with the configuration tool. For that
   reason, it does not contain the same informations as the original Configuration.h file.
   It misses the comments and unused parts. Open this file file in the config tool
   to see and change the data. You can also upload it to newer/older versions. The system
   will silently add new options, so compilation continues to work.

   This file is optimized for version 0.92
   generator: http://www.repetier.com/firmware/v092/

   If you are in doubt which named functions use which pins on your board, please check the
   pins.h for the used name->pin assignments and your board documentation to verify it is
   as you expect.

*/

#define NUM_EXTRUDER 2
#define MOTHERBOARD 403

#include "pins.h"

// ################## EDIT THESE SETTINGS MANUALLY ################
// ################ END MANUAL SETTINGS ##########################

#define FAN_BOARD_PIN -1

//#define EXTERNALSERIAL  use Arduino serial library instead of build in. Requires more ram, has only 63 byte input buffer.
// Uncomment the following line if you are using arduino compatible firmware made for Arduino version earlier then 1.0
// If it is incompatible you will get compiler errors about write functions not beeing compatible!
//#define COMPAT_PRE1
#define BLUETOOTH_SERIAL  -1
#define BLUETOOTH_BAUD  115200
#define MIXING_EXTRUDER 0

#define DRIVE_SYSTEM 0
#define XAXIS_STEPS_PER_MM 320
#define YAXIS_STEPS_PER_MM 320
#define ZAXIS_STEPS_PER_MM 16000
#define EXTRUDER_FAN_COOL_TEMP 50
#define PDM_FOR_EXTRUDER 0
#define PDM_FOR_COOLER 0
#define DECOUPLING_TEST_MAX_HOLD_VARIANCE 20
#define DECOUPLING_TEST_MIN_TEMP_RISE 1
#define KILL_IF_SENSOR_DEFECT 0
#define RETRACT_ON_PAUSE 2
#define PAUSE_START_COMMANDS ""
#define PAUSE_END_COMMANDS ""
// Single nozzle
#define EXT0_X_OFFSET 0
#define EXT0_Y_OFFSET 0
#define EXT0_STEPS_PER_MM 582 // MK8 // 2986 // WADE
#define EXT0_TEMPSENSOR_TYPE 8
#define EXT0_TEMPSENSOR_PIN TEMP_1_PIN
#define EXT0_HEATER_PIN HEATER_1_PIN
#define EXT0_STEP_PIN ORIG_E0_STEP_PIN
#define EXT0_DIR_PIN ORIG_E0_DIR_PIN
#define EXT0_INVERSE 1 // Single drive changes direction
#define EXT0_ENABLE_PIN E0_ENABLE_PIN
#define EXT0_ENABLE_ON 0
#define EXT0_MAX_FEEDRATE 50
#define EXT0_MAX_START_FEEDRATE 20
#define EXT0_MAX_ACCELERATION 500
#define EXT0_HEAT_MANAGER 1
#define EXT0_WATCHPERIOD 1
#define EXT0_PID_INTEGRAL_DRIVE_MAX 255
#define EXT0_PID_INTEGRAL_DRIVE_MIN 40
#define EXT0_PID_PGAIN_OR_DEAD_TIME 18.77
#define EXT0_PID_I 2.28
#define EXT0_PID_D 38.62
#define EXT0_PID_MAX 255
#define EXT0_ADVANCE_K 0
#define EXT0_ADVANCE_L 0
#define EXT0_ADVANCE_BACKLASH_STEPS 0
#define EXT0_WAIT_RETRACT_TEMP 150
#define EXT0_WAIT_RETRACT_UNITS 2
#define EXT0_SELECT_COMMANDS "M340 P0 S2250\n" // Servo position in ms EXT0 // Prime settings in slicing software
#define EXT0_DESELECT_COMMANDS "" // Retract settings in slicing software
#define EXT0_EXTRUDER_COOLER_PIN 12
#define EXT0_EXTRUDER_COOLER_SPEED 255 // z3dope 14:48 24-02-2016 reason Sunon fan
#define EXT0_DECOUPLE_TEST_PERIOD 12000
#define EXT0_JAM_PIN -1
#define EXT0_JAM_PULLUP 0
// EXT1 takes mostly EXT0 values
#define EXT1_X_OFFSET EXT0_X_OFFSET
#define EXT1_Y_OFFSET EXT0_Y_OFFSET
#define EXT1_STEPS_PER_MM EXT0_STEPS_PER_MM
#define EXT1_TEMPSENSOR_TYPE EXT0_TEMPSENSOR_TYPE
#define EXT1_TEMPSENSOR_PIN EXT0_TEMPSENSOR_PIN
#define EXT1_HEATER_PIN -1 // Not needed for single-nozzle
#define EXT1_STEP_PIN ORIG_E1_STEP_PIN
#define EXT1_DIR_PIN ORIG_E1_DIR_PIN
#define EXT1_INVERSE 0 // Single drive changes direction
#define EXT1_ENABLE_PIN ORIG_E1_ENABLE_PIN
#define EXT1_ENABLE_ON EXT0_ENABLE_ON
#define EXT1_MAX_FEEDRATE EXT0_MAX_FEEDRATE
#define EXT1_MAX_START_FEEDRATE EXT0_MAX_START_FEEDRATE
#define EXT1_MAX_ACCELERATION EXT0_MAX_ACCELERATION
#define EXT1_HEAT_MANAGER EXT0_HEAT_MANAGER
#define EXT1_WATCHPERIOD EXT0_WATCHPERIOD
#define EXT1_PID_INTEGRAL_DRIVE_MAX EXT0_PID_INTEGRAL_DRIVE_MAX
#define EXT1_PID_INTEGRAL_DRIVE_MIN EXT0_PID_INTEGRAL_DRIVE_MIN
#define EXT1_PID_PGAIN_OR_DEAD_TIME EXT0_PID_PGAIN_OR_DEAD_TIME
#define EXT1_PID_I EXT0_PID_I
#define EXT1_PID_D EXT0_PID_D
#define EXT1_PID_MAX EXT0_PID_MAX
#define EXT1_ADVANCE_K EXT0_ADVANCE_K
#define EXT1_ADVANCE_L EXT0_ADVANCE_L
#define EXT1_ADVANCE_BACKLASH_STEPS EXT0_ADVANCE_BACKLASH_STEPS
#define EXT1_WAIT_RETRACT_TEMP EXT0_WAIT_RETRACT_TEMP
#define EXT1_WAIT_RETRACT_UNITS EXT0_WAIT_RETRACT_UNITS
#define EXT1_SELECT_COMMANDS "M340 P0 S800\n" // Servo postion in ms EXT1 // Prime settings in slicing software
#define EXT1_DESELECT_COMMANDS "" // Retract settings in slicing software
#define EXT1_EXTRUDER_COOLER_PIN EXT0_EXTRUDER_COOLER_PIN
#define EXT1_EXTRUDER_COOLER_SPEED EXT0_EXTRUDER_COOLER_SPEED
#define EXT1_DECOUPLE_TEST_PERIOD -1 // Not needed for single-nozzle
#define EXT1_JAM_PIN EXT0_JAM_PIN
#define EXT1_JAM_PULLUP EXT0_JAM_PULLUP

#define FEATURE_RETRACTION 1
#define AUTORETRACT_ENABLED 0
#define RETRACTION_LENGTH 3
#define RETRACTION_LONG_LENGTH 13
#define RETRACTION_SPEED 40
#define RETRACTION_Z_LIFT 0
#define RETRACTION_UNDO_EXTRA_LENGTH 0
#define RETRACTION_UNDO_EXTRA_LONG_LENGTH 0
#define RETRACTION_UNDO_SPEED 20
#define FILAMENTCHANGE_X_POS 0
#define FILAMENTCHANGE_Y_POS 0
#define FILAMENTCHANGE_Z_ADD  2
#define FILAMENTCHANGE_REHOME 1
#define FILAMENTCHANGE_SHORTRETRACT 5
#define FILAMENTCHANGE_LONGRETRACT 50
#define JAM_STEPS 220
#define JAM_SLOWDOWN_STEPS 320
#define JAM_SLOWDOWN_TO 70
#define JAM_ERROR_STEPS 500
#define JAM_MIN_STEPS 10
#define JAM_ACTION 1

#define RETRACT_DURING_HEATUP true
#define PID_CONTROL_RANGE 20
#define SKIP_M109_IF_WITHIN 2
#define SCALE_PID_TO_MAX 0
#define TEMP_HYSTERESIS 0
#define EXTRUDE_MAXLENGTH 160
#define NUM_TEMPS_USERTHERMISTOR0 0
#define USER_THERMISTORTABLE0 {}
#define NUM_TEMPS_USERTHERMISTOR1 0
#define USER_THERMISTORTABLE1 {}
#define NUM_TEMPS_USERTHERMISTOR2 0
#define USER_THERMISTORTABLE2 {}
#define GENERIC_THERM_VREF 5
#define GENERIC_THERM_NUM_ENTRIES 33
#define HEATER_PWM_SPEED 0

// ############# Heated bed configuration ########################

#define HAVE_HEATED_BED 1
#define HEATED_BED_MAX_TEMP 120
#define SKIP_M190_IF_WITHIN 3
#define HEATED_BED_SENSOR_TYPE 1
#define HEATED_BED_SENSOR_PIN TEMP_0_PIN
#define HEATED_BED_HEATER_PIN HEATER_0_PIN
#define HEATED_BED_SET_INTERVAL 5000
#define HEATED_BED_HEAT_MANAGER 0
#define HEATED_BED_PID_INTEGRAL_DRIVE_MAX 255
#define HEATED_BED_PID_INTEGRAL_DRIVE_MIN 80
#define HEATED_BED_PID_PGAIN_OR_DEAD_TIME   164.3
#define HEATED_BED_PID_IGAIN   10.69
#define HEATED_BED_PID_DGAIN 635.96
#define HEATED_BED_PID_MAX 255
#define HEATED_BED_DECOUPLE_TEST_PERIOD 300000 // z3Dope 20160518 20:07
#define MIN_EXTRUDER_TEMP 170
#define MAXTEMP 275
#define MIN_DEFECT_TEMPERATURE -10
#define MAX_DEFECT_TEMPERATURE 300

// ################ Endstop configuration #####################

#define ENDSTOP_PULLUP_X_MIN true
#define ENDSTOP_X_MIN_INVERTING true
#define MIN_HARDWARE_ENDSTOP_X true
#define ENDSTOP_PULLUP_Y_MIN true
#define ENDSTOP_Y_MIN_INVERTING true
#define MIN_HARDWARE_ENDSTOP_Y true
#define ENDSTOP_PULLUP_Z_MIN false
#define ENDSTOP_Z_MIN_INVERTING true
#define MIN_HARDWARE_ENDSTOP_Z false // z3Dope
#define ENDSTOP_PULLUP_X_MAX true
#define ENDSTOP_X_MAX_INVERTING false
#define MAX_HARDWARE_ENDSTOP_X false
#define ENDSTOP_PULLUP_Y_MAX true
#define ENDSTOP_Y_MAX_INVERTING false
#define MAX_HARDWARE_ENDSTOP_Y false
#define ENDSTOP_PULLUP_Z_MAX true
#define ENDSTOP_Z_MAX_INVERTING true
#define MAX_HARDWARE_ENDSTOP_Z true
#define max_software_endstop_r true

#define min_software_endstop_x false
#define min_software_endstop_y false
#define min_software_endstop_z false
#define max_software_endstop_x true
#define max_software_endstop_y true
#define max_software_endstop_z false // z3Dope 14:45 24-02-2016
#define ENDSTOP_X_BACK_MOVE 5
#define ENDSTOP_Y_BACK_MOVE 5
#define ENDSTOP_Z_BACK_MOVE 5 // 2 z3Dope
#define ENDSTOP_X_RETEST_REDUCTION_FACTOR 3
#define ENDSTOP_Y_RETEST_REDUCTION_FACTOR 3
#define ENDSTOP_Z_RETEST_REDUCTION_FACTOR 3
#define ENDSTOP_X_BACK_ON_HOME 1
#define ENDSTOP_Y_BACK_ON_HOME 1
#define ENDSTOP_Z_BACK_ON_HOME 0
#define ALWAYS_CHECK_ENDSTOPS 0

// ################# XYZ movements ###################

#define X_ENABLE_ON 0
#define Y_ENABLE_ON 0
#define Z_ENABLE_ON 0
#define DISABLE_X 0
#define DISABLE_Y 0
#define DISABLE_Z 0
#define DISABLE_E 0
#define INVERT_X_DIR 1
#define INVERT_Y_DIR 0
#define INVERT_Z_DIR 1
#define X_HOME_DIR -1
#define Y_HOME_DIR -1
#define Z_HOME_DIR 1 // -1 z3Dope
#define X_MAX_LENGTH 200
#define Y_MAX_LENGTH 200
#define Z_MAX_LENGTH 180
#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0
#define DISTORTION_CORRECTION 1
#define DISTORTION_CORRECTION_POINTS 5
#define DISTORTION_CORRECTION_R 100
#define DISTORTION_PERMANENT 1
#define DISTORTION_UPDATE_FREQUENCY 15
#define DISTORTION_START_DEGRADE 0.5
#define DISTORTION_END_HEIGHT 1
#define DISTORTION_EXTRAPOLATE_CORNERS 0

// ##########################################################################################
// ##                           Movement settings                                          ##
// ##########################################################################################

#define FEATURE_BABYSTEPPING 1
#define BABYSTEP_MULTIPLICATOR 1

#define DELTA_SEGMENTS_PER_SECOND_PRINT 180 // Move accurate setting for print moves
#define DELTA_SEGMENTS_PER_SECOND_MOVE 70 // Less accurate setting for other moves

// Delta settings
#define DELTA_HOME_ON_POWER 0

#define DELTASEGMENTS_PER_PRINTLINE 24
#define STEPPER_INACTIVE_TIME 360L
#define MAX_INACTIVE_TIME 0L
#define MAX_FEEDRATE_X 200
#define MAX_FEEDRATE_Y 200
#define MAX_FEEDRATE_Z 5 // 4 z3Dope z3Dope 2016-1-17
#define HOMING_FEEDRATE_X 50 // 40 z3Dope
#define HOMING_FEEDRATE_Y 50 // 40 z3Dope
#define HOMING_FEEDRATE_Z 4 // 2 z3Dope
#define HOMING_ORDER HOME_ORDER_YXZ
#define ENABLE_BACKLASH_COMPENSATION 0
#define X_BACKLASH 0
#define Y_BACKLASH 0
#define Z_BACKLASH 0
#define RAMP_ACCELERATION 1
#define STEPPER_HIGH_DELAY 2 // 0 z3Dope 2015-06-24 14:56
#define DIRECTION_DELAY 0// 1 // 0 z3Dope 2016-1-17
#define STEP_DOUBLER_FREQUENCY 90000 // 12000 repetier GitHub issue 2015-06-24 16:13
#define ALLOW_QUADSTEPPING 1
#define DOUBLE_STEP_DELAY 1 // time in microseconds
#define MAX_HALFSTEP_INTERVAL 1999
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_X 1000
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_Y 1000
#define MAX_ACCELERATION_UNITS_PER_SQ_SECOND_Z 20
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_X 1000
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_Y 1000
#define MAX_TRAVEL_ACCELERATION_UNITS_PER_SQ_SECOND_Z 20
#define MAX_JERK 20 // 20 z3Dope 2015-06-24 16:16
#define MAX_ZJERK 0.3
#define PRINTLINE_CACHE_SIZE 16
#define MOVE_CACHE_LOW 10
#define LOW_TICKS_PER_MOVE 250000
#define FEATURE_TWO_XSTEPPER 0
#define X2_STEP_PIN   ORIG_E1_STEP_PIN
#define X2_DIR_PIN    ORIG_E1_DIR_PIN
#define X2_ENABLE_PIN E1_ENABLE_PIN
#define FEATURE_TWO_YSTEPPER 0
#define Y2_STEP_PIN   ORIG_E1_STEP_PIN
#define Y2_DIR_PIN    ORIG_E1_DIR_PIN
#define Y2_ENABLE_PIN E1_ENABLE_PIN
#define FEATURE_TWO_ZSTEPPER 0
#define Z2_STEP_PIN   ORIG_E1_STEP_PIN 
#define Z2_DIR_PIN    ORIG_E1_DIR_PIN 
#define Z2_ENABLE_PIN E1_ENABLE_PIN
#define FEATURE_DITTO_PRINTING 0
#define USE_ADVANCE 0
#define ENABLE_QUADRATIC_ADVANCE 0


// ################# Misc. settings ##################

#define BAUDRATE 115200
#define ENABLE_POWER_ON_STARTUP 1
#define POWER_INVERTING 0
#define KILL_METHOD 1
#define ACK_WITH_LINENUMBER 1
#define WAITING_IDENTIFIER "wait"
#define ECHO_ON_EXECUTE 1
#define EEPROM_MODE 2  // z3Dope 22:26 08-03-2016
#define PS_ON_PIN 53

/* ======== Servos =======
Control the servos with
M340 P<servoId> S<pulseInUS>   / ServoID = 0..3  pulseInUs = 500..2500
Servos are controlled by a pulse width normally between 500 and 2500 with 1500ms in center position. 0 turns servo off.
WARNING: Servos can draw a considerable amount of current. Make sure your system can handle this or you may risk your hardware!
*/
#define FEATURE_SERVO 1  // z3Dope 18:26 14-04-2016
#define SERVO0_PIN 7 // z3Dope 18:30 14-04-2016 see RAMPS-FD-Schematic.pdf
#define SERVO1_PIN -1
#define SERVO2_PIN -1
#define SERVO3_PIN -1
#define SERVO0_NEUTRAL_POS  -1
#define SERVO1_NEUTRAL_POS  -1
#define SERVO2_NEUTRAL_POS  -1
#define SERVO3_NEUTRAL_POS  -1
#define UI_SERVO_CONTROL 1  // z3Dope 18:26 14-04-2016
#define FAN_KICKSTART_TIME  200
#define FEATURE_WATCHDOG 0

// #################### Z-Probing #####################

#define FEATURE_Z_PROBE true
#define Z_PROBE_BED_DISTANCE 1 // 10 z3Dope
#define Z_PROBE_PIN 26 // z3Dope // -1
#define Z_PROBE_PULLUP false
#define Z_PROBE_ON_HIGH false
#define Z_PROBE_X_OFFSET 35
#define Z_PROBE_Y_OFFSET -5
#define Z_PROBE_WAIT_BEFORE_TEST 0
#define Z_PROBE_SPEED 2
#define Z_PROBE_XY_SPEED 150
#define Z_PROBE_SWITCHING_DISTANCE 0.2
#define Z_PROBE_REPETITIONS 5
#define Z_PROBE_HEIGHT 0.6 // z3Dope 20161101 12:45
#define Z_PROBE_START_SCRIPT ""
#define Z_PROBE_FINISHED_SCRIPT ""
#define FEATURE_AUTOLEVEL true 
#define Z_PROBE_X1 30  // z3Dope 20160518 18:28
#define Z_PROBE_Y1 30
#define Z_PROBE_X2 170
#define Z_PROBE_Y2 30
#define Z_PROBE_X3 30
#define Z_PROBE_Y3 170
#define BED_LEVELING_METHOD 0
#define BED_CORRECTION_METHOD 0
#define BED_LEVELING_GRID_SIZE 5
#define BED_LEVELING_REPETITIONS 5
#define FEATURE_AXISCOMP 0
#define AXISCOMP_TANXY 0
#define AXISCOMP_TANYZ 0
#define AXISCOMP_TANXZ 0

#ifndef SDSUPPORT  // Some boards have sd support on board. These define the values already in pins.h
#define SDSUPPORT 0
#define SDCARDDETECT -1
#define SDCARDDETECTINVERTED 0
#endif
#define SD_EXTENDED_DIR 1 /** Show extended directory including file length. Don't use this with Pronterface! */
#define SD_RUN_ON_STOP ""
#define SD_STOP_HEATER_AND_MOTORS_ON_STOP 1
#define ARC_SUPPORT 1
#define FEATURE_MEMORY_POSITION 1
#define FEATURE_CHECKSUM_FORCED 0
#define FEATURE_FAN_CONTROL 1
#define FEATURE_CONTROLLER 11
#define UI_LANGUAGE 0
#define UI_PRINTER_NAME "z3Dope i3"
#define UI_PRINTER_COMPANY "zeadope"
#define UI_PAGES_DURATION 4000
#define UI_ANIMATION 1
#define UI_SPEEDDEPENDENT_POSITIONING 0
#define UI_DISABLE_AUTO_PAGESWITCH 1
#define UI_AUTORETURN_TO_MENU_AFTER 30000
#define FEATURE_UI_KEYS 0
#define UI_ENCODER_SPEED 2
#define UI_REVERSE_ENCODER 1 // z3Dope 0
#define UI_KEY_BOUNCETIME 10
#define UI_KEY_FIRST_REPEAT 500
#define UI_KEY_REDUCE_REPEAT 50
#define UI_KEY_MIN_REPEAT 50
#define FEATURE_BEEPER 0
#define CASE_LIGHTS_PIN -1
#define CASE_LIGHT_DEFAULT_ON 1
#define UI_START_SCREEN_DELAY 1000
#define UI_DYNAMIC_ENCODER_SPEED 1
        /**
Beeper sound definitions for short beeps during key actions
and longer beeps for important actions.
Parameter is delay in microseconds and the secons is the number of repetitions.
Values must be in range 1..255
*/
#define BEEPER_SHORT_SEQUENCE 2,2
#define BEEPER_LONG_SEQUENCE 8,8
#define UI_SET_PRESET_HEATED_BED_TEMP_PLA 60
#define UI_SET_PRESET_EXTRUDER_TEMP_PLA   190
#define UI_SET_PRESET_HEATED_BED_TEMP_ABS 110
#define UI_SET_PRESET_EXTRUDER_TEMP_ABS   240
#define UI_SET_MIN_HEATED_BED_TEMP  30
#define UI_SET_MAX_HEATED_BED_TEMP 120
#define UI_SET_MIN_EXTRUDER_TEMP   170
#define UI_SET_MAX_EXTRUDER_TEMP   260
#define UI_SET_EXTRUDER_FEEDRATE 2
#define UI_SET_EXTRUDER_RETRACT_DISTANCE 3

#endif



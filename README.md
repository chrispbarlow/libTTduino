# libTTduino
Time Triggered scheduler library for Arduino

For an example project using this library, see http://github.com/chrispbarlow/TTduino

This is an implementation of a Time Triggered Cooperative (TTC) schedule, based on the designs by Dr Michael J. Pont (see http://www.safetty.net/training/beginners)

The project is built in Eclipse Juno (http://www.eclipse.org/downloads/packages/eclipse-ide-cc-developers/junosr2) 
using the Arduino for Eclipse plugin, developed by Jan Baeyens (see http://eclipse.baeyens.it/Install.shtml for installation instructions)

Tasks have 2 functions:

x_Init() is called once from the familiar Arduino setup() function.
x_update() is called periodically, as prescribed in the task array in TTduino.cpp.

Task properties are set up in the task array using:
task_period: The time between executions of the task
task_delay: The time delay from startup before the first execution

These two properties allow tasks to be spaced out in the timeline to provide reliable timing.

Note: The number of tasks currently needs to be set manually with the NUM_TASKS property in the header file. This value can be larger than the actual number of tasks, but not smaller - an error message will be output on the serial port if you try to add more tasks than you've allocated

For more information, see:
http://chrisbarlow.wordpress.com/2012/09/13/reliable-task-scheduling-with-arduino-avr/

and

http://chrisbarlow.wordpress.com/2012/12/28/further-task-scheduling-with-arduino-avr/

// Only modify this file to include
// - function definitions (prototypes)
// - include files
// - extern variable definitions
// In the appropriate section

#ifndef _libTTduino_H_
#define _libTTduino_H_
#include "Arduino.h"

/*
 * Define how often the ticks occur, and the number of tasks in the schedule
 */
#define NUM_TASKS 	(10)		/* Total number of tasks */

/*
 * Function pointer for task array
 * This links the Task list with the functions from the includes
 * */
typedef volatile void (*task_function_t)(void);


// Prototypes
void TTduino_runScheduledTasks(void);
void TTduino_start(uint32_t ticklength);
void TTduino_addTask(task_function_t init, task_function_t task, uint32_t period, uint32_t offset);


//Do not add code below this line
#endif /* _libTTduino_H_ */

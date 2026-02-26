#ifndef KERNEL_H
#define KERNEL_H

/* * Architecture Specific Integer Definitions 
 * Assuming a 32 bit Protected Mode execution environment.
 */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;

/* * Hardware Abstraction Constants 
 */
#define VGA_BUFFER_ADDRESS 0xB8000
#define VGA_COLOR_WHITE_ON_BLACK 0x0F

/* * Kernel Entry Point Declaration 
 */
void kmain(void);

#endif


/*

#ifndef KERNEL_H
#define KERNEL_H

// ============================================================================
// KERNEL DATA TYPES AND STRUCTURES
// ============================================================================

// Task/Process Control Block
// Stores metadata for each task running in the kernel
struct TaskControlBlock {
    // Task identifier and state
    // Priority level
    // Stack pointer and program counter
    // Context/registers snapshot
    // Task status (READY, RUNNING, BLOCKED, etc.)
};

// Queue/List structure for managing tasks
// Used to track ready, blocked, and other task queues
struct TaskQueue {
    // Head pointer
    // Tail pointer
    // Count of elements
};

// ============================================================================
// KERNEL CORE FUNCTIONS
// ============================================================================

// Initialization: Setup kernel structures, interrupts, and scheduler
void kernel_init(void);

// Task Management: Create, delete, and control tasks
void task_create(void);      // Initialize new task
void task_delete(void);      // Remove task from system
void task_suspend(void);     // Pause task execution
void task_resume(void);      // Resume suspended task

// Scheduling: Context switching and task selection
void scheduler(void);        // Select next task to run
void context_switch(void);   // Save current context, load next task
void yield(void);            // Voluntary task switch

// Synchronization: Mutexes, semaphores, events
void mutex_lock(void);
void mutex_unlock(void);
void semaphore_wait(void);
void semaphore_signal(void);

// System: Tick handler and utilities
void kernel_tick(void);      // Called by system timer interrupt
void kernel_panic(void);     // Handle fatal errors

#endif // KERNEL_H

*/
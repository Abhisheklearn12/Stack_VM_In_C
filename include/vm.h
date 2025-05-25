/**
 * @file vm.h
 * @brief core VM structure amd lifecycle interface. 
 * 
 * This header defines the core Virtual Machine (VM) struct, including primary
 * components such as the instruction pointer, bytecode buffer, stack, heap and runtime 
 * state. 
 * 
 * It also declares the three primary lifecycle functions: 
 *  - vm_create() : Initilizes and returns a new VM instance 
 *  - vm_run() : Starts the VM execution loop
 *  - vm_destroy() : Fress all allocated resources
 * 
 * The VM struct serves as the central context for all opertations, and is used 
 * throught the interpreter, runtime, stack and heap modules. 
 * 
 * Designed for a stack-based VM in C (educational project similar to JVM). 
 * 
 */

#ifndef VM_H
#define VM_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>  // for size_t

// Forward declaration for modular components.
struct stack;
struct heap;
struct instruction;

// ----------------------------------
// VIRTUAL MACHINE STRUCTURE
// ----------------------------------
typedef struct VM {
    // Bytecode 
    const uint8_t *bytecode;    // Pointer to loaded bytecode
    size_t bytecode_size;      // Total size of the bytecode
    size_t ip;                // Intsruction pointer (current index in bytecode)

    // stack (operand stack)
    struct stack *stack;     // Heap for memory allocation (if OOP-like model)

    // VM State
    bool running;           // Flag indicating if the VM is currently executing
}VM;

// -----------------------------
// VM Lifecycle APIs
// -----------------------------
/**
 * @brief Create a new VM instance with the given bytecode.
 *
 * @param bytecode Pointer to the bytecode array.
 * @param size     Size of the bytecode array.
 * @return Pointer to an initialized VM instance.
 */

/* This is just fro example and making the entire reason and faking it untill you try.
* this is for fun things and making it a lot better.
* Q1. How do we manage the entire satire thing that can be stolenm for a while and making it
* fucking things and doing for a "WHILE".
*/


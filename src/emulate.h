///////////////////////////////////////////////////////////////////////////////
// C Group Project - First Year
// ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
// File: arm.h
// Group: 21
// Memebers: amv12, lmj112, skd212
///////////////////////////////////////////////////////////////////////////////

#ifndef _DCPU_H_
#define _DCPU_H_

#define NO_OF_REGS 17
#define MEMSIZE 65536

typedef uint8_t   u8;
typedef uint16_t u16;
typedef uint32_t u32;

// Set up program state as a C Struct
struct arm
{
  u32 register[13];   // registers
  u32 sp;             // R[13] <- stack pointer
  u32 lr;             // R[14] <- link register
  u32 pc;             // R[15] <- program counter
  u32 cpsr;           // R[16] <- 
  u32 m[MEMSIZE];     // memory array
};

#endif

void main(int argc, char** argv);
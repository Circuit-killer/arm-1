///////////////////////////////////////////////////////////////////////////////
// C Group Project - First Year
// ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
// File: functionAssemble.c
// Group: 21
// Members: amv12, lmj112, skd212
///////////////////////////////////////////////////////////////////////////////

#include "functionAssemble.h"
#include <assert.h>

enum DataProcessingType {COMPUTE, SINGLE_OPERAND, NO_COMPUTE};

//to think about ==== what to do about the labels

uint32_t assembleDataProcessing(int arguments char **strings)
{
  assert (arguments >=2 && arguments <=5);
  uint32_t binaryCode = 0;
  //cond is always 1110 
  uint32_t dataProcessingCond 0xE0000000;
  //update to include condition
  binaryCode = binaryCode & dataProcessisngCond;
  //next 2 bits are 0's no matter what
  uint32_t bits26and27mask 0xF3FFFFFF;
  //update to include bits 26 and 27
  binaryCode = binaryCode & bits26and27mask;
  //TODO set bit 25 - the I bit
  //******************************
  
  //can use the mnemonic to determine type and layout of instruction
  
  DataProcessingType typeOfInstr;  

  //for bits 21 through 24 - opcode
  uint32_t opCodemask;  

  if(!strcmp(strings[0], "and")
  { 
     opCodeMask = 0xFE1FFFFF;
     typeOfInstr = DataProcessingType.COMPUTE;
  }
  else if(!strcmp(strings[0], "eor")
  { 
     opCodeMask = 0xFE3FFFFF;
     typeOfInstr = DataProcessingType.COMPUTE;
  }
  else if(!strcmp(strings[0], "sub")
  { 
     opCodeMask = 0xFE5FFFFF;
     typeOfInstr = DataProcessingType.COMPUTE;
  }
  else if(!strcmp(strings[0], "rsb")
  { 
     opCodeMask = 0xFE7FFFFF;
     typeOfInstr = DataProcessingType.COMPUTE;
  }
  else if(!strcmp(strings[0], "add")
  { 
     opCodeMask = 0xFE9FFFFF;
     typeOfInstr = DataProcessingType.COMPUTE;
  }
  else if(!strcmp(strings[0], "orr")
  { 
     opCodeMask = 0xFF9FFFFF;
     typeOfInstr = DataProcessingType.COMPUTE;
  }  
  else if(!strcmp(strings[0], "mov")
  { 
     opCodeMask = 0xFFBFFFFF;
     typeOfInstr = DataProcessingType.SINGLE_OPERAND;
  } 
  else if(!strcmp(strings[0], "tst")
  { 
     opCodeMask = 0xFF1FFFFF;
     typeOfInstr = DataProcessingType.NO_COMPUTE;
  }
  else if(!strcmp(strings[0], "teq")
  { 
     opCodeMask = 0xFF3FFFFF;
     typeOfInstr = DataProcessingType.NO_COMPUTE;
  }
  else if(!strcmp(strings[0], "cmp")
  { 
     opCodeMask = 0xFF5FFFFF;
     typeOfInstr = DataProcessingType.NO_COMPUTE;
  }
  else
    //isnt data processing!
    printf("this isnt a data processing instruction!\n");
  
  //now we have the correct opCodeMask we can fill in those bits in the 
  //binaryCode
  binaryCode = binaryCode & opCodeMask;

  switch(arguments)
  {
    case 2:

      break;
    case 3:

      break;
    case 4:

      break;
    case 5:

      break;
  }

  return binaryCode;
}



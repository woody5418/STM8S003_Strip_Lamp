#ifndef __FLASH_EEPROM_H
#define __FLASH_EEPROM_H

#include "stm8s.h"

void Init_EEPROM(void);  // ≥ı ºªØ
void WriteEEPROM(u8 data);
u8 ReadEEPROM(void);



#endif



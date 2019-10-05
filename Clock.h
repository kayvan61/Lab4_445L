#ifndef CLOCKH
#define CLOCKH

#include<stdint.h>

void clockInit(void);
uint16_t getClockState(void);
void tickClock(void);
void toggleAlarm(uint8_t);
uint8_t isArmed(void);
void displayClock(void);
void enterAlarmTime(void);
void displayAlarm(uint8_t min, uint8_t hour);
uint8_t getStale(void);
uint8_t getSubStale(void);
void updateClock(uint8_t min, uint8_t hour);
void clearSet(void);
void snooze(void);
void clockSetState(uint8_t h, uint8_t  m, uint8_t  s);

#endif

#ifndef BOADMAP_OVERRIDES_H
#define BOADMAP_OVERRIDES_H
#ifdef __cplusplus
extern "C"
{
#endif

#include "boardmap_reset.h"
#define MCU MCU_AVR
#define KINEMATIC KINEMATIC_CARTESIAN
#define AXIS_COUNT 3
#define TOOL_COUNT 1
#define BAUDRATE 115200
#define BOARD_NAME "Arduino UNO"
#define UART_PORT 0
#define UART2_PORT 0
#define ITP_TIMER 1
#define RTC_TIMER 0
#define ONESHOT_TIMER 2
#define STEP0_BIT 2
#define STEP0_PORT D
#define STEP1_BIT 3
#define STEP1_PORT D
#define STEP2_BIT 4
#define STEP2_PORT D
#define DIR0_BIT 5
#define DIR0_PORT D
#define DIR1_BIT 6
#define DIR1_PORT D
#define DIR2_BIT 7
#define DIR2_PORT D
#define STEP0_EN_BIT 0
#define STEP0_EN_PORT B
#define LIMIT_X_BIT 1
#define LIMIT_X_PORT B
#define LIMIT_X_PULLUP
#define LIMIT_X_ISR 0
#define LIMIT_Y_BIT 2
#define LIMIT_Y_PORT B
#define LIMIT_Y_PULLUP
#define LIMIT_Y_ISR 0
#define LIMIT_Z_BIT 3
#define LIMIT_Z_PORT B
#define LIMIT_Z_PULLUP
#define LIMIT_Z_ISR 0
#define PROBE_BIT 3
#define PROBE_PORT C
#define PROBE_PULLUP
#define PROBE_ISR 1
#define ESTOP_BIT 0
#define ESTOP_PORT C
#define ESTOP_PULLUP
#define ESTOP_ISR 1
#define FHOLD_BIT 1
#define FHOLD_PORT C
#define FHOLD_PULLUP
#define FHOLD_ISR 1
#define CS_RES_BIT 2
#define CS_RES_PORT C
#define CS_RES_PULLUP
#define CS_RES_ISR 1
#define TX_BIT 1
#define TX_PORT D
#define RX_BIT 0
#define RX_PORT D
#define SHIFT_REGISTER_DELAY_CYCLES 50
#define IC74HC595_COUNT 0
#define IC74HC165_COUNT 0
//Custom configurations
#define DISABLE_COORDINATES_SYSTEM_RAM 


#ifdef __cplusplus
}
#endif
#endif

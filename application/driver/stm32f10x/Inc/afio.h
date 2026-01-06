/**********************************************************************************************************************************************************************
 * @file    : afio.h
 * @brief   : AFIO (Alternate Function I/O) driver interface for STM32F10x devices.
 *              - This header file provides AFIO register map definition, AFIO base address
 *              - Enumeration for EXTI line, GPIO port mapping, and debug configuration
 * @author  : lu-05-cmd
 * @date    : Juanary, 31 2025
 * 
 * @note : 
 *      - Designed according to STM32F10x Reference Manual (RM0008).
 *      - AFIO peripheral is varialble only on STM32F1 series.
 *      - The AFIO clock must be enable in RCC before using this driver.
 **********************************************************************************************************************************************************************/


#ifndef STM32F10x_AFIO_H
#define STM32F10x_AFIO_H


/*INCLUDE============================================================================================================================================================*/
#include <stdint.h>




/*====================================================================================================================================================================
 |                                 Configuration Alternate Function Input/Output (AFIO)
 =====================================================================================================================================================================*/
typedef struct{
    volatile uint32_t EVCR;                 // Event Control Register                               - offset: 0x00
    volatile uint32_t MAPR;                 // AF Remap and Debug I/O Configuration Register        - offset: 0x04
    volatile uint32_t EXTICR[4];            // External Interrupt Configuration Register x          - offset: 0x08 - 0x14
    volatile uint32_t reserved;             // Reserved                                             - offset: 0x018
    volatile uint32_t MAPR2;                // AF Remap and Debug I/O Configuration Register 2      - offset: 0x1C
}AFIO_TypeDef;

/*====================================================================================================================================================================
 |                                       AFIO BASE ADDRESS
 =====================================================================================================================================================================*/
#define AFIO ((volatile AFIO_TypeDef *) 0x40010000UL)

/*====================================================================================================================================================================
 |                                          AFIO Mode Enum & Inline Functions
 =====================================================================================================================================================================*/
/*AF Remap and debug I/O Configuration Register*/
#define AFIO_MAPR_SWJ_CFG_POS   (24U)


/* -------------------- AFIO mode enumeration -------------------- */
typedef enum
{
    AFIO_DEBUG_FULL_SWJ = 0x0,
    AFIO_DEBUG_NO_JTAG  = 0x2,
    AFIO_DEBUG_DISABLE  = 0x4
}AFIO_Debug_Mode;

typedef enum
{
    EXTI_LINE_0 = 0,
    EXTI_LINE_1,
    EXTI_LINE_2,
    EXTI_LINE_3,
    EXTI_LINE_4,
    EXTI_LINE_5,
    EXTI_LINE_6,
    EXTI_LINE_7,
    EXTI_LINE_8,
    EXTI_LINE_9,
    EXTI_LINE_10,
    EXTI_LINE_11,
    EXTI_LINE_12,
    EXTI_LINE_13,
    EXTI_LINE_14,
    EXTI_LINE_15,
}AFIO_EXTI_LINE;

typedef enum
{
    AFIO_PORTA = 0x0U,
    AFIO_PORTB = 0x1U,
    AFIO_PORTC = 0x2U,
    AFIO_PORTD = 0x3U,
    AFIO_PORTE = 0x4U,
    AFIO_PORTF = 0x5U,
    AFIO_PORTG = 0x6U
}AFIO_PORT_Name;


/*====================================================================================================================================================================
 |                            AFIO Inline Functions
 =====================================================================================================================================================================*/
void AFIO_Init(void);
void AFIO_DebugPortConfig(AFIO_Debug_Mode mode);
void AFIO_EXTIConfig(AFIO_EXTI_LINE line, AFIO_PORT_Name port);

#endif  /*  STM32F10x_AFIO_H    */
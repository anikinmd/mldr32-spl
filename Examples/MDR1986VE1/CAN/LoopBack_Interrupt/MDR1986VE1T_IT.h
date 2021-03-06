/**
  ******************************************************************************
  * @file    MDR1986VE1T_IT.h
  * @author  Milandr Application Team
  * @version V2.0.2
  * @date    22/09/2021
  * @brief   This file contains the functions prototypes for the interrupt.
  ******************************************************************************
  * <br><br>
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, MILANDR SHALL NOT BE HELD LIABLE FOR ANY DIRECT, INDIRECT
  * OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2021 Milandr</center></h2>
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MDR1986VE1T_IT_H
#define __MDR1986VE1T_IT_H

#ifdef __cplusplus
extern "C" {
#endif

/* Function prototypes -------------------------------------------------------*/

void HardFault_Handler(void);
void CAN1_IRQHandler(void);

#ifdef __cplusplus
}
#endif

#endif /* __MDR1986VE1T_IT_H */

/******************* (C) COPYRIGHT 2021 Milandr *******************************/

/* END OF FILE MDR1986VE1T_IT.h */

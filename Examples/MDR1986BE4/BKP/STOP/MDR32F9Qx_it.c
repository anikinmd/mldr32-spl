/**
  ******************************************************************************
  * @file    MDR32F9Qx_it.c
  * @author  Milandr Application Team
  * @version V2.0.0
  * @date    10/06/2021
  * @brief   Main Interrupt Service Routines.
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

/* Includes ------------------------------------------------------------------*/
#include "MDR32F9Qx_it.h"
#include "MDR32F9Qx_port.h"

/* Private functions ---------------------------------------------------------*/

/*******************************************************************************
* Function Name  : EXT_INT3_IRQHandler
* Description    : This function handles EXT_INT3 global interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void EXT_INT2_IRQHandler(void)
{
    uint32_t i;
    if (PORT_ReadInputDataBit(MDR_PORTA, PORT_Pin_11) == 0)
    {
        PORT_SetBits(MDR_PORTA, PORT_Pin_11);
    }
    else
    {
        PORT_ResetBits(MDR_PORTA, PORT_Pin_11);
    }
    for (i = 0; i < 200000; i++);
}

/******************* (C) COPYRIGHT 2021 Milandr *******************************/

/* END OF FILE MDR32F9Qx_it.c */


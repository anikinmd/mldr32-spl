  /**
  @addtogroup MIL_STD_1553_Terminal_Device_IT MIL_STD_1553 Terminal Device for MDR1986VE1T evaluation board
  @latexonly
  @verbatim
  ******************** (C) COPYRIGHT 2021 Milandr ******************************
  * @file    readme.txt
  * @author  Milandr Application Team
  * @version V2.0.0
  * @date    11/05/2021
  * @brief   Description work of MIL_STD_1553 in Terminal Device mode.
  ******************************************************************************
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, MILANDR SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  ******************************************************************************
  @endverbatim
  @endlatexonly

@par Example Description

This example provides a description of how to use MIL STD 1553 in Terminal Device
mode.


@par Directory contains:

    - src/main.c                         Main program
    - src/MDR1986VE1T_IT.c               Main Interrupt Service Routines
    - src/MIL_STD_1553_IT_Handler.c      Main function for processing MIL_STD_1553 interrupt.
    - inc/MDR1986VE1T_IT.h               Functions prototypes for the interrupt.
    - inc/MIL_STD_1553_BusController.h   Functions prototypes.
    - inc/MIL_STD_1553_IT_Handler.h      Functions prototypes for the MIL_STD_1553 interrupt.


@par Hardware and Software environment:

    - This example is intended to run on MDR1986VE1T eval board with MDR1986VE1T microcontroller.


@par How to use.

To launch the example, you must do the following:
    - Create a project and setup all project configurations.
    - Add main.c file.
    - Add the required files from "Libraries" folder:
        MDR32F9Qx_port.c
        MDR32F9Qx_rst_clk.c
        MDR32F9Qx_timer.c
        MDR32F9Qx_mil_std_1553.c
        MDR32F9Qx_eeprom.c
        MDR32F9Qx_uart.c
    - Edit the MDR32F9Qx_config.h to set appropriate run-time parameter checking level.
    - Compile and link together all .c files and load your image into the target board.
    - Run the example.


 * <h3><center>&copy; COPYRIGHT 2021 Milandr</center></h3>
 */

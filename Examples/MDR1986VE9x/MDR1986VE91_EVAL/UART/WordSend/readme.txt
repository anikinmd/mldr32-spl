  /**
  @addtogroup UART_WordSend UART_WordSend for MDR1986VE91 evaluation board
  @latexonly
  @verbatim
  ******************** (C) COPYRIGHT 2021 Milandr ******************************
  * @file    readme.txt
  * @author  Milandr Application Team
  * @version V2.0.0
  * @date    16/07/2021
  * @brief   Description of the UART_WordSend Example.
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

This example shows how to use UART.
Configure PORTB lines 5,6 as UART1_TX,UART1_RX.
Configure PORTD lines 0,1 as UART2_RX,UART2_TX.
Configure UARTs on an exchange with 9600 Baud rate, 8 bit data size, 2 stop-bit and parity Even check.
Check TXFE flag before transmit.
UART2 transmit word.
Check RXFF flag before recive.
UART1 recive word.


@par Directory "Examples" contains:

    - main.c                  Main program


@par Hardware and Software environment:

    - This example is intended to run on MDR1986VE91 eval board with MDR1986VE91 microcontroller.
    - Pin 14 of X33.1 and Pin 22 X33.2 must be connected together.


@par How to use.

To launch the example, you must do the following:
  - Create a project and setup all project configurations.
  - Add main.c file.
  - Add the required files from "Library" folder:]
        MDR32F9Qx_config.h
        MDR32F9Qx_port.c
        MDR32F9Qx_rst_clk.c
        MDR32F9Qx_uart.c
  - Edit the MDR32F9Qx_config.h to set appropriate run-time parameter checking level.
  - Compile and link together all .c files and load your image into the target board.
  - Run the example.

 * <h3><center>&copy; COPYRIGHT 2021 Milandr</center></h3>
 */

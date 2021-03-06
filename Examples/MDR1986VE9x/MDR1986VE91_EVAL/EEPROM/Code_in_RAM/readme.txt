  /**
  @addtogroup EEPROM_Code_in_RAM EEPROM_Code_in_RAM for MDR1986VE91 evaluation board
  @latexonly
  @verbatim
  ******************** (C) COPYRIGHT 2021 Milandr ******************************
  * @file    readme.txt
  * @author  Milandr Application Team
  * @version V2.0.0
  * @date    16/07/2021
  * @brief   Description of the EEPROM_Code_in_RAM Example.
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

This example shows how to use EEPROM.
    - Erase main memory page 0
    - Word programm main memory page 0
    - Full erase information memory
    - Word programm information memory


@par Directory contains:

    - main.c              Main program


@par Hardware and Software environment:

    - This example is intended to run on MDR1986VE91 eval board with MDR1986VE91 microcontroller.
    - VD7 (LED1), VD8 (LED2), VD9 (LED3), VD10 (LED4) are connected to PD.10, PD.11, PD.12, PD.13 pins, respectively.


@par How to use.

To launch the example, you must do the following:
    - Create a project and setup all project configurations.
    - Add main.c file.
    - Add the required files from "Library" folder:
        MDR32F9Qx_config.h
        MDR32F9Qx_port.c
        MDR32F9Qx_rst_clk.c
        MDR32F9Qx_eeprom.c
    - Place EEPROM functions in RAM by defining section "EXECUTABLE_MEMORY_SECTION" as RAM section.
    - Edit the MDR32F9Qx_config.h to set appropriate run-time parameter checking level.
    - Compile and link together all .c files and load your image into the target board.
    - Run the example.

 * <h3><center>&copy; COPYRIGHT 2021 Milandr</center></h3>
 */

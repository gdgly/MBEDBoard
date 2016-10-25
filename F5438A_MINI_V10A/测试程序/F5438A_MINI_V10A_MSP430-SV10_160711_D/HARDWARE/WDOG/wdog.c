/*******************************************************************************
** 版权:     	xxxlzjxxx CO.,LTD
** 文件名:   	wdog.c
** 工作环境: 	IAR 6.10
** 工程大小:	
** 作者:     	xxxlzjxxx
** 生成日期:	2015年12月9日 
** 功能:       外部看门狗程序
								  msp430f5438a
-------------------------------------------------------------------------------
SP706R:     WDI ->P4.7
-------------------------------------------------------------------------------
** 相关器件:
            SP706REN
** 修改日志：
			
*******************************************************************************/
/*********************************包含头文件************************************/

#include "includes.h"

/******************************************************************************/
/*******************************************************************************
** Name:			void WDOG_GPIO_Init(void)
** Workspace: 		IAR 6.10 
** Designed by:	xxxlzjxxx
** Date: 			2015.12.9
** Function:		看门狗初始化
** Version:	
*******************************************************************************/
void WDOG_GPIO_Init(void) 
{ 
    WDI_DIR_OUTPUT;
    WDI_OUT_HIGH;
}
/******************************************************************************
** 函数名称：void WDOG_Init(uchar watchdog_state)
** 功    能：看门狗初始化,watchdog_state当为0时表示关闭看门狗，
**                                      当为1时表示打开看门狗，
**                                      当为2时表示复位系统.
** 修改日志：
******************************************************************************/
void WDOG_Init(uint watchdog_state)
{
  switch (watchdog_state)
  {
     case 0:
            WDTCTL = WDTPW + WDTHOLD;           // 关闭看门狗    
            break;
     case 1:
            WDTCTL = WDTPW + WDTCNTCL + WDTIS_1;   //11S的喂狗间隔时间
            break;
     case 2:
            WDTCTL = 0;                        //复位系统
            break;
     default:
       break;
  }
}




/*******************************************************************************
** 版权:     	xxxlzjxxx CO.,LTD
** 文件名:   	wdog.h
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
//******************************************************************************
#ifndef __WDOG_H
#define __WDOG_H

//*****************************************************************************
//** IO定义
//*****************************************************************************
#define   WDI_SEL_GPIO                       (P4SEL &=~BIT7)   //设置为GPIO
#define   WDI_DIR_OUTPUT                     (P4DIR |=BIT7)    //输出端口
#define   WDI_OUT_HIGH                       (P4OUT |=BIT7)    //输出高
#define   WDI_OUT_LOW                        (P4OUT &=~BIT7)   //输出低
#define   WDI_OUT_OVERTURN                   (P4OUT ^=BIT7)    //输出翻转
//*******************************************************************************
//** 函数声明
//*******************************************************************************
void WDOG_Init(uint watchdog_state);
void WDOG_GPIO_Init(void); 
//*******************************************************************************

#endif

#include "debug.h"

int main(void)
{
  NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
  SystemCoreClockUpdate();
  Delay_Init();
#if (SDI_PRINT == SDI_PR_OPEN)
  SDI_Printf_Enable();
#else
  USART_Printf_Init(115200);
#endif
  printf("SystemClk:%d\r\n",SystemCoreClock);
  printf("ChipID:%08x\r\n", DBGMCU_GetCHIPID() );

  printf("I2C test\r\n");

  while(1)
  {
  }
}

/*
 * it.c
 *
 *  Created on: 02-Jun-2025
 *      Author: Yousf
 */

#include "main_app.h"

/**
  * @brief This function handles System tick timer.
  */
void SysTick_Handler (void)
{
	HAL_IncTick();
	HAL_SYSTICK_IRQHandler();
}

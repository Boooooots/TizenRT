/* ***************************************************************************
 *
 * Copyright 2019 Samsung Electronics All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the License.
 *
 ****************************************************************************/

#include "iot_bsp_random.h"
#if CONFIG_ARCH_BOARD_ESP32_FAMILY
#include <esp_system.h>
#else
#include <stdlib.h>
#endif

unsigned int iot_bsp_random()
{
#if CONFIG_ARCH_BOARD_ESP32_FAMILY
	return esp_random();
#else
	srand(time(0));
	return rand();
#endif
}
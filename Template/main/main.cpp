#include <iostream>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "Template_Class.h"

extern "C" void app_main(void)
{
	Template_Class instance;
	int i = 0;

	while(true)
	{
		instance.run(i);
		i++;
		vTaskDelay(pdMS_TO_TICKS(1000));
	}
}	

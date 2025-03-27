#include <iostream>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "Component.h"	// import the componenet

extern "C" void app_main(void)
{
	Component component_instance;	// crate component instance

	while(true)
	{
		component_instance.run();		// 'run()' is a function that the component has
		vTaskDelay(pdMS_TO_TICKS(1000));
	}
}	

#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include "sysctl.h"
#include "gpio.h"
#include "hw_memmap.h"
#include "hw_types.h"
#include "hw_gpio.h"
#include "adc.h"
#include "pin_map.h"
#include "../inc/tm4c123gh6pm.h"

struct ADC_DATA
{
	char book;
	int i;
	
} info;


void ADC_setup(void); 
void process_ADC( struct ADC_DATA * );
void print_ADC_DATA( struct ADC_DATA * );
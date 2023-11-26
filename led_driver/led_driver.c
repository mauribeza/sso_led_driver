/*
 * led_driver.c
 * 
 * Copyright 2023  <manuelaPi@raspberrypi>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <wiringPi.h>
#include <softPwm.h>

#define LED_PIN 1

int main(void)
{
	int intensity;
	if(wiringPiSetup() == -1) {
		return 1; 
	} 
	
	pinMode(LED_PIN, OUTPUT);
	softPwmCreate(LED_PIN,1,100);
	
	while(1){
		
		for (intensity = 0 ; intensity < 101 ; ++intensity){
			softPwmWrite(LED_PIN, intensity);
			delay(10);
		}
		delay(10);
		
		for (intensity = 100 ; intensity >= 0 ; --intensity){
			softPwmWrite(LED_PIN, intensity);
			delay(10);
		}
		delay(10);
	}
	return 0;
}


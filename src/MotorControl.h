/*
 * MotorControl
 * Библиотека для управления двумя моторами двухколесных роботов
 */

#pragma once

#include <Arduino.h>

class Motors
	{
		public:

			Motors( uint8_t LeftForward , uint8_t LefrBackward, uint8_t RightForward, uint8_t RightBackward ) : LF ( LeftForward ) , LB ( LefrBackward ), RF ( RightForward ) , RB ( RightBackward ) {}

			uint8_t Move( int LeftSpeed, int RightSpeed ) ;

		protected:

			uint8_t LF, LB, RF, RB ;
	};

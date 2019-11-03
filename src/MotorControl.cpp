#include "MotorControl.h"

uint8_t Motors::Move(int LeftSpeed, int RightSpeed )
	{
		if (LeftSpeed > 255) LeftSpeed = 255;
		if (LeftSpeed < -255) LeftSpeed = -255;
		if (RightSpeed > 255) RightSpeed = 255;
		if (RightSpeed < -255) RightSpeed = -255;

		if (LeftSpeed > 0){
			analogWrite(LF, LeftSpeed);
			analogWrite(LB, 0);
		} else
		{
			analogWrite(LF, 0);
			analogWrite(LB, -1 * LeftSpeed);
		}

		if (RightSpeed > 0){
			analogWrite(RF, RightSpeed);
			analogWrite(RB, 0);
		} else
		{
			analogWrite(RF, 0);
			analogWrite(RB, -1 * RightSpeed);
		}
		
		return 1;
	}

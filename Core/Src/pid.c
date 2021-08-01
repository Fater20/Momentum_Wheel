#include "pid.h"

//float Speed_KP=0.45,Speed_KI=0.003,Speed_KD=0;
float Speed_KP=4,Speed_KI=0.01,Speed_KD=0;

int PID(float speed_Error)
{
	static float speed_LastError=0,duty_Inc=0;
	static int duty=0;
	//speed = speed*0.3;
	//speed = speed+0.7*speed_error;
	
	
	duty_Inc += (Speed_KP*(speed_Error-speed_LastError)+Speed_KI*speed_Error);
	duty = duty+duty_Inc;
	
	speed_LastError = speed_Error;
	
	if(duty>1000)
		duty=1000;
	else if(duty<-1000)
		duty=-1000;
	else;
	return (int)(duty);
}


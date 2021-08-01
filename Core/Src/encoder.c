#include "tim.h"
#include "encoder.h"

int iTim4Encoder;

int GetTim4Encoder(void)
{
    iTim4Encoder = (short)(__HAL_TIM_GET_COUNTER(&htim4));
    __HAL_TIM_SET_COUNTER(&htim4,0);
    return iTim4Encoder;
}


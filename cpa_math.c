#include <stdint.h>

#include "cpa_math.h"
#include "board.h"
#include "dual_adc.h"
#include "simple_dac.h"
#include "hard_exp.h"
#include "urv_time.h"
#include "algoritm.h"

//Сейчас библиотека не используется
//Библиотека с таблицами синуса и косинуса

float sin(int angle)
{
    float result = 0;
    switch( angle)
    {
      	case 0 : 
        result = 0;
        break;
        case 30:
        result = 0.5;
        break;
        case 45:
        result = 0.7071;
        break;
        case 60: 
        result = 0.8660;
        break;
        case 90:
        result = 1;
        break;
  
    }
    return result;
 
}

float cos(int angle)
{
    float result = 0;
    switch( angle)
    {
      	case 0 : 
        result = 1;
        break;
        case 30:
        result = 0.8660;
        break;
        case 45:
        result = 0.7071;
        break;
        case 60: 
        result = 0.5;
        break;
        case 90:
        result = 0;
        break;
  
    }
    return result;
 
}

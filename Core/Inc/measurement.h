/*
 * measurement.h
 *
 *  Created on: Oct 5, 2026
 *      Author: stephane
 */

#ifndef INC_MEASUREMENT_H_
#define INC_MEASUREMENT_H_

typedef struct
{
    float adc_average;
    float adc_voltage;
    float sensor_voltage;
    float current;
} MeasurementData_t;

#endif /* INC_MEASUREMENT_H_ */

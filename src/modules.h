#ifndef dev_modules_h
#define dev_modules_h

float read_temperature();
float read_lights();

void temp_sensor();
void light_sensor();

void run_temperature_scan();
void report_average_temperature();

#endif
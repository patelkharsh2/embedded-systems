#include <stdio.h>
#include <unistd.h>
#include <stdint.h>
#include <wiringx.h>

#include "oled_src/ssd1306.h"
#include "bmp_src/bmp280_i2c.h"

int main() {
    
    bmp280_i2c_init();
    ssd1306_i2c_init();
    ssd1306_push_string(0, 0, "Milk-V Duo", 8);
    ssd1306_push_string(0, 2, "Starting BMP Read...", 8);
    sleep(3);

    char buffer1[50];
    char buffer2[50];
   
    const int max_len = sizeof(buffer1);

    while (1) {
        struct bmp280_i2c result = read_temp_pressure();

        /*Printing results to the terminal*/
        printf("Temperature: %.2f°C/%.2f°F Pressure: %.3fkPa\n", result.temperature, result.temp_f, result.pressure);

        /*Printing results to the OLED display*/

        sprintf(buffer1, "Temp: %.2fC / %.2fF", result.temperature, result.temp_f);

        sprintf(buffer2, "Pressure: %.3f kPa", result.pressure);

        ssd1306_clear_full_screen(0);

        ssd1306_push_string(0, 0, buffer1, 8);
        ssd1306_push_string(0, 1, buffer2, 8);
        sleep(1);
        
    }

    return 0;
}


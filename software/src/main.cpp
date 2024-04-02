#include <Arduino.h>
#include "BluetoothA2DPSink.h"


BluetoothA2DPSink a2dp_sink;


void setup() {
    i2s_pin_config_t my_pin_config = {
        .mck_io_num = I2S_PIN_NO_CHANGE,
        .bck_io_num = 4,        // 26
        .ws_io_num = 15,        // 25
        .data_out_num = 2,      // 22
        .data_in_num = I2S_PIN_NO_CHANGE
    };
    a2dp_sink.set_pin_config(my_pin_config);

    a2dp_sink.start("ESP32th");
}


void loop() {
}

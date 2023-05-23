#include <HardwareSerial.h>
#define NABU_HCCA_BAUD  (111861)

HardwareSerial ESP32Serial1(1);
HardwareSerial ESP32Serial2(2);

void setup()
{
  Serial.begin(115200);
  ESP32Serial1.begin(NABU_HCCA_BAUD, SERIAL_8N2, 16, 17);  // From/To Z80
  ESP32Serial2.begin(NABU_HCCA_BAUD, SERIAL_8N2, 14, 12);  // From/To PC
  //gpio_set_drive_capability((gpio_num_t)17, GPIO_DRIVE_CAP_3);
  //gpio_set_drive_capability((gpio_num_t)12, GPIO_DRIVE_CAP_3);
}

void loop()
{
  if(ESP32Serial1.available())
  {
    uint8_t data=ESP32Serial1.read();
    ESP32Serial2.write(data);
    //Serial.printf("> %02x\r\n", data);
  }
  if(ESP32Serial2.available())
  {
    uint8_t data=ESP32Serial2.read();
    ESP32Serial1.write(data);
    //Serial.printf("< %02x\r\n", data);
  }
}

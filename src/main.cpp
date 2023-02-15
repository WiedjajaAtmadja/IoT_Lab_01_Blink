/*
ESP32-C3 12F
1 IO0 GPIO0,ADC1_CH0,XTAL_32K_N
2 IO1 GPIO1,ADC1_CH1,XTAL_32K_N
3 EN High level: chip enabled;
     Low level: chip shutdown;
     Pay attention not to leave the CHIP_PU pin floating；
4 IO2 GPIO2,ADC1_CH2,FSPIQ
5 IO3 GPIO03,ADC1_CH3
6 IO4 GPIO04,ADC1_CH4,FSPIHD,MTMS
7 IO5 GPIO05,ADC2_CH0,FSPIWP,MTDI
8 VCC VCC
9 NC NC
10 NC NC
11 NC NC
12 IO6 GPIO6,FSPICLK,MTCK
13 IO7 GPIO7,FSPID,MTDO
14 NC NC
15 GND GND
16 IO8 GPIO8
17 IO10 GPIO10,FSPICSO
18 IO9 GPIO9
19 IO18 GPIO18
20 IO19 GPIO19
21 RX UART0_RX,GPIO20
22 TX UART0_TX,GPIO21

ESP-Prog JTAG Connection
1 VDD      2 ESP_TMS
3 GND      4 ESP_TCK
5 GND      6 ESP_TDO
7 GND      8 ESP_TDI
9 GND     10 NC

ESP-Prog to ESP32-C3 12F JTAG Connection
ESP-Prog   ESP32-C3 12F
1 VDD       8 VCC
3 GND       15 GND
2 ESP_TMS    6 IO4, MTMS
4 ESP_TCK   12 IO6, MTCK
6 ESP_TDO   13 IO7, MTDO
8 ESP_TDI    7 IO5, MTDI

*/
#include <Arduino.h>
// arduino blink
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello World");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}


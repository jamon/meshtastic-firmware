// #define RADIOLIB_CUSTOM_ARDUINO 1
// #define RADIOLIB_TONE_UNSUPPORTED 1
// #define RADIOLIB_SOFTWARE_SERIAL_UNSUPPORTED 1

#define ARDUINO_ARCH_AVR

// #define EXT_NOTIFY_OUT 22
// #define BUTTON_PIN -1 // Pin 17 used for antenna switching via DIO4

// #define LED_PIN 16 // This is a LED_WS2812 not a standard LED
#define HAS_NEOPIXEL                         // Enable the use of neopixels
#define NEOPIXEL_COUNT 1                     // How many neopixels are connected
#define NEOPIXEL_DATA 16                     // gpio pin used to send data to the neopixels
#define NEOPIXEL_TYPE (NEO_GRB + NEO_KHZ800) // type of neopixels in use

// #define BATTERY_PIN 26
//  ratio of voltage divider = 3.0 (R17=200k, R18=100k)
// #define ADC_MULTIPLIER 3.1 // 3.0 + a bit for being optimistic
// #define BATTERY_SENSE_RESOLUTION_BITS ADC_RESOLUTION

#undef BATTERY_PIN
#define BATTERY_SENSE_RESOLUTION_BITS ADC_RESOLUTION

// #define HAS_CPU_SHUTDOWN 1

#define USE_SSD1306
#define KB_POWERON 10                  // must be set to HIGH
#define KB_SLAVE_ADDRESS TDECK_KB_ADDR // 0x55
#define KB_BL_PIN 46                   // not used for now
#define CANNED_MESSAGE_MODULE_ENABLE 1

// RADIO
#define USE_SX1262
#define SX126X_MAX_POWER 22

#undef LORA_SCK
#undef LORA_MISO
#undef LORA_MOSI
#undef LORA_CS

// SPI0
#define LORA_MISO 4
#define LORA_CS 5
#define LORA_SCK 6
#define LORA_MOSI 7


#define LORA_DIO1 26
// #define LORA_TXEN 27
#define LORA_RESET 28

#define LORA_DIO0 RADIOLIB_NC
#define LORA_DIO2 RADIOLIB_NC
#define LORA_DIO3 RADIOLIB_NC
#define LORA_DIO4 RADIOLIB_NC
#define LORA_BUSY 8

#ifdef USE_SX1262
#define SX126X_CS LORA_CS
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY LORA_BUSY
#define SX126X_RESET LORA_RESET
// #define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_RXEN RADIOLIB_NC
#define SX1262_TXEN 27
// #define SX126X_DIO3_TCXO_VOLTAGE 1.8
#endif

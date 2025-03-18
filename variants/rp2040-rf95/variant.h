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

#define USE_RF95 // RFM95/SX127x

#undef LORA_SCK
#undef LORA_MISO
#undef LORA_MOSI
#undef LORA_CS

// SPI1
// #define LORA_CS 9
// #define LORA_SCK 10
// #define LORA_MOSI 11
// #define LORA_MISO 12

#define USE_SSD1306
#define KB_POWERON 10                  // must be set to HIGH
#define KB_SLAVE_ADDRESS TDECK_KB_ADDR // 0x55
#define KB_BL_PIN 46                   // not used for now
#define CANNED_MESSAGE_MODULE_ENABLE 1

// trackball
// #define HAS_TRACKBALL 1
// #define TB_UP 3
// #define TB_DOWN 15
// #define TB_LEFT 1
// #define TB_RIGHT 2
// #define TB_PRESS 0 // BUTTON_PIN


// SPI0
#define LORA_MISO 4
#define LORA_CS 5
#define LORA_SCK 6
#define LORA_MOSI 7


#define LORA_RESET 8

#define LORA_DIO0 2
#define LORA_DIO1 3
#define LORA_DIO2 RADIOLIB_NC

// #define LORA_DIO2 4
// #define LORA_DIO3 5
// #define LORA_DIO4 6
// #define LORA_DIO5 7

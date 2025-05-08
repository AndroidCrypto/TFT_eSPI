// Setup for ESP32 and ST7735 128 x 160 TFT on S3 Supermini
#define USER_SETUP_ID 702

#define ST7735_DRIVER

#define TFT_WIDTH  128
#define TFT_HEIGHT 160

//#define ST7735_INITB
//#define ST7735_GREENTAB // this is working but gives some 2 pixel remainings from older printings
//#define ST7735_GREENTAB2
//#define ST7735_GREENTAB3
//#define ST7735_GREENTAB128    // For 128 x 128 display
// #define ST7735_GREENTAB160x80 // For 160 x 80 display (BGR, inverted, 26 offset)
#define ST7735_REDTAB // this is working correctly!
//#define ST7735_BLACKTAB
// #define ST7735_REDTAB160x80   // For 160 x 80 display with 24 pixel offset
// #define ST7735_GREENTAB160x80 // gives some results

// For ST7735, ST7789 and ILI9341 ONLY, define the colour order IF the blue and red are swapped on your display
// Try ONE option at a time to find the correct colour order for your display

#define TFT_RGB_ORDER TFT_RGB  // Colour order Red-Green-Blue
//#define TFT_RGB_ORDER TFT_BGR  // Colour order Blue-Green-Red

// FSPI port will !!! NOT !!! be used unless the following is defined
// define USE_HSPI_PORT for pins 10-13 and USE_FSPI_PORT for pins (34)-37
#define USE_HSPI_PORT    // HSPI
//#define USE_FSPI_PORT  // FSPI

// ESP32-S3        HSPI 
#define TFT_CS     9 
#define TFT_MOSI   12 // = SDA 
#define TFT_SCLK   13 
#define TFT_MISO   14 // Not connected, GPIO is on solder pads
#define TFT_DC      10
//#define TFT_BL    8    // LED back-light
#define TFT_RST     11 // Set TFT_RST to -1 if display RESET is connected to ESP32 board EN

#define LOAD_GLCD   // Font 1. Original Adafruit 8 pixel font needs ~1820 bytes in FLASH
#define LOAD_FONT2  // Font 2. Small 16 pixel high font, needs ~3534 bytes in FLASH, 96 characters
#define LOAD_FONT4  // Font 4. Medium 26 pixel high font, needs ~5848 bytes in FLASH, 96 characters
#define LOAD_FONT6  // Font 6. Large 48 pixel font, needs ~2666 bytes in FLASH, only characters 1234567890:-.apm
#define LOAD_FONT7  // Font 7. 7 segment 48 pixel font, needs ~2438 bytes in FLASH, only characters 1234567890:.
#define LOAD_FONT8  // Font 8. Large 75 pixel font needs ~3256 bytes in FLASH, only characters 1234567890:-.
//#define LOAD_FONT8N // Font 8. Alternative to Font 8 above, slightly narrower, so 3 digits fit a 160 pixel TFT
#define LOAD_GFXFF  // FreeFonts. Include access to the 48 Adafruit_GFX free fonts FF1 to FF48 and custom fonts

#define SMOOTH_FONT


//#define SPI_FREQUENCY  20000000
#define SPI_FREQUENCY  27000000 // Actually sets it to 26.67MHz = 80/3

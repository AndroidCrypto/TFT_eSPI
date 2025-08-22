// See SetupX_Template.h for all options available
#define USER_SETUP_ID 703

#define ST7789_DRIVER

#define TFT_WIDTH  240
#define TFT_HEIGHT 320

//#define CGRAM_OFFSET      // Library will add offsets required

//#define TFT_RGB_ORDER TFT_RGB  // Colour order Red-Green-Blue
#define TFT_RGB_ORDER TFT_BGR  // Colour order Blue-Green-Red

#define TFT_INVERSION_ON
//#define TFT_INVERSION_OFF
//#define TFT_BACKLIGHT_ON 1

// The ESP32 has 2 free SPI ports i.e. VSPI and HSPI, the VSPI is the default.
// If the VSPI port is in use and pins are not accessible (e.g. TTGO T-Beam)
// then uncomment the following line:
#define USE_HSPI_PORT

#define TFT_BL   13 // LED back-light
#define TFT_MISO 19 // 19 | not used/connected.
#define TFT_MOSI 33 // = SDA
#define TFT_SCLK 32 //  
#define TFT_CS   27 // 
#define TFT_DC   26 // 
#define TFT_RST  25 // Set TFT_RST to -1 if display RESET is connected to ESP32 board EN

#define LOAD_GLCD    // Font 1. Original Adafruit 8 pixel font needs ~1820 bytes in FLASH
#define LOAD_FONT2   // Font 2. Small 16 pixel high font, needs ~3534 bytes in FLASH, 96 characters
#define LOAD_FONT4   // Font 4. Medium 26 pixel high font, needs ~5848 bytes in FLASH, 96 characters
#define LOAD_FONT6   // Font 6. Large 48 pixel font, needs ~2666 bytes in FLASH, only characters 1234567890:-.apm
#define LOAD_FONT7   // Font 7. 7 segment 48 pixel font, needs ~2438 bytes in FLASH, only characters 1234567890:.
#define LOAD_FONT8   // Font 8. Large 75 pixel font needs ~3256 bytes in FLASH, only characters 1234567890:-.
#define LOAD_GFXFF   // FreeFonts. Include access to the 48 Adafruit_GFX free fonts FF1 to FF48 and custom fonts

#define SMOOTH_FONT

// TFT SPI clock frequency
// #define SPI_FREQUENCY  20000000
// #define SPI_FREQUENCY  27000000
//#define SPI_FREQUENCY  40000000
//#define SPI_FREQUENCY  55000000
#define SPI_FREQUENCY  80000000

// Optional reduced SPI frequency for reading TFT
//#define SPI_READ_FREQUENCY  16000000
//#define SPI_READ_FREQUENCY  20000000

// SPI clock frequency for touch controller
//#define SPI_TOUCH_FREQUENCY  2500000

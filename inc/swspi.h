// Tyto makra upravujte podle pot�eby 
#define DIN_GPIO 	GPIOC
#define DIN_PIN 	GPIO_PIN_7
#define CS_GPIO 	GPIOC
#define CS_PIN 		GPIO_PIN_6
#define CLK_GPIO 	GPIOC
#define CLK_PIN 	GPIO_PIN_1

void swspi_init(void);
void swspi_tx16(uint16_t data);

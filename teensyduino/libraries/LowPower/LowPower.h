#ifndef LowPower_h
#define LowPower_h

#ifndef __AVR__
#error "This LowPower library only works on AVR processors"
#endif

enum period_t
{
	SLEEP_15Ms,
	SLEEP_30MS,	
	SLEEP_60MS,
	SLEEP_120MS,
	SLEEP_250MS,
	SLEEP_500MS,
	SLEEP_1S,
	SLEEP_2S,
	SLEEP_4S,
	SLEEP_8S,
	SLEEP_FOREVER
};

enum bod_t
{
	BOD_OFF,
	BOD_ON
};

enum adc_t
{
	ADC_OFF,
	ADC_ON
};

enum timer2_t
{
	TIMER2_OFF,
	TIMER2_ON
};

enum timer1_t
{
	TIMER1_OFF,
	TIMER1_ON
};

enum timer0_t
{
	TIMER0_OFF,
	TIMER0_ON
};

enum spi_t
{
	SPI_OFF,
	SPI_ON
};

enum usart0_t
{
	USART0_OFF,
	USART0_ON
};

enum twi_t
{
	TWI_OFF,
	TWI_ON
};

class LowPowerClass
{
	public:

	
		void	idle(period_t period, adc_t adc, timer2_t timer2, 
					 timer1_t timer1, timer0_t timer0, spi_t spi,
					 usart0_t usart0, twi_t twi);
		void	adcNoiseReduction(period_t period, adc_t adc, timer2_t timer2);
		void	powerDown(period_t period, adc_t adc, bod_t bod);
		void	powerSave(period_t period, adc_t adc, bod_t bod, timer2_t timer2);
		void	powerStandby(period_t period, adc_t adc, bod_t bod);
		void	powerExtStandby(period_t period, adc_t adc, bod_t bod, timer2_t timer2);
};

extern LowPowerClass LowPower;
#endif

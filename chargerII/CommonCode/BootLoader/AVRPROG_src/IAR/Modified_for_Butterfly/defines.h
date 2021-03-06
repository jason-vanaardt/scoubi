/* definitions generated by preprocessor, copy into defines.h */		
#ifndef	PPINC	
#define	_ATMEGA169	// device select: _ATMEGAxxxx
#define	_B1024	// boot size select: _Bxxxx (words), powers of two only
#include	"iom169.h"	

/* define pin for enter-self-prog-mode */		
#define	PROGPORT	PORTB
#define	PROGPIN	PINB
#define	PROG_NO	PB4

/* baud rate register value calculation */		
#define	CPU_FREQ	4000000
#define	BAUD_RATE	19200
#define	BRREG_VALUE	12

/* definitions for UART control */		
#define	BAUD_RATE_LOW_REG	UBRR0L
#define	UART_CONTROL_REG	UCSR0B
#define	ENABLE_TRANSMITTER_BIT	TXEN0
#define	ENABLE_RECEIVER_BIT	RXEN0
#define	UART_STATUS_REG	UCSR0A
#define	TRANSMIT_COMPLETE_BIT	TXC0
#define	RECEIVE_COMPLETE_BIT	RXC0
#define	UART_DATA_REG	UDR0

/* definitions for SPM control */		
#define	SPMCR_REG	SPMCSR
#define	PAGESIZE	128
#define	APP_END	14336
//#define	LARGE_MEMORY	

/* definitions for device recognition */		
#define	PARTCODE	0x79
#define	SIGNATURE_BYTE_1	0x1E
#define	SIGNATURE_BYTE_2	0x94
#define	SIGNATURE_BYTE_3	0x05

/* indicate that preprocessor result is included */		
#define	PPINC	
#endif		

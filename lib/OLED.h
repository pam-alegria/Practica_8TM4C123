#ifndef OLED_OLED_H_
#define OLED_OLED_H_

// Function declarations
void OLED_Command( uint8_t temp);
void OLED_Data( uint8_t  temp);
void OLED_Init();
void OLED_YX(unsigned char Row, unsigned char Column); // *warning!* max 4 rows
void OLED_PutChar( char ch );
void OLED_Clear();
void OLED_Write_String( char *s );
void OLED_Write_Integer(uint8_t  i);
void OLED_Write_Float(float f);
void Delay_ms(int time_ms);

// Function prototypes initialize, tranmit and rea functions 
void I2C3_Init(void);  
static int I2C_wait_till_done(void);
char I2C3_Write_Multiple(int slave_address, char slave_memory_address, int bytes_count, uint8_t* data);
char I2C3_Wr(int slaveAddr, char memAddr, uint8_t data);

#endif 
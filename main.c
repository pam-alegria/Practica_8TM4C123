#include "lib/include.h"

int main(void)
{
	 I2C3_Init();
	 OLED_Init();
	 OLED_Clear();
     Configurar_PLL(_20MHZ);
    
    // variables for counting
    int count = 0;
    //float dec = 0.0;

        while ( 1 ) {
            
            /////////////////////
            // Strings
            ///////////////////
        
    
             OLED_YX( 0, 0 );
             
             OLED_Write_String( "OLED SSD1306" );

             Delay_ms(1000);

             OLED_YX(1, 0);
             OLED_Write_String ("TM4C123");
             Delay_ms(1000);

             OLED_YX(2, 0);
             OLED_Write_String ("Leo&Pam");
             Delay_ms(1000);

            /////////////////////
            // Integer Count
            ////////////////////
            
            
                        
            //OLED_Clear();
            
            Delay_ms(100);
            
          
   }
}

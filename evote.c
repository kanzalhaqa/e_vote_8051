#include <MicroLABlet.h>
declare_output_port=0x00;
sbit buzzer_control = P3^5;
sbit disp1_enable= P3^6 ;
sbit disp2_enable=P3^7 ;
sbit disp1_disable= P3^6 ;
sbit disp2_disable=P3^7 ;
static char array_counter, length, fps, higher_nibble, lower_nibble;
void main(void)
 {
//Hex code to display 0-9 digit //
static unsigned char hexcode_digit[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F,0x77,0x7C,0x58,0x5E,0x79,0x71};

P1=declare_output_port;
buzzer_control = 1; //to turn off buzzer //
length=sizeof(hexcode_digit)/sizeof(unsigned char);
while(1)
 {
 for (array_counter=0x00; array_counter<=0xFF; array_counter++)
 {
 higher_nibble=array_counter/10;
 lower_nibble=array_counter%10;
 for(fps=0;fps<=50;fps++)
 {
 disp1_enable=1;
 disp2_disable=0;
 P1= hexcode_digit [higher_nibble];
 delay(10);
 disp1_disable=0;
 disp2_enable=1;
 P1= hexcode_digit [lower_nibble];
 delay(10);
 }
 }
 }
 }

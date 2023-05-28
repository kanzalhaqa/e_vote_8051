sbit disp1_enable=P3^6 ;
sbit disp2_enable=P3^7 ;
sbit disp1_disable=P3^6 ;
sbit disp2_disable=P3^7 ;
void display(unsigned char display_value)
{
static unsigned char
hexcode_digit[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
static unsigned char fps,higher_nibble,lower_nibble;
higher_nibble=display_value/10;
lower_nibble=display_value%10;
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
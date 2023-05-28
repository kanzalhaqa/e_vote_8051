unsigned char key_value,count_1=0,count_2=0;
unsigned char readkey()
 {
while(1)
 {
 P2=0x7F;
 if(P2==0x77)
 {count_1++;
 return key_value;}
 if(P2==0x7B)
 {count_2++;
 return key_value;}
 if(P2==0x7D)
 {key_value=count_2;;
 return key_value;}
 if(P2==0x7E)
 {key_value=count_1;
 return key_value;}
P2=0xBF;
if(P2==0xB7)
 {key_value=4;
 return key_value;}
 if(P2==0xBB)
 {key_value=5;
 return key_value;}
 if(P2==0xBD)
 {key_value=6;
 return key_value;}
 if(P2==0xBE)
 {key_value=7;
 return key_value;}
P2=0xDF;
 if(P2==0xD7)
 {key_value=8;
 return key_value;}
if(P2==0xDB)
 {key_value=9;
 return key_value;} 
 if(P2==0xDD)
 {key_value=0x0a;
 return key_value;}
 if(P2==0xDE)
 {key_value=0x0b;
 return key_value;}
P2=0xEF;
 if(P2==0xE7)
 {key_value=0x0c;
 return key_value;}
 if(P2==0xEB)
 {key_value=0x0d;
 return key_value;}
 if(P2==0xED)
 {key_value=0x0e;
 return key_value;}
 if(P2==0xEE)
 {key_value=0x0f;
 return key_value;}
}
 }
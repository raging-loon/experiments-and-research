#include <stdio.h>

#define SPI_DEBUG     0b00000001
#define RULE_DEBUG    0b00000010
#define DECODE_DEBUG  0b00000011
int main(){
  unsigned int basestatus = 0b11111111;
  unsigned int status = SPI_DEBUG | RULE_DEBUG;
  unsigned int temp_status = status & basestatus;
  printf("0x%02x\n",(status & basestatus) );
  if(temp_status | DECODE_DEBUG == DECODE_DEBUG){
    printf("Decode Debugging enbaled\n");
  }
}
#include <stdio.h>
#include <wiringPi.h>

#define LED  11
int main (void){
    printf ("Raspberry Pi blink\n");
    wiringPiSetupGpio ();
    pinMode(LED, OUTPUT);
    for(int x=0;x<5;x++){
        digitalWrite(LED,HIGH);
        delay(500);
        digitalWrite(LED,LOW);
    }
    return 0;
}

#include <Conceptinetics.h>
#include <Rdm_Defines.h>
#include <Rdm_Uid.h>
#include <Servo.h>

//defines the channels and pins
//How many channels does it need?
#define SLAVE_CHANNELS 1
#define RXEN_PIN       3

Servo servo;

DMX_Slave dmx_slave ( SLAVE_CHANNELS , RXEN_PIN );

void setup() {
  dmx_slave.onReceiveComplete(OnFrameReceiveComplete);
  //Enabled and setup the dmx slave object
  dmx_slave.enable();
  //Start address for the slave
  dmx_slave.setStartAddress(295);
  servo.attach(9);
}

void loop() {
    
}
void OnFrameReceiveComplete()
{
  servo.write(dmx_slave.getChannelValue(1));
}

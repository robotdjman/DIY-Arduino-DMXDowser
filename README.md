# DIY Dowser
This repo is a DIY arduino based DMX projector dowser. Using a DMX shield, servo, and the DMXSimple arduino library this system will listen to a determined address and the first channel.

## Hardware
First you will need a DMX shield for the arduino mine was the DMX_Shield_for_Arduino-CQR0260
The jumpers should be in the following positions(for a DMX slave) where the '-' represents the jumper:

EN    0-0 0 (not)EN
Slave 0 0-0 DE
TX-IO 0 0-0 TX-uart
RX-IO 0 0-0 RX-uart

## Software
The code supplied in the .io

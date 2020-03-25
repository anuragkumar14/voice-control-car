# voice-control-car
A car which moves according to the voice commands given. if the command given is 10 forward it will move  10 cm in forward direction.
The integral part of the robot under discussion is voice control, whose basic block is Speech Recognition. Speech recognition is a technology where the system understands the words (not its meaning) given through speech.
   
WORKING:
The communication between the robot and the android application is carried over by the Bluetooth link between the phone’s Bluetooth and the Bluetooth device in the Robot. The ASCII commands are sent from the phone to the Robot which in turn checked by the Arduino for the control of the wheels according to the commands to move the robot in the desired direction.

The basic idea behind the working of the robot is to create a menu driven control, i.e. the robot performs actions based on specified keywords.

For example, when the speaker gives an input like the following, the output of robot will be-

   1) 10 Forward – moves forward by 10cm
   2) 15 Back – moves back by 15cm
   3) 10 Right – turns right and the moves forward by 10 cm
   4) 20 Left – turns left and the moves forward by 10 cm

Components used:
1. Arduino UNO
2. Bluetooth HC-05
3. L293D motor driver
4. Two-wheel chassis
5. Two dc motors
6. 9V battery
7. Jumper wires
8. Mini breadboard
9. Speed sensor with encoder wheel








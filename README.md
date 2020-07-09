# Call-via-IOT-device-using-SIM800L-module
<h3>Arduino code to make a call from IOT Device (Arduino UNO microcontroller) using SIM800L module and a sim card.</h3>
<br/>
<h4>Requirements</h4>

• Arduino UNO<br/>
• SIM800L Module<br/>
• Sim Card (2G/3G/4G)<br/>
• jumping wires for connection.
<br/><br/>
<h4>Arduino UNO connection with SIM800L</h4>

![alt text](https://i0.wp.com/miliohm.com/wp-content/uploads/2018/03/wiring-diagram-v1.png?resize=500%2C381)
<br/><br/>
<h4>NOTE: SIM800L module utilizes the 2G network bandwidth which means sim cards of LTE network providers like JIO won't work</h4>
Insert you 2G/3G/4G SIM in the SIM800L module. To get a unfluctuating network make sure to soldier the jumping wires to the pins of the sim card module. The red light on the module will start blinking.<br/><br/>

Blink every 1s - The module is running but hasn’t made connection to the cellular network yet.<br/>
Blink every 3s - The module has made contact with the cellular network & can send/receive voice and SMS.
<br/><br/>
When it starts to blink every 3s you are good to go.

# NorthernNomadHouse 4<sup>th</sup> Year Project #

<h3>Meeting#1 Friday, September 14th (12:30 pm to 2:30 pm) Topics: </h3>

 - Speak to Prof. Bucking about his visions & Objectives for the following term.
 
 - **Device List:**
   - **Raspberry Pi:** running Home Assistant & connected to various sensors.
   - **Amazon Alexa:** attempt to connect to HA, or consider replacing/not using Amazon Alexa.
   - **Eco-Bee:** Smart Thermostat connected to house AC/Heat.
   - **Solar Panels:** to generate electricity to charge the Batteries in the house.
   - **Dehumidifiers:** used to harvest water from exterior.
   
 - Determine which devices in the house are IOT devices and which ones need to be ported to the Home Assistant Software.
 - Use Home Assistant to determine whether the house reaches it's Net Zero Energy & Water consumption goals.

<h3>Meeting#2 Thursday, October 11th (2:30 pm to 4:00 pm) Topics:</h3>

 - 
<h3>Meeting Wednesday, October 17th (6:30 pm 7:30 pm) Topics:</h3>
- This was the meeting we had in the Tiny House
- All six team members, along with the graduate students involved with the construction of the house
- Discussed the state of the house (what is finished/in progress/not implemented) and how we could make use of the technology in the house for the project
- Discussed the goals of the graduate students and what they felt would be best for us to focus our efforts on
- Ted is not setup (not sure if it will be ready for us)
- EV charger / monitoring solar charge and battery output?
- Wall sensors are setup to read, but that's a thing in itself
- Unimplemented systems
  - EV chargers (need to be put in), but reading from it isn't likely. Would have to simulate the outputs
  - Battery management system (how the lithium ion batteries are performing). Connected into shnider solar ecosystem (pannel to batteries, inverter charger for batteries to house, then electrical grid to batteries). All of it goes to central place (Xanbus) and ideally works with the TED
  - Solar pannel draw measured through the Xanbus
  - Water storage is not implemented (and the generation of it with machine that captures moisture)
- Pecking order of what is most ready to go / work on
  - No logging data from the TED (so that data would be useful to log as it's good for bux fixing)
- have a wink (zigbee protocol)
- have a zwave stick (poorly incorporated to homeassistant)
  - home auto mation protocol (e.g. radio frequencies from switches or visa versa)
  - mesh network
- hue bulbs zigbee
- dimmers are zwave
- on/off switches are IP based (http)
- the lock is secured zwave (lock but not unlock)


<h3>Meeting#3 Tuesday, November 6th (1:30 pm to 2:15 pm) Topics:</h3>

<h3>Meeting#4 Tuesday, November 13th (1:30 pm to 2:00 pm) Topics:</h3>

<h3>Meeting#5 Tuesday, November 20th (1:30 pm to 2:00 pm) Topics:</h3>

<h3>Meeting#6 Tuesday, November 27th (1:30 pm to 2:00 pm) Topics:</h3>

 - Discuss possible changes for the project after learning on Sunday that the house does not have power due to code compliance issues.
 
 - Possibly buying several **IOT devices** & connecting to Home Assistant (proof of concept):
   - Temperature/Humidity Sensors
   - Smoke Alarm/Carbon Monoxide Sensors
   - Security Cameras
   - Motion Detectors
   - Window/Door Contact Sensors
   - Philips Hue Lights (or other similar product)

<h3>Meeting#7 Tuesday, December 4th (1:30 pm to 2:00 pm) Topics:</h3>

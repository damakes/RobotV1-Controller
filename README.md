# Robotti Auto
![botti](https://github.com/damakes/mini-auto/assets/155246347/b6081ab0-3842-4863-ae00-a87a89d628dd) 

Robotti autoa ohjataan käyttäjän antamien komentojen avulla MODULAAR-sovelluksen kautta, joka on kehitetty <br>Android-ympäristössä [MIT App](https://appinventor.mit.edu/) Inventor:ssa. Bluetooth-yhteys mahdollistaa kommunikoinnin robotin ja puhelimen välillä. 
 
![ohjainapp](https://github.com/damakes/mini-auto/assets/155246347/6e5affbb-17b3-466c-b5bc-5f6a45ccc198) ![nälym222](https://github.com/damakes/mini-auto/assets/155246347/2ffd9399-2c18-492c-8c5e-87fd176e2fb8)

HC-SR04 ultraäänisensorin mittaamat etäisyydet välitetään reaaliaikaisesti puhelimen näytölle, kuinka lähellä tai kaukana este on robotista.
Käyttäjä voi määrittää HC-SR04 ultraäänisensorin suunnan (x, y) koordinaatistossa. Näitä suuntakomentoja voidaan käyttää ohjaamaan sensorin tarkkailusuuntaa.

Auton Ohjaus
-
	'F' : Eteenpäin.
	'B' : Taaksepäin.
	'R' : Kääntyy oikealle.
	'L' : Kääntyy vasemmalle.
	'S' : Liike pysähtyy.
	'P' : pan-kulmaa + 5 astetta  (MAX 180 astetta).
	'p' : pan-kulmaa - 5 astetta  (MIN 0 astetta).
	'T' : tilt-kulmaa + 5 astetta (MAX 180 astetta).
	't' : tilt-kulmaa - 5 astetta (MIN 0 astetta).

Projektissa on käytetty seuraavia komponentteja:
-
	UNO R3 Controller: 1 kpl
	L298P Shield: 1 kpl
	V5 Sensor Shield: 1 kpl
	HC-SR04 Ultrasonic Sensor: 1 kpl
	Bluetooth Module (HC-06): 1 kpl
	Servo Motor: 2 kpl
	DC Motor: 2 kpl
<br>Komponentit valmistanut [Keyestudio](https://wiki.keyestudio.com/Main_Page).
<br>Robotti Auton liike on toteutettu [Arduino IDE:llä](https://wiki-content.arduino.cc/en/software) / Tämä löytyy myös Microsoft storesta.



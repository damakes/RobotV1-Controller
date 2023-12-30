# Robotti Auto
Robotti autoa ohjataan käyttäjän antamien komentojen avulla MODULAAR-sovelluksen kautta, joka on kehitetty Android-ympäristössä MIT App Inventorissa. Bluetooth-yhteys mahdollistaa kommunikoinnin robotin ja puhelimen välillä. 

![botti](https://github.com/damakes/mini-auto/assets/155246347/b6081ab0-3842-4863-ae00-a87a89d628dd)

## Komponentit
-
        UNO R3 Controller: 1 kpl
        L298P Shield: 1 kpl
        V5 Sensor Shield: 1 kpl
        HC-SR04 Ultrasonic Sensor: 1 kpl
        Bluetooth Module (HC-06): 1 kpl
        Servo Motor: 2 kpl
        DC Motor: 2 kpl

HC-SR04 ultraäänianturi mittaa ympäristön etäisyyksiä, ja tulokset näkyvät käyttäjän laitteessa.
Käyttäjä voi määrittää HC-SR04 ultraäänisensorin suunnan (x, y) koordinaatistossa. Näitä suuntakomentoja voidaan käyttää ohjaamaan sensorin tarkkailusuuntaa.

Pan-Tilt-Järjestelmä:
-
        'P' : pan-kulmaa + 5 astetta  (MAX 180 astetta).
        'p' : pan-kulmaa - 5 astetta  (MIN 0 astetta).
        'T' : tilt-kulmaa + 5 astetta (MAX 180 astetta).
        't' : tilt-kulmaa - 5 astetta (MIN 0 astetta).


Robotti Auton Liike:
-
        'F' : Eteenpäin.
        'B' : Taaksepäin.
        'R' : Kääntyy oikealle.
        'L' : Kääntyy vasemmalle.
	'S' : Liike pysähtyy.


HC-SR04 ultraäänisensorin mittaamat etäisyydet välitetään reaaliaikaisesti puhelimen näytölle, kuinka lähellä tai kaukana este on robotista.


![ohjainapp](https://github.com/damakes/mini-auto/assets/155246347/6e5affbb-17b3-466c-b5bc-5f6a45ccc198)

![nälym](https://github.com/damakes/mini-auto/assets/155246347/fa6f8a26-cadf-40a6-88a9-c1b4a91540a9)

![nälym222](https://github.com/damakes/mini-auto/assets/155246347/2ffd9399-2c18-492c-8c5e-87fd176e2fb8)







<br>Komponentit: [Keyestudio](https://wiki.keyestudio.com/Main_Page) 
<br>Ohjelmisto: [Arduino](https://wiki-content.arduino.cc/en/software) / Tämä löytyy myös Microsoft storesta
<br>Aplikaatio : [MIT App Inventor](https://appinventor.mit.edu/) 

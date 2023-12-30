# Ohjattava Auto 

Tämä projekti hyödyntää Arduinoon mikrokontrollerin kehitysjärjestelmää, sekä ulkoista ohjainjärjestelmää. 
---
## Sisällysluettelo 
1. Projektin esittely
2. Tekniset tiedot ja Komponentti lista 
3. Osien testaus
4. Kytkentä
5. Rakenne
6. Liike koodi
7. Ohjain  
8. Ohjaus
9. Bluetooth
10. Haasteet
11. Lähteet
---


## Projektin esittely


### <a title="Keyestudio &lt;https://www.keyestudio.com/&gt;, via wiki.keyestudio" href="https://www.keyestudio.com/"><img width="30" alt="Keyestudio" src="https://ueeshop.ly200-cdn.com/u_file/UPAH/UPAH808/2101/photo/2877ffdbbb.jpg?x-oss-process=image/format,webp"></a> Keyestudio Ks0071 

Keyestudion Ks0071 on Arduino-pohjainen mikrokontrollerin oppimissovellus, joka sisältää ultraäänienestotoiminnon ja Bluetooth-kauko-ohjauksen. 

<a title="Keyestudio Ks0071 &lt;https://www.keyestudio.com/&gt;, via wiki.keyestudio" href="https://www.keyestudio.com/"><img width="200" alt="Keyestudio Ks0071" src="https://wiki.keyestudio.com/images/3/3b/711.png?20160922021327"></a>

Sarjaan kuuluu monia mielenkiintoisia ohjelmia, ja sitä voi laajentaa ulkoisilla piirimoduuleilla. Tämä auttaa oppimaan Arduinoa hauskalla tavalla ja kehittämään MCU-kehityskykyjä.

### Parametrit

1. Moottorin parametrit: moottori: 6V, 150rpm/min 
2. Käytä moottorin ohjaukseen L298P-ajurimoduulia.
3. Varustettu ultraäänimoduulilla, voi havaita, onko edessä esteitä, ja säiliörobotin ja esteiden välinen etäisyys esteiden välttämistoiminnon toteuttamiseksi.
4. Varustettu langattomalla Bluetooth-moduulilla, voi kauko-ohjata robottia matkapuhelimen Bluetooth-pariliitoksen jälkeen.
5. Voidaan liittää ulkoiseen 7 ~ 12 V virtalähteeseen; erilaisilla anturimoduuleilla se voi toteuttaa erilaisia toimintoja.

### komponennti lista 


<a title="Keyestudio component &lt;https://www.keyestudio.com/keyestudio-diy-mini-tank-smart-robot-car-kit-for-arduino-robot-education-programmingmanualpdfonline5-projects-p0625.html&gt;, via Commons.Wikimedia" href="https://www.keyestudio.com/keyestudio-diy-mini-tank-smart-robot-car-kit-for-arduino-robot-education-programmingmanualpdfonline5-projects-p0625.html"><img width="500" alt="DIY Mini Tank Smart Robot car kit" src="https://ueeshop.ly200-cdn.com/u_file/UPAH/UPAH808/2004/products/29/d3e96ad534.jpg.640x640.jpg?x-oss-process=image/format,webp"></a>

keyestudio UNO R3 Controller * 1
keyestudio L298P Shield  * 1
keyestudio V5 Sensor Shield * 1
HC-SR04 Ultrasonic Sensor * 1
keyestudio Bluetoot h Module (HC-06) * 1
Metal Holder * 4
Plastic Platform *1
Servo Motor (black)* 1
Transparent Acrylic Board * 1
Tank Driver Wheel *2
Tank Load-bearing Black Wheel * 2
Caterpillar Band (Black)       * 2
Metal Motor* 2
Copper Coupler * 2
18650 2-cell Battery Case *1
USB Cable (1m) *        1
Copper Bush * 2
Flange Bearing * 4
Hexagon Copper Bush (M3*10MM) *8
Hexagon Copper Bush (M3*45MM) * 4
M3*10MM Flat Head Screw * 4
Inner Hexagon Screw (M3*8MM) * 25
Inner Hexagon Screw (M3*25MM) * 6
Inner Hexagon Screw (M4*35MM) * 5
Inner Hexagon Screw (M4*50MM) * 3
Inner Hexagon Screw (M4*12MM) * 5
M3 Nut * 4
M4 Self-locking Nut * 3
M4 Nut * 15
Black Wire(150mm) *2
Red Wire(150mm) *2
Black Wire(200mm) *2
Black Wire(200mm) *2
F-F Dupont Wire (20CM, 4Pin) * 1
Supporting Part (27*27*16MM, Blue) * 2
Winding Wire * 1
Slotted Screwdriver (2.0*40MM Blue &Black) *1
Phillips Screwdriver (2.0*40MM Purple &Black) *1
Nylon Cable Ties * 4
Inner Hexagonal Wrenc h (L-type M1.5) * 1
Inner Hexagonal Wrenc h (L-type M2.5) * 1
Inner Hexagonal Wrenc h (L-type M3) * 1
Tapping Screw (M1.2*5MM) * 6



---

## <a title="Bluetooth &lt;https://commons.wikimedia.org/wiki/File:Bluetooth.svg&gt;, via Commons.Wikimedia" href="https://commons.wikimedia.org/wiki/File:Bluetooth.svg"><img width="17" alt="Bluetooth" src="https://upload.wikimedia.org/wikipedia/commons/thumb/d/da/Bluetooth.svg/393px-Bluetooth.svg.png?20220108225131"></a> Projekti 4: Bluetooth-ohjaus

Bluetooth-viestintään perustuva ohjattava järjestelmä, johon sisältyy ohjelmisto- ja laitteistosuunnittelu. Ohjainosa on UNO-levy. Bluetooth-moduulia käytetään vastaanottamaan Bluetooth-signaalia matkapuhelimesta ja palauttamaan signaali UNO:lle. UNO analysoi signaalin määrittää ja ohjaa moottoreiden liikettä auton liikkumissuunnan säätämiseksi. Siksi säiliörobottia voidaan ohjata matkapuhelimella.

## Järjestelmän toiminta 

1. Bluetooth-moduuli on liitetty UNO:hon; moduuli kommunikoi matkapuhelimen kanssa Bluetooth APP:n kautta.
2. Matkapuhelimen Bluetooth APP välittää tiedot "U""D""L""R""S" Bluetooth-moduuliin.
3. Bluetooth-moduuli välittää tiedot UNO:lle, joten UNO voi määrittää auton liikkeen saatujen tietojen perusteella.
4. Kun UNO vastaanottaa "U", auto menee suoraan eteenpäin; kun se vastaanottaa "D", auto menee taaksepäin; "L" tarkoittaa kääntymistä vasemmalle; "R" tarkoittaa kääntymistä oikealle; ja "S" tarkoittaa pysähtymistä.

## Bluetooth-käyttö

Kytke pääkortin +5V Bluetooth VCC:hen, GND Bluetooth GND:hen, TX Bluetooth RX:hen ja RX Bluetooth TX:hen.
Muista avata Bluetooth puhelimessasi; kun avaat Bluetooth APP, se muistuttaa sinua. pariliitä Bluetooth-laite puhelimessasi, etsi ja pariliitä.
Pariliitä laite, PIN-numero on 1234.
Avaa Bluetooth APP ja pariliitä Bluetooth-laite. Kun se on pariliitetty, Bluetooth-moduuli voi kommunikoida matkapuhelimen kanssa.

### Kaavio ja kytkentäkaavio

<a title="Schematic and Connection Diagram &lt;https://wiki.keyestudio.com/Ks0071_keyestudio_Mini_Tank_Robot&gt;, via WikiKeystudio Ks0071" href="https://wiki.keyestudio.com/Ks0071_keyestudio_Mini_Tank_Robot"><img width="2000" alt="kaavio" src="https://wiki.keyestudio.com/images/thumb/b/b9/Ks0071_2-3.png/750px-Ks0071_2-3.png"></a>


<a title="Schematic and Connection Diagram &lt;https://wiki.keyestudio.com/images/thumb/7/74/74.png/800px-74.png?20170213024659&gt;, via WikiKeystudio Ks0071" href="https://wiki.keyestudio.com/images/thumb/7/74/74.png/800px-74.png?20170213024659"><img width="2000" alt="Kaavio" src="https://wiki.keyestudio.com/images/thumb/7/74/74.png/800px-74.png?20170213024659"></a>







### MODULAAR Ohain App
Kehitin Android mobiilisovelluksen, sivulla MIT App Inventor. Ohjainsovellus toimii Bluetooth yhteyden avulla, sovelluksella lähetetään komentoja autolle: ’B’,F’,’L’,’R’,’S’,’P’  ja vastaanotetaan tietoa HC-SR04 ultraäänisensorilta puhelimen näytölle. 













## Näytekoodi via keyestudio


## Haasteet

## komponenntien testaus 

## Kehitys 

## Lähteet

<br>Komponentit: [Keyestudio](https://wiki.keyestudio.com/Main_Page) 
<br>Kuvat: [Keyestudio](https://wiki.keyestudio.com/Main_Page) / [Smart Car](https://wiki.keyestudio.com/Category:Smart_Car)
<br>Ohjelmisto: [Arduino](https://wiki-content.arduino.cc/en/software) / Tämä löytyy myös Microsoft storesta
<br>Aplikaatio : [MIT App Inventor](https://appinventor.mit.edu/) 
<br>Wikimedia.[Commons](https://commons.wikimedia.org/wiki/Main_Page)

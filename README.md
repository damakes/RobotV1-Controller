### Robotti Auto

Robotti auto liikkuu siten, että käyttäjän antamat käskyt välitetään matkapuhelimen "MODULAAR" sovelluksen kautta Bluetooth yhteydellä Arduino UNO -ohjainlevylle.
liikkuu eteen, taakse, oikealle, vasemmalle, sekä HC-SR04 ultraäänianturi mittaa etäisyyttä ja näyttää tulokset käyttäjän laitteessa. 


### MODULAAR app
Kehitin Android-mobiilisovelluksen MIT App Inventorissa, joka toimii Bluetooth-yhteyden avulla. Sovelluksella lähetetään komentoja autolle ('B', 'F', 'L', 'R', 'S', 'P') ja vastaanotetaan tietoa HC-SR04 ultraäänisensorilta puhelimen näytölle.



Modulaarinen Ohjainsovellus

Kehitin Android-mobiilisovelluksen MIT App Inventorissa. Ohjainsovellus käyttää Bluetooth-yhteyttä, lähettää komentoja autolle ja näyttää HC-SR04 ultraäänisensorin tiedot puhelimen näytöllä.


Bluetooth-moduuli on liitetty UNO:han, ja se kommunikoi matkapuhelimen kanssa Bluetooth-sovelluksen kautta.
Matkapuhelimen Bluetooth-sovellus välittää tiedot 'B', 'F', 'L', 'R', 'S', 'P' Bluetooth-moduulille.
Bluetooth-moduuli välittää tiedot UNO:lle, jotta UNO voi määrittää auton liikkeen saatujen tietojen perusteella.

Robotti auto liikkuu eteen, taakse, oikealle ja vasemmalle, kun HC-SR04 ultraäänianturi mittaa etäisyyttä ja näyttää tulokset käyttäjän laitteessa. Kehitin Android-mobiilisovelluksen MIT App Inventorissa, joka toimii Bluetooth-yhteyden avulla. Sovelluksella lähetetään komentoja autolle ('B', 'F', 'L', 'R', 'S', 'P') ja vastaanotetaan tietoa HC-SR04 ultraäänisensorilta puhelimen näytölle.


##Komponentit
---
    UNO R3 Controller: 1 kpl
    L298P Shield: 1 kpl
    V5 Sensor Shield: 1 kpl
    HC-SR04 Ultrasonic Sensor: 1 kpl
    Bluetooth Module (HC-06): 1 kpl
    Servo Motor: 2 kpl
    DC Motor: 2 kpl
---
![ohjainapp](https://github.com/damakes/mini-auto/assets/155246347/6e5affbb-17b3-466c-b5bc-5f6a45ccc198)

![nälym](https://github.com/damakes/mini-auto/assets/155246347/fa6f8a26-cadf-40a6-88a9-c1b4a91540a9)

![nälym222](https://github.com/damakes/mini-auto/assets/155246347/2ffd9399-2c18-492c-8c5e-87fd176e2fb8)

![botti](https://github.com/damakes/mini-auto/assets/155246347/b6081ab0-3842-4863-ae00-a87a89d628dd)





<br>Komponentit: [Keyestudio](https://wiki.keyestudio.com/Main_Page) 
<br>Ohjelmisto: [Arduino](https://wiki-content.arduino.cc/en/software) / Tämä löytyy myös Microsoft storesta
<br>Aplikaatio : [MIT App Inventor](https://appinventor.mit.edu/) 

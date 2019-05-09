# 3 užduotis

* **v1.1**
Pasirinkau deque tipo konteinerį, nes geriausiai matosi laiko skirtumai.

Naudojant deque tipo konteinerį su Studentas klase:

![](https://user-images.githubusercontent.com/45967745/55881503-74493200-5bab-11e9-811a-4f40fcd8618a.JPG)

Skirtumai tarp *Studentas* struktūros ir klasės:

**Tipas /Studentų skaičius**|10 000|100 000
|---|:---:|---|
**Rūšiavimo laikas (sekundėmis)** - tipas *deque* - **Studentas struktūra**|2,132|208,309|
**Rūšiavimo laikas (sekundėmis)** - tipas *deque* - **Studentas klasė**|2,202|205,962|


Programos veikimas naudojant skirtingus kompiliatoriaus optimizavimo lygius:

![](https://user-images.githubusercontent.com/45967745/55881733-e4f04e80-5bab-11e9-8852-38fcd51012f3.JPG)
![](https://user-images.githubusercontent.com/45967745/55881734-e588e500-5bab-11e9-92cf-cc9eb4fcea8e.JPG)
![](https://user-images.githubusercontent.com/45967745/55881738-e752a880-5bab-11e9-8b82-ede2a9f64e05.JPG)

**Tipas /Studentų skaičius**|10 000|100 000
|---|:---:|---|
**Rūšiavimo laikas (sekundėmis)**- Studentas klasė (**be optimizavo flag'o**) | 1,656|202,048|
**Rūšiavimo laikas (sekundėmis)**- Studentas klasė (**optimizavo flag'as - O1**) | 0,321|38,58|
**Rūšiavimo laikas (sekundėmis)**- Studentas klasė (**optimizavo flag'as - O2**) | 0,304|33,54|
**Rūšiavimo laikas (sekundėmis)**- Studentas klasė (**optimizavo flag'as - O3**) | 0,237|36,658|

___
* **v1.2**
Sukurti operatoriai : 

![](https://user-images.githubusercontent.com/45967745/56970723-6fefb380-6b70-11e9-8917-8e0876a25030.png)
____
* **v1.5**
Sukurta base klasė **Žmogas**, kurios derived klasė **Studentai**. Iš **Studentai** klasės perkėliau *string vardas,string pavardė, ir testo set funkciją* į **Žmogas** klasę.

![](https://user-images.githubusercontent.com/45967745/57059413-e64dfc00-6cbd-11e9-9ec5-00bb2a333050.png)
![](https://user-images.githubusercontent.com/45967745/57061035-2fa14a00-6cc4-11e9-86cf-1908f4a980c2.png)
![](https://user-images.githubusercontent.com/45967745/57061080-52cbf980-6cc4-11e9-8f3c-ab7072ab0337.png)
____
* **v2.0**
Panaudojus Doxygen wizard susikūrė doxygen katalogas (vienas iš html failų):

![](https://user-images.githubusercontent.com/45967745/57312504-5d3c2800-70f6-11e9-8cea-eb38fa11a8a6.JPG)

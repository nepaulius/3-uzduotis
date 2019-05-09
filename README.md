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
Panaudojus **Doxygen** wizard susikūrė doxygen katalogas (vienas iš html failų):

![](https://user-images.githubusercontent.com/45967745/57312504-5d3c2800-70f6-11e9-8cea-eb38fa11a8a6.JPG)

Naudojau **Catch** unit testus nustatyti ar funkcijos veikia atitinkamai

![](https://user-images.githubusercontent.com/45967745/57439314-69d39400-724e-11e9-9ca1-43a5074fd325.png)

![](https://user-images.githubusercontent.com/45967745/57439283-5b857800-724e-11e9-9efd-57109b263712.png)

![](https://user-images.githubusercontent.com/45967745/57439366-8a9be980-724e-11e9-85f7-c9e3d5cb8884.png)

![](https://user-images.githubusercontent.com/45967745/57439341-7b1ca080-724e-11e9-9d58-db3c8b41d187.png)

![](https://user-images.githubusercontent.com/45967745/57439425-a901e500-724e-11e9-8a4d-79f8b83a825e.png)

![](https://user-images.githubusercontent.com/45967745/57439402-9d162300-724e-11e9-9fd0-7398af38fbee.png)




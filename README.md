# Calculate-PI-Number

## Explication mathématique 

Il existe une méthode simple mais longue (et peu précise) pour calculer une valeure approchée de PI.<br>
Il s'agit de la méthode de [Monte-Carlo](https://fr.wikipedia.org/wiki/M%C3%A9thode_de_Monte-Carlo).

Cette méthode consiste à prendre un carré de côté R et un cercle inscrit dans ce carré de rayon R/2.

On place ensuite un point à un endroit aléatoire dans ce carré.<br>
Calculons la probabilitée que ce point soit dans le cercle.<br>
Appelons C l'évènement "Le point est dans le cercle".

$$P(C) = \frac{Aire\ du\ cercle}{Aire\ du\ carré}$$<br>

$$P(C) = \frac{(\frac{1}{2}R)^2PI}{R^2}$$<br>

$$P(C) = \frac{PI}{4}$$<br>

On se rends compte que la probabilité d'avoir un points dans le cerle est de $\frac{PI}{4}$.<br>
Il suffit alors de génerer un grand nombre de points et de regarder si ils sont dans le cercle.<br>
On divisera ensuite le nombre de points dans le cercle par le nombre de points total, puis on multipliera par 4 ce nombre.

Après avoir généré 150'000'000 points j'ai trouvé, PI = 

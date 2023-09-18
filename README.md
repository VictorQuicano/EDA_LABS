
# LABORATORIOS DEL CURSO DE EDA


En este repositorio se adjuntaran los laboratorios del curso de Estructra de Datos Avanzados.


## Profesora 

- Prof. Rosa Yuliana Gabriela Paccotacya Yanque


## Laboratorio 1: La maldición de la dimensionalidad

['Informe en PDF'](https://github.com/VictorQuicano/EDA_LABS/blob/main/Lab_01/LABORATORIO1.pdf)

### Objetivo
El objetivo de este laboratorio es analizar cómo el espacio cambia a medida que la dimensionalidad  (cantidad de atributos o features ) de los datos aumenta y cuán desafiante esto puede ser.
### Descripción del laboratorio

Realizaremos diversos experimentos en C++ donde trabajaremos con conjuntos de datos de  diferentes dimensiones (10, 50, 100, 500, 1000, 2000, 5000). Para cada conjunto de datos de determinada dimensión d se debe:

1. Generar 100 puntos aleatorios entre 0 y 1 de dimensión d.
2. Calcular la distancia entre todos los pares de puntos (Distancia Euclidiana)
3. Generar un histograma (pueden usar Python) de las distancias obtenidas.
### Sobre el código

#### Instrucciones
Ejecutar primero **graficador.py**, este ya contiene las dimensiones en las que se trabajará. En caso de ya tener las distancias, se puede ignorar de la línea 6 a la 13.

#### Funcionamiento
1. **graficador.py** usando el OS compila y ejecuta el código en **GenNumeros.cpp**
2. **GenNumeros.cpp** recibe una lista de argumento, los que serán las dimensiones, ya está preconfigurada para trabajr con 1000 puntos
3. La función **genPuntoDimension** retorna un vector con flotantes aleatorios entre 0 y 1 con la dimension que se entrega. **main** itera entre las dimensiones y genera un vector con 1000 puntos aleatorios de **genPuntoDimension**, luego con **calcularDistancias** se retorna un vector de floats con las distancias calculadas y ordenadas.
4. Finalmente, main retorna en un archivo *.txt* todas las distancias.
5. **graficador.py** lee todos los archivos retornados por **GenNumeros.cpp**, y a partir de ccada uno genera el histograma y lo almacena en una imagen *.png* con el mismo nombre. 

### Resultados obtenidos
![Histo_10](https://github.com/VictorQuicano/EDA_LABS/blob/main/Lab_01/histograma10.png?raw=true)
![Histo_50](https://github.com/VictorQuicano/EDA_LABS/blob/main/Lab_01/histograma50.png?raw=true)
![Histo_100](https://github.com/VictorQuicano/EDA_LABS/blob/main/Lab_01/histograma100.png?raw=true)
![Histo_500](https://github.com/VictorQuicano/EDA_LABS/blob/main/Lab_01/histograma500.png?raw=true)
![Histo_1000](https://github.com/VictorQuicano/EDA_LABS/blob/main/Lab_01/histograma1000.png?raw=true)
![Histo_2000](https://github.com/VictorQuicano/EDA_LABS/blob/main/Lab_01/histograma2000.png?raw=true)
![Histo_5000](https://github.com/VictorQuicano/EDA_LABS/blob/main/Lab_01/histograma5000.png?raw=true)


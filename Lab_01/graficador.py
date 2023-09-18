import os
import matplotlib.pyplot as plt

# Ejecuta el programa GenNumeros.cpp con las dimensiones especificadas
dimensiones = [10, 50, 100, 500, 1000, 2000, 5000]
#comandos que se enviaran al cmd
nombreArchivo = "GenNumeros.cpp"
comando = "g++ " + nombreArchivo + " -o " + nombreArchivo[:-4] + ".exe" 
comando2 = nombreArchivo[:-4] + ".exe"
for d in dimensiones:
    comando2 += " " + str(d) #se envia al .cpp tambien los argumentos que seran las dimensiones
os.system(comando)
os.system(comando2)

#Así generamos los archivos de entrada que hemos de examinar para generar el código de los gráficos
############################################
# SECCIÓN EXCLUSIVA PARA EL HISTOGRAMA
for d in dimensiones:
    # Se leerá cada uno de los archivos de entrada
    direccion = 'distancias'+str(d)+'.txt'
    with open(direccion,'r') as f:
        lineas = f.readlines()
    distancias = []
    # Se anadde las distancias a una lista
    for linea in lineas:
        distancias.append(float(linea.rstrip('\n')))
    f.close()
    #Se genera el histograma
    plt.hist(distancias,color='blue',edgecolor='black',bins=10,)
    ticks = [0.0]
    for i in range(1,8):
        ticks.append(ticks[-1]+distancias[-1]/8)
    ticks.append(distancias[-1])
    plt.xticks(ticks)
    plt.xlim(0,distancias[-1])
    plt.xlabel('Distancia aproximada')
    plt.ylabel('Frecuencia')
    plt.title('Histograma de distancias con dimension ' + str(d))
    plt.savefig('histograma'+str(d)+'.png')
    plt.close()
    # Para comprobar si el histograma se ha generado correctamente
    print("HISTOGRAMA CON DIMENSION " + str(d) + " GENERADO")
    #plt.show()


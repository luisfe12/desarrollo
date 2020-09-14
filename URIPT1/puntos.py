import math


x1, y1 = [float(x1,y1) for x1 in raw_input().split()] 
x2, y2 =[float(x2,y2) for x2 in raw_input().split()]
val1 = x2 - x1
val2 = y2 -y1

Distancia = math.sqrt(pow(x2-x1, 2) + pow(y2-y1, 2))

print("{:.4f}".format(Distancia))

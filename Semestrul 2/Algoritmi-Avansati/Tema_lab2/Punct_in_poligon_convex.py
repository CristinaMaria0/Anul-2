#calculam orientarea triunghiului format de cele 3 punte
#daca produsul vectorial este pozitiv ->p3 in stanga, negativ->in dreapta
def orientare(p1, p2, p3):
    valoare = (p2[1] - p1[1]) * (p3[0] - p2[0]) - (p2[0] - p1[0]) * (p3[1] - p2[1])
    if valoare == 0:
        return 0
    elif valoare > 0:
        return 1
    else:
        return -1

#impartim poligonul in triunghiuri
def pozitie(poligon, punct):
    n = len(poligon)
    stanga = 1
    dreapta = n - 1
#cautam triunghiul in care se afla punctul dat

    while dreapta - stanga > 1:
        mijloc = (stanga + dreapta) // 2
        if orientare(poligon[0], poligon[mijloc], punct) == 1:
            dreapta = mijloc
        else:
            stanga = mijloc
    if orientare(poligon[stanga], poligon[dreapta], punct) == 0:
        return "BOUNDARY"
    elif orientare(poligon[dreapta], poligon[stanga], punct) == -1:
        return "OUTSIDE"
    else:
        return "INSIDE"

n = int(input())
poligon = []
for i in range(n):
    x, y = map(int, input().split())
    poligon.append((x, y))
m = int(input())
for i in range(m):
    x, y = map(int, input().split())
    punct = (x, y)
    print(pozitie(poligon, punct))
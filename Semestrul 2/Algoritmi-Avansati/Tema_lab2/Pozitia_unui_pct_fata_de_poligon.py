#calculam determinantul matricei
def getDet(a, b, c):
    return b[0]*c[1] + a[0]*b[1] + c[0]*a[1] - b[0]*a[1] - a[0]*c[1] - c[0]*b[1]
#verif daca q se afla pe dreapta formata de p r
def onSegment(p, q, r):
    if q[0] <= max(p[0], r[0]) and q[0] >= min(p[0], r[0]) and q[1] <= max(p[1], r[1]) and q[1] >= min(p[1], r[1]):
        return True
    return False

poligon = []

n = int(input().strip())
for i in range(n):
    x, y = map(int, input().split())
    poligon.append((x, y))
poligon.append(poligon[0])

m = int(input().strip())
for i in range(m):
    x, y = map(int, input().split())
#verif daca punctul e pe latura poligonului
    if getDet(poligon[0], poligon[n - 1], (x, y)) == 0 and onSegment(poligon[0], (x, y), poligon[n - 1]):
        print("BOUNDARY")
        continue

    if getDet(poligon[0], poligon[1], (x, y)) == 0 and onSegment(poligon[0], (x, y), poligon[1]):
        print("BOUNDARY")
        continue
#luam primul si ultimul punct din poligon si verif daca punctul dat e pe linia care le uneste
    last, first = n - 2, 2
    ok = False
    while getDet(poligon[0], poligon[last + 1], poligon[last]) == 0:
        if getDet(poligon[0], poligon[last], (x, y)) == 0 and onSegment(poligon[0], (x, y), poligon[last]):
            print("BOUNDARY")
            ok = True
            break
        last -= 1

    while getDet(poligon[0], poligon[first - 1], poligon[first]) == 0:
        if getDet(poligon[0], poligon[first], (x, y)) == 0 and onSegment(poligon[0], (x, y), poligon[first]):
            print("BOUNDARY")
            ok = True
            break
        first += 1

    if ok:
        continue
# parcurgem laturile poligonului pt a determina daca puntul e in interiorul/exteriorul poligonului

    l, r = 0, n - 1
    while r - l > 1:
        mid = (l + r) // 2

        if getDet(poligon[0], poligon[mid], (x, y)) < 0:
            r = mid
        else:
            l = mid

    if getDet(poligon[l], poligon[l + 1], (x, y)) == 0 and onSegment(poligon[l], (x, y), poligon[l + 1]):
        print("BOUNDARY")
    elif getDet(poligon[l], poligon[l + 1], (x, y)) > 0:
        print("INSIDE")
    else:
        print("OUTSIDE")
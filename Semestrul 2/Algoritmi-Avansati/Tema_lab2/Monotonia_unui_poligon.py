
n = int(input())
punct = [int(i) for i in input().split()]

lista = [punct]
stanga, dreapta, sus, jos = punct, punct, punct, punct
index_stanga, index_dreapta, index_sus, index_jos = 0, 0, 0, 0
xMonoton, yMonoton = True, True

#identificam cele mai indepartate puncte (st/dr/sus/jos)
for i in range(1, n):
    punct = [int(i) for i in input().split()]
    lista.append(punct)
    if punct[0] < stanga[0]:
        stanga = punct
        index_stanga = i
    if punct[0] > dreapta[0]:
        dreapta = punct
        index_dreapta = i
    if punct[1] < jos[1]:
        jos = punct
        index_jos = i
    if punct[1] > sus[1]:
        sus = punct
        index_sus = i

lista.append(lista[0])
#verif daca poligonul e y-monoton
i = index_jos + 1
while i % n != index_sus:
    if lista[i % n][1] < lista[(i - 1) % n][1]:
        yMonoton = False
        break
    i = i + 1
#pornim de la punctul cel mai de jos și parcurgem punctele
#în ordine crescătoare a ordinatelor, și apoi invers
if yMonoton:
    i = index_jos - 1
    while i != index_sus:
        if i == -1:
            i = n - 1
        if i == index_sus:
            break
        if lista[i][1] < lista[(i + 1) % n][1]:
            yMonoton = False
            break
        i = i - 1

i = index_stanga + 1
while i % n != index_dreapta:
    if lista[i % n][0] < lista[(i - 1) % n][0]:
        xMonoton = False
        break
    i = i + 1

if xMonoton:
    i = index_stanga - 1
    while i != index_dreapta:
        if i == -1:
            i = n - 1
        if i == index_dreapta:
            break
        if lista[i][0] < lista[(i + 1) % n][0]:
            xMonoton = False
            break
        i = i - 1

if xMonoton:
    print("YES")
else:
    print("NO")

if yMonoton:
    print("YES")
else:
    print("NO")
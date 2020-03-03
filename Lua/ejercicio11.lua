print("Inserte la fecha de hoy en formato D/M/A")
d,m,a = tonumber(io.read()),tonumber(io.read()),tonumber(io.read())
meses = {31,0,31,30,31,30,31,31,30,31,30,31}
assert(d<=meses[m] and m<13,"Fecha invalida")
d=d+1
if a%4 == 0 then meses[2] = 29 else meses[2] = 28 end
if d > meses[m] then d=1;m=m+1 end
if m > 12 then m=1;a=a+1 end
print(("La fecha de manana es %d/%d/%d"):format(d,m,a))
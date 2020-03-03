function read(n)
  local a = {}
  for b=n,1,-1 do
    table.insert(a,tonumber(io.read()))
  end
  return unpack(a)
end
function sort(a,b)
  return a<b
end
function nsort(a,b)
  return a>b
end
function checkeq(t) --Es una burbuja, muy inefectivo, pero no me molestare en implementar algo mejor
  for i,v in ipairs(t) do
    for i1,v1 in ipairs(t) do
      if i~=i1 then
        for i2,v2 in ipairs(t) do
          if (v+v1==v2) then
            print(("Iguales: %s+%s=%s"):format(v,v1,v2));return
          end
        end
      end
    end
  end
  print("Diferentes")
end

print("ADVERTENCIA: Si desea deducir si estos numeros son iguales segun su pareja o no, preparar una lista muy amplia puede causar que el programa sea lento!")
print("Introduzca cuantos numeros desea ordenar")
inp=tonumber(io.read())
print("Introduzca "..inp.." numeros en cualquier orden dado")
a={read(inp)}
table.sort(a,sort)
if (inp>3) then
  if (inp%2==0) then
    local c = inp/2
    print(("Numeros centrales: %s & %s"):format(a[c],a[c+1]))
  else
    print(("Numero central: %s"):format(a[math.ceil(inp/2)]))
  end
end
print("Numero mayor: "..a[#a])
local str1 = "Lista de numeros ascendente: "
local str2 = "Lista de numeros descendente: "
local str3 = "Lista de numeros positivos: "
local str4 = "Lista de numeros negativos: "
local str5 = "Lista de numeros mayores a 100: "
for i,v in ipairs(a) do
  str1=str1..("%s "):format(v)
end
print(str1)
table.sort(a,nsort)
for i,v in ipairs(a) do
  str2=str2..("%s "):format(v)
end
print(str2)
for i,v in ipairs(a) do
  if v > -1 then 
    str3=str3..("%s "):format(v)
  elseif v > 100
    str5=str5..("%s "):format(v)
  else
    str4=str4..("%s "):format(v)
  end
end
print(str3);print(str4);print(str5)
print("Desea deducir si estos numeros son iguales segun su pareja? Responda SI si asi lo desea, cualquier otra cosa causara que el programa termine.")
if io.read()=="SI" then checkeq(a)
else
  print("Esta seguro? Responda SI si quiere deducir, cualquier otra cosa causara que el program termine.")
  if io.read()=="SI" then checkeq(a) end
end
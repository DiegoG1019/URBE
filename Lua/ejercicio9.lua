function round(num, numDecimalPlaces)
  local mult = 10^(numDecimalPlaces or 0)
  return math.floor(num * mult + 0.5) / mult
end
print("Produzca la cantidad y el valor del articulo que desea comprar")
qn,pr = tonumber(io.read()),tonumber(io.read())
a = qn*pr;a=round(a*((100-12)/100),2)
if a > 100 then
  print(("El precio bruto de su compra es de %sBs., se le sera aplicado un descuento del 7%%, llevando el precio a %sBs."):format(a,round(a*((100-7)/100)),2))
else
  print("El precio bruto de su compra es de %sBs.")
end
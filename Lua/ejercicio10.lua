print("Por favor inserte la distancia de su pasaje y sus dias de estadia")
d,t = tonumber(io.read()),tonumber(io.read())
p=d*0.75
if d > 800 and t > 7 then
  print("Su pasaje es apto para recibir un descuento del 30%, sera registrado automaticamente.")
  p=p*((100-30)/100)
end
print("El precio de su pasaje es de "..p.."Bs..")
function round(num, numDecimalPlaces)
  local mult = 10^(numDecimalPlaces or 0)
  return math.floor(num * mult + 0.5) / mult
end

print("Introduzca su peso en libras")
local i = tonumber(io.read())
assert(type(i)=="number","Entrada invalida, no es un numero.")
print(("Su peso en kilogramos es igual a: ~%skg"):format(round(i*0.453592,2)))
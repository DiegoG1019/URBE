print("Introduzca su nombre, el tiempo que trabajo, y el costo de sus horas de trabajo, separados por una linea.")
local name,time,salary = io.read(),tonumber(io.read()),tonumber(io.read())
print(("El empleado %s recibira un salario neto de %s con impuestos incluidos."):format(name,(time*salary)*0.9))
# 141, Суптеля Владислав
# Дата: 20.02.20
# 18. Розв'язати лінійне рівняння A · x + B = 0, задане своїми коефіцієнтами A і B (коефіцієнт A НЕ дорівнює 0).

print("Умова: Розв'язати лінійне рівняння A · x + B = 0.")
a, b = map(int, input("Значення「A」,「B」: ").split())
print("【X】 = {0}".format(-b/a))

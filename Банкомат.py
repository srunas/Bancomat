x = int(input("Введите число: "))
tisyaca = x // 1000
sotni = x//100
sotni = sotni % 10
desatki = x//10
desatki = desatki % 10
edinici = x % 10
if tisyaca == 1:
    tisyaca = str('тысяча')
elif tisyaca == 2:
    tisyaca = str('две тысячи')
elif tisyaca == 3:
    tisyaca = str('три тысячи')
elif tisyaca == 4:
    tisyaca = str('четыре тысячи')
elif tisyaca == 5:
    tisyaca = str('пять тысяч')
elif tisyaca == 6:
    tisyaca = str('шесть тысяч')
elif tisyaca == 7:
    tisyaca = str('семь тысяч')
elif tisyaca == 8:
    tisyaca = str('восемь тысяч')
else:
    tisyaca = str('девять тысяч')
if sotni == 1:
    sotni = str("сто")
elif sotni == 2:
    sotni = str("двесте")
elif sotni == 3:
    sotni = str("триста")
elif sotni == 4:
    sotni = str("четыресто")
elif sotni == 5:
    sotni = str("пятьсот")
elif sotni == 6:
    sotni = str("шестьсот")
elif sotni == 7:
    sotni = str("семьсот")
elif sotni == 8:
    sotni = str("восемьсот")
else:
    sotni = str("девятьсот")
if edinici == 1 and int(desatki) >= 2:
    edinici = str('один рубль')
elif edinici == 2 and int(desatki) >= 2:
    edinici = str('два рубля')
elif edinici == 3 and int(desatki) >= 2:
    edinici = str('три рубля')
elif edinici == 4 and int(desatki) >= 2:
    edinici = str('четыре рубля')
elif edinici == 5 and int(desatki) >= 2:
    edinici = str('пять рублей')
elif edinici == 6 and int(desatki) >= 2:
    edinici = str('шесть рублей')
elif edinici == 7 and int(desatki) >= 2:
    edinici = str('семь рублей')
elif edinici == 8 and int(desatki) >= 2:
    edinici = str('восемь рублей')
elif edinici == 9 and int(desatki) >= 2:
    edinici = str('девять рублей')
elif edinici == 0 and int(desatki) >= 1:
    edinici = ("")
if edinici == 0:
    if desatki == 1 and edinici == 0:
        desatki = str('десять рублей')
    elif desatki == 2 and edinici == 0:
        desatki = str('двадцать рублей')
    elif desatki == 3 and edinici == 0:
        desatki = str('тридцать рублей')
    elif desatki == 4 and edinici == 0:
        desatki = str('сорок рублей')
    elif desatki == 5 and edinici == 0:
        desatki = str('пятьдесят рублей')
    elif desatki == 6 and edinici == 0:
        desatki = str('шестьдесят рублей')
    elif desatki == 7 and edinici == 0:
        desatki = str('семьдесят рублей')
    elif desatki == 8 and edinici == 0:
        desatki = str('восемьдесят рублей')
    elif desatki == 9 and edinici == 0:
        desatki = str('девятосто рублей')
if desatki == 1 and edinici == 1:
    desatki = str('одинацать рублей')
elif desatki == 1 and edinici == 2:
    desatki = str('двенадцать рублей')
elif desatki == 1 and edinici == 3:
    desatki = str('тринадцать рублей')
elif desatki == 1 and edinici == 4:
    desatki = str('четырнадцать рублей')
elif desatki == 1 and edinici == 5:
    desatki = str('пятьнадцатьрублей')
elif desatki == 1 and edinici == 6:
    desatki = str('шеснадцать рублей')
elif desatki == 1 and edinici == 7:
    desatki = str('семьнадцать рублей')
elif desatki == 1 and edinici == 8:
    desatki = str('восемьнадцать рублей')
elif desatki == 1 and edinici == 9:
    desatki = str('девятнадцать рублей')
else:
    if desatki == 1:
        desatki = str('десять')
    elif desatki == 2:
        desatki = str('двадцать')
    elif desatki == 3:
        desatki = str('тридцать')
    elif desatki == 4:
        desatki = str('сорок')
    elif desatki == 5:
        desatki = str('пятьдесят')
    elif desatki == 6:
        desatki = str('шестьдесят')
    elif desatki == 7:
        desatki = str('семьдесят')
    elif desatki == 8:
        desatki = str('восемьдесят')
    elif desatki == 9:
        desatki = str('девятосто')
print(str.capitalize(str(tisyaca) + " " + str(sotni) + " " + str(desatki) + " " + str(edinici)))
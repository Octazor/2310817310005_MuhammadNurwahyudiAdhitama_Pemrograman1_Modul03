a = int(input("Input: "))

if a < 10 and a > 0:
    print("Satuan")
elif a == 0:
    print("Nol")
elif a >= 100:
    print("Anda Menginput Melebihi Limit Bilangan")
elif a >= 10 and a < 20:
    print("Belasan")
elif a >= 20:
    print("Puluhan")

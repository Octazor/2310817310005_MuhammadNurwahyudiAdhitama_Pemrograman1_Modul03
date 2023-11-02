totalDetik = int(input("Masukkan total detik: "))

if totalDetik < 0:
    print("Total detik tidak boleh negatif.")
else:
    hari = totalDetik // 86400
    totalDetik %= 86400
    jam = totalDetik // 3600
    totalDetik %= 3600
    menit = totalDetik // 60
    detik = totalDetik % 60

    if hari > 0:
        print(f"{hari} hari ", end="")

    print(f"{jam:02d}:{menit:02d}:{detik:02d}")

gunnar = raw_input('').split()
emma = raw_input('').split()
res_gunnar = sum(map(int, gunnar))
res_emma = sum(map(int, emma))

if res_gunnar > res_emma:
    print("Gunnar")
elif res_gunnar == res_emma:
    print("Tie")
else:
    print("Emma")

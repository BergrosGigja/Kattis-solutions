from math import ceil

tree = raw_input().split()
nodes = int(tree[1])
end = int(tree[0])
depth = int(tree[2])

find = []
for x in range(depth):
    temp = raw_input().split()
    find.append(temp)

for x in find:
    length = 0
    a = int(x[0]) + 0.0
    b = int(x[1]) + 0.0
    while a != b:
        if a > b:
            a = ceil((a - 1)/nodes)
            length += 1
        elif b > a:
            b = ceil((b - 1)/nodes)
            length += 1
    print(length)

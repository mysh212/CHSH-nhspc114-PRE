# Author : ysh
# 2025/05/04 Sun 12:37:32
f = [[] for _ in range(10 ** 5)]
for _ in range(int(input())):
    a, b, c = input().split()
    b = int(b)
    if a == '1':
        f[b - 1].append(c)
    else:
        c = int(c)
        if len(f[b - 1]) <= c - 1:
            print('''oh can't find anything...''')
            continue
        print(f[b - 1][c - 1])

quit()
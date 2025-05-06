# Author : ysh
# 2025/05/04 Sun 12:26:00
_, k = [int(i) for i in input().split()]
pre = [0 for _ in range(26)]
ans = 1
for i in input():
    now = ord(i) - ord('a')
    pre[now] += 1
    if pre[now] > k:
        ans = ans + 1
        pre = [1 if i == now else 0 for i in range(26)]

print(ans)
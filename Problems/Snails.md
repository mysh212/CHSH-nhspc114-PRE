## **F. 蝸蝸牛牛** ***<font color = '#AAAAAA'> Snails </font>***

`time limit` 1s
`memory limit` 256MB

### ***Statement***

蝸蝸和牛牛在二維平面上移動。給定牠們的初始位置和各自的移動序列字串。對於序列中的每個移動指令，牠們可以選擇向指定方向移動 1、2 或 3 步。

請你為蝸蝸選擇每一步的移動距離，同時為牛牛也選擇每一步的移動距離，使得他們在整個移動過程中，經過相同格子的總次數（包括起始位置，且允許在不同的時間經過同一格子）達到最大值。最後，輸出這個最大的相同格子總次數。

移動規則：
- `E`: $(x, y) \rightarrow (x+k, y)$, $k \in \\{1, 2, 3\\}$
- `S`: $(x, y) \rightarrow (x, y-k)$, $k \in \\{1, 2, 3\\}$
- `W`: $(x, y) \rightarrow (x-k, y)$, $k \in \\{1, 2, 3\\}$
- `N`: $(x, y) \rightarrow (x, y+k)$, $k \in \\{1, 2, 3\\}$


### ***Input***

四行：
- `x1 y1`  (蝸蝸初始坐標)
- `x2 y2`  (牛牛初始坐標)
- `s1` (蝸蝸和移動序列字串)
- `s2` (牛牛的移動序列字串)

### ***Output***

一個整數，表示蝸蝸和牛牛的路徑中，最大的相同格子總次數。

### ***Sample Input 1***
```
0 0
0 1
NE
E
```

### ***Sample Output***

```
4
```

<div class = 'page' />

### ***Sample Input 2***

```
0 0
10 0
EEE
WW
```

### ***Sample Output***

```
6
```

### ***Note***

- $0 \leq x_1, y_1, x_2, y_2 \leq 10$
- $1 \leq |s_1|, |s_2| \leq 3$
- (補充說明：$|s|$ 為字串長度)

---

Sample 1 一組合法路徑如下（非最佳解）
蝸蝸往北走三步，再往東走兩步
牛牛往東走一步
彼此都有經過的格子為一格
![image](https://hackmd.io/_uploads/rJHIhLqkxe.png)



### ***Subtask***

- ***task***: $100\\%$ ***As statement***
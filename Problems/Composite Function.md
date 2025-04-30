## **B. 合成函數** ***<font color = '#AAAAAA'> Composite Function </font>***

`time limit` 1s
`memory limit` 256MB

### ***Statement***
給定一個線性函數 $f(x) = ax + b$，其中 $a, b$ 是非負整數。

我們定義 $f^n(x)$ 是將函數 $f$ 連續作用在 $x$ 上 $n$ 次的結果：
* $f^1(x) = f(x)$
* $f^n(x) = f(f^{n-1}(x))$ for $n > 1$

且定義$\mod m$ 代表除以 $m$ 的餘數。

試求，$f^n(x_0) \pmod m$。

### ***Input***
$n\ m\ a\ b\ x_0$


### ***Output***
$Ans$

輸出為一整數代表 $f^n(x_0) \pmod m$ 的結果。

<div class = 'page' />



### ***Sample Input***
```
3 10 3 4 1
```

### ***Sample Output***
```
9
```

* $f(x) = 3x + 4$
* $f^3(x) = 27x + 52$
* $f^3(1)\ \\%\ 10 = 79\ \\%\ 10 = 9$

### ***Note***
* $1 \leq n \leq 10^{18}$
* $1 \leq m \leq 10^9$
* $0 \leq a,\ b,\ x_0 < m$
* 所有輸入皆為整數

### ***Subtask***

 - ***subtask1***: $30\\%$ $\ n \leq 10^6$
 - ***subtask2***: $70\\%$ ***As statement***
## **E. 貨物中心** ***<font color = '#AAAAAA'> Pchome </font>***


`time limit` 1s
`memory limit` 256MB

### ***Statement***

你在一家物流中心工作，你需要處理兩種操作：

1.  **疊放貨物 (Operation 1):** 將一件產品疊放到指定編號的貨架上。
2.  **查看貨物 (Operation 2):** 查詢指定編號貨架上，從底部數起的第幾個產品是什麼。

每個貨架可以疊放多個產品，後疊放的產品位於上方。

### ***Input***

第一行包含一個整數 $q$，表示接下來的操作次數 ($1 \leq q \leq 10^5$).

接下來的 $q$ 行，每行描述一個操作，有兩種格式：

-   `1 x s`: 表示將名稱為 $s$ 的產品疊放到編號為 $x$ 的貨架上。$s$ 是一個由小寫字母、大寫字母和下劃線組成的字串，長度不超過 20。
-   `2 x y`: 表示查詢編號為 $x$ 的貨架上，從底部數起的第 $y$ 個產品是什麼。

### ***Output***

對於每個查詢操作（格式為 `2 x y`），輸出結果：

-   如果編號為 $x$ 的貨架上，從底部數起存在第 $y$ 個產品，則輸出該產品的名稱 $s$。
-   如果編號為 $x$ 的貨架上疊放的產品數量少於 $y$ 個，即無法找到從底部數起的第 $y$ 個產品，則輸出字串 `"oh can't find anything..."`，輸出不包含引號。

每個查詢操作的輸出佔一行。

<div class = 'page' />



### ***Sample Input 1***

```
12
1 5 oQEouHTiWKhqbPqT
1 2 sofa
2 2 1
1 1 xylophone
1 2 carrot
1 5 PsGCpwq
1 4 orange
2 4 3
1 4 tRoKIgLpvNRZAQzJilg
1 5 banana
1 4 quilt
1 1 grape
```

### ***Sample Output 1***

```
sofa
oh can't find anything...
```

<div class = 'page' />



### ***Sample Input 2***
```
12
1 7 orange
2 7 1
1 6 banana
1 10 HtMSkhQCCBXi
1 7 quilt
1 1 zebra
1 9 iaWQVOkpxw
2 9 3
1 1 grape
2 10 1
1 10 HmlYPddXhupIfAgrwyC
1 2 table
```

### ***Sample Output 2***
```
orange
oh can't find anything...
HtMSkhQCCBXi
```

### ***Note***

 - $1 \leq x \leq 10^5$
 - $1 \leq y \leq 10^5$

### ***Subtask***

- ***task***: $100\\%$ ***As statement***
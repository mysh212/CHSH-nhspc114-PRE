## **試場規則**

### **違規事項**

 - 行動裝置未置於教室外、教室前後、監考老師桌上、個人電腦主機上，經監考老師發現。
 - 於考試期間使用行動裝置。
 - 配戴具通訊功能的穿戴裝置。
 - 以任何方式使其他考生無法正常使用系統。
 - 考試期間與監考老師以外之人交談。

上述行為被發現，且屢勸不聽者，將登記於考生簽到表，並在賽後系統測試時將總成績 $\times 0.0001$ 並四捨五入至個位。

### **賽制**

 - 本次競賽採`OI`制度，有部分分，無罰時，並取每筆提交的子題聯集為總分。
   - 例如：某題共有兩筆提交，第一筆通過子測資 $\\{1,2\\}$ 、第二筆通過子測資 $\\{2,3\\}$ ，則總分為第 $\\{1,2,3\\}$ 筆子測資的分數相加。
 - 本次為封板賽，記分板將在比賽結束後公布。
 - 競賽結束後會做一次***System test***(系統測試)，所有成績以其為準。
 - 提交的冷卻時間(CD time)為 $15$ 秒，最後 $30$ 分鐘不在此限。
 - 對於每一題，使用者最多可以進行 $100$ 筆提交。

### **系統使用說明**

 - 系統連結: [http://192.168.8.1](http://192.168.8.1/)
 - 競賽將在 ***2025/04/30 1:00 P.M.*** 開始，使用者有十分鐘的時間閱讀試場規則，確認讀畢後請按下系統上的開始鈕，以免影響競賽時間。
 - 本次競賽時長共 ***120*** 分鐘。
 - 最晚進場時間 ***2025/04/30 1:30 P.M.***。
 - 最早離場時間 ***2025/04/30 2:00 P.M.***。
 - 總題本在第***A***題的題目敘述頁面中。
 - 使用者允許許使用 ***C/C++11/C++17*** 提交程式碼。
 - 若結果為***Execution timed out (wall clock limit exceeded)***，則表示系統因為某筆提交繁忙中，請檢查你的程式碼使否有可能超過執行時間，並稍後再試。
 - 對於每筆提交，請確認副檔名符合系統要求，詳見系統頁面。
 - 如有題目問題，請使用系統提供的訊息詢問功能提問。
 - 如有其他問題，如：上廁所、需要計算紙、系統使用問題等，請直接舉手向監考老師發問。

### **資源**

 - 賽後我們將會在一天內 **彰中資訊社群** 及 **HARC Discord** 中公告本次題解、總成績。
 - 競賽後將擇期在 ***HARC Discord*** 上進行直播題解。
 - 網址：
   - [彰中資訊社群](https://www.facebook.com/groups/chshcs/)
   - [本次專案](https://mysh212.github.io/CHSH-nhspc113-PRI/)
   - [HARC Discord](https://2120.page.link/HARC)
   - [彰中資訊社Discord](https://2120.page.link/cdc)


<div class = 'page' />

## **A. 進位** ***<font color = '#AAAAAA'> Carry </font>***

`time limit` 1s
`memory limit` 256MB

### ***Statement***

給定一個整數 $T$，代表有 $T$ 組詢問。
每一組詢問會給你一個十進制整數，請你針對這個整數執行以下操作：

給你一個十進制整數，請將它分別轉換成二進制（$\text{base 2}$）到十六進制（$\text{base 16}$）。然後，將所有轉換後的數字按照以下規則排序，並輸出結果：

1.  首先按照轉換後的數字的**字典序**進行排序。
2.  如果兩個轉換後的數字在字典序上相同，則按照它們的**進制數由小到大**進行排序。

### ***Input***

給定一個正整數 $T$，代表有 $T$ 組詢問。
每一組詢問會給你一個十進制整數 $x$

### ***Output***

對於每組詢問輸出 $15$ 行。每一行包含兩個部分，以一個空格分隔：首先是將輸入的十進制數字 $x$ 轉換成的對應進制數字，然後是一個空格，最後是該進制的基數（$2$ 到 $16$）。輸出的 $15$ 行應按照上述的雙重排序規則排序。

**注意**

- 對於大於 9 的數字在 11 到 16 進制中，請使用大寫字母 $\texttt{'A'}$ 到 $\texttt{'F'}$ 表示。
- 字典序排序是按照字符串的比較方式進行排序。例如，"10" 在字典序上小於 "2"。

<div class = 'page' />



### ***Sample Input 1***

```
1
10
```

### ***Sample Output 1***

```
10 10
101 3
1010 2
11 9
12 8
13 7
14 6
20 5
22 4
A 11
A 12
A 13
A 14
A 15
A 16
```

<div class = 'page' />



### ***Sample Input 2***

```
1
10234
```

### ***Sample Output 2***

```
10011111111010 2
10234 10
112001001 3
115214 6
15031 9
2133322 4
23772 8
27FA 16
3074 15
311414 5
3A30 14
41560 7
4873 13
5B0A 12
7764 11
```

### ***Note***

 - $1 \leq T \leq 10^3$
 - $0 \leq x \leq 10^{10}$


### ***Subtask***

- ***task***: $100\\%$ ***As statement***



<div class = 'page' />

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

<div class = 'page' />

## **C. K-字串分割** ***<font color = '#AAAAAA'> K-Limited String Partition </font>***

`time limit` 1s
`memory limit` 256MB

### ***Statement***
給定一個長度為 $n$ 的字串 $s$，由小寫英文字母組成。您的任務是將這個字串分割成最少數量的連續子字串，使得每個子字串都是**有效**的。

一個子字串被認為是**有效**的，如果對於出現在該子字串中的每個不同的小寫英文字母，該字母在該子字串中出現的次數小於或等於給定的整數 $k$。

輸出分割字串 $s$ 所需的最少有效子字串數量。由於問題的限制確保始終存在有效的分割方案，因此你不需要考慮不可能的情況。


### ***Input***
$n\ k$
$s$

### ***Output***
$Ans$


<div class = 'page' />


### ***Sample Input 1***
```
6 2
aabbcc
```

### ***Sample Output 1***
```
1
```

### ***Sample Input 2***
```
9 2
aaabbbccc
```

### ***Sample Output 2***
```
4
```

### ***Note***
* $1 \leq n, k \leq 10^5$


### ***Subtask***

- ***task***: $100\\%$ ***As statement***

<div class = 'page' />

## **D. AI 程式助理** ***<font color = '#AAAAAA'> MelonGPT </font>***

`time limit` 1s
`memory limit` 256MB

### ***Statement***
隨著生成式 AI 的蓬勃發展，充滿想法的 **MelonWalker** 決定打造一款獨具風格的 AI 程式助理，並準備了以下微調資料：
```
Q: Why can't I run my code?
A: Haven't you considered looking at your own problems first?

Q: What does this error message mean?
A: This error message alienates the effort people put in, you get it?

Q: How can I optimize the performance of this code?
A: Why bother being so concerned about performance?
```

以上是 **MelonWalker** 深思熟慮後認為最「精闢」的回應。

然而，由於 **MelonWalker** 並不會訓練模型，對於上述問題以外的其他提問，他的 AI 助理一律以以下訊息回應，藉此掩蓋其能力的不足：
```
The server is busy. Please try again later.
```


<div class = 'page' />



### ***Input***
$Query$

輸入為一行字串代表使用者問得問題


### ***Output***
$Ans$

輸出 AI 的回應

### ***Sample Input 1***
```
Why can't I run my code?
```

### ***Sample Output 1***
```
Haven't you considered looking at your own problems first?
```

### ***Sample Input 2***
```
1 + 1 = ?
```

### ***Sample Output 2***
```
The server is busy. Please try again later.
```

### ***Note***
*  字串長度不超過 $10^6$


### ***Subtask***

- ***task***: $100\\%$ ***As statement***

<div class = 'page' />

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

<div class = 'page' />

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
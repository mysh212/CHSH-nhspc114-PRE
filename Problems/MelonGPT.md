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
# ![](https://drive.google.com/uc?id=10INx5_pkhMcYRdx_OO4rXNXxcsvPtBYq) Interpreter 解譯器模式  
> ##### 理論請自行找，網路上有很多相關的文章，這邊只關注於範例實作的部分.

---
<br>

<!--ts-->
## 目錄
* [目的](#目的)
* [使用時機](#使用時機)
* [URL結構圖](#url結構圖)
* [實作成員](#實作成員)
* [實作範例](#實作範例)
* [參考資料](#參考資料)
<!--te-->

---
<br>

## 目的
解釋器模式定義一種表示語言文法的方法，並定義一個解釋器來解釋語言中的句子。<br>
它使得可以根據需要定義新的語法，並且能夠實現一些複雜的操作，如匹配輸入與規則、計算和查找等。

---
<br>

## 使用時機
- 當需要創建一個簡單的語言或表達式時，可以使用解釋器模式。
- 當需要將一個複雜的語言或表達式拆分成多個部分時，可以使用解釋器模式。
- 當需要對語言或表達式進行修改時，可以使用解釋器模式。

---
<br>

## URL結構圖
![](https://drive.google.com/uc?id=1dHF1uts3eMy9aGdnIN7zbBDQVe-jixzL)
> 圖片來源：[Refactoring.Guru - Iterator](https://refactoring.guru/design-patterns/iterator)

---
<br>

## 實作成員
* 抽象表達式（Abstract Expression）
  * 定義一個抽象的解釋方法，所有的具體表達式都需要實現這個方法。
* 具體表達式（Concrete Expression）
  * 實現抽象表達式中定義的解釋方法，並將結果返回。
* 上下文（Context）
  * 包含解釋器需要的全局信息。
* 解釋器（Interpreter）
  * 定義一個解釋方法，用於解釋語言中的句子。通常解釋器是一棵樹型結構，由多個抽象表達式和具體表達式構成。

---
<br>

## 實作範例:
- [待補...]() 

---
<br>

## 參考資料
* [Wiki - Interpreter Pattern](https://en.wikipedia.org/wiki/Interpreter_pattern) <br>
* [Refactoring.Guru - Iterator](https://refactoring.guru/design-patterns/iterator) <br>

---
<br>

---
<!--ts-->
#### [目錄 ↩](#目錄)
<!--te-->
---

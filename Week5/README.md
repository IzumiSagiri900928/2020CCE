
1. 老師示範簡單的字母陣列, 很多字母的意思, 又叫作字串 char line[10]="decline"; char line2[10]={'p','r','o','p','e','r','\0'}; 然後印出來。請了解, 字串後面會放 '\0' 這個特殊符號, 表字串結尾

2. 老師示範另外一種字串宣告的方法, 沒有寫它有多少格 char line3[] = "majority"; 因為是「雙引號」的字串, 所以也是會準備正確的格子數目給你, 並附上字串結尾。不過下一個就有問題了 char line4[] = {'m','a','j','o','r','i','t','y'}; 沒有把字串結尾準備好, 就會壞掉哦!

3. 很多字串? 使用陣列吧! 老師用 char line[5][10]={"decline", "proper", "majority", "bullet", "shop"}; 再用 for迴圈印出來

4. 今天考試時, 有 '\0' 與 0 , 老師請你把值印出來。

5. 老師講解 strcpy() 及 strcmp() 之後, 寫了一個簡單的「字串比大小」,你也試試看

6. 今天的重頭戲: 字串排序, 在本週的瘋狂程設, 請用「練習模式」寫出來。它結合了今天教的上面全部內容哦!

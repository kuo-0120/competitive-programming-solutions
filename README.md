# 競程與資料結構解題集

收錄約 92 題 CPE／UVa 解答與 LeetCode／課堂演算法練習，主題涵蓋字串、數論、排序、模擬、樹、鏈結串列與基礎動態規劃。

## 目錄

- `uva-cpe/`：依原題號與題名保存的 C++ 解答
- `leetcode/`：樹、鏈結串列與排序練習
- `INDEX.md`：自動整理的題目索引與 UVa 連結

每個資料夾只保留 `main.cpp`；`.exe`、`.o`、Code::Blocks 專案與 layout 檔均已排除。

## 編譯

```bash
g++ -std=c++17 -O2 -Wall "uva-cpe/a012. 10055 - Hashmat the Brave Warrior/main.cpp" -o solution
./solution < input.txt
```

## 使用方式

題解以「可提交程式」為主。複雜度與解法筆記尚未完整補齊；新增題目時建議在來源檔頭加入題目連結、核心想法、時間複雜度與空間複雜度。

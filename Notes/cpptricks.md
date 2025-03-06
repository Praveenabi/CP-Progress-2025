# CPP Tricks and Techniques

### 1.Character Addition 
- cout <<char('T'+'A'-'A'); output => T 
- **Explaination**:Each character can be represented by integer value, arithmetic operators converts the char to integer type and doing the arithmetic operations 
- [source](https://atcoder.jp/contests/abc301/editorial/6368)

### 2.Integer Division
- ceil of a/b  : (a / b) + (a % b > 0)
- floor of a/b : (a / b) - (a % b < 0)
- [ceil](https://atcoder.jp/contests/abc345/editorial/9593)
- [floor](https://atcoder.jp/contests/abc239/editorial/3434)

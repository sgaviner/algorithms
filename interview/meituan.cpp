/*
	字符串排序
时间限制：C/C++语言 1000MS；其他语言 3000MS
内存限制：C/C++语言 65536KB；其他语言 589824KB
题目描述：
生活中经常有需要将多个字符串进行排序的需要，比如将美团点评的部分业务名称（外卖、打车、旅游、丽人、美食、结婚、旅游景点、教培、门票、酒店），用拼音表示之后按字母逆序排序。字母逆序指从z到a排序，比如对两个字符串排序时，先比较第一个字母按字母逆序排z在a的前面，当第一个字母一样时再比较第二个字母按字母逆序排，以此类推。特殊情况1)空字符串需排在最前面；2)若一个短字符串是另一个长字符串的前缀则短字符串排在前面。请自行实现代码进行排序，直接调用sort等排序方法将不得分且视为作弊。

输入
输入为一行，由多个字符串以英文逗号拼接而成，最多不超过128个字符串且可能有重复。每个字符串由小写字母a-z组成，可以为空，最长不超过128个字符。

输出
对于每个测试实例，要求将输入中被拼接为一行的多个字符串，按字母序逆序排序后，仍以英文逗号拼接成一行输出。


样例输入
waimai,dache,lvyou,liren,meishi,jiehun,lvyoujingdian,jiaopei,menpiao,jiudian
样例输出
waimai,menpiao,meishi,lvyou,lvyoujingdian,liren,jiudian,jiehun,jiaopei,dache

提示
对输入进行切分得到字符串数组，首先按第一个字母进行排序和分区，再对同一区内字符串按第二个字母进行排序和分区，以此类推递归实现，直到对所有字符串排序结束，最后拼接并输出。
规则
请尽量在全场考试结束10分钟前调试程序，否则由于密集排队提交，可能查询不到编译结果 
点击“调试”亦可保存代码
编程题可以使用本地编译器，此页面不记录跳出次数


最长公共前缀
时间限制：C/C++语言 1000MS；其他语言 3000MS
内存限制：C/C++语言 65536KB；其他语言 589824KB
题目描述：
有最大长度十万的多个字符串。任意给两个字符串的编号，返回这两个字符串的最长公共前缀长度。

输入
第1行输入一个整数n，代表字符串数量，n最大为10000；

第2~n+1行，每行一个字符串，字符串长度最大为100000；

第n+2行开始，每行输入两个整数a和b，代表需要计算公共前缀的字符串编号。

输出
返回a、b对应的字符串的最长公共前缀长度。如果a或b不是有效的字符串编号，则对该行不输出结果。


样例输入
4
abcdefg
acdef
acdfghijk
cdfg
1 2
2 3
3 4
样例输出
1
3
0

规则
请尽量在全场考试结束10分钟前调试程序，否则由于密集排队提交，可能查询不到编译结果 
点击“调试”亦可保存代码
编程题可以使用本地编译器，此页面不记录跳出次数
*/



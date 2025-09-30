#include <iostream> //ヘッダ，.hの拡張子は不要
using namespace std; //名前空間の指定（std::で表現可能）

int main(){
    string s, t; //string型の変数宣言
    t = "入力された文字列は"; //string型の変数に代入
    cout << "文字列を入力してください" << endl; //標準出力，printfとほぼ同じ
    cin >> s; //標準入力，scanfとほぼ同じ
    cout << t+s << endl; //printfとほぼ同じ，endlは改行
    return 0;
}
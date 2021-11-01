# よく使うSTLの関数
## max_element,min_element
最小値、最大値のイテレータを返す。<br>
文字列の最小値(辞書順で一番最初)を求めるときなど
```
min = *min_element(v.begin(),v.end());
max = *max_element(v.begin(),v.end());
```

## sort
`sort(最初の要素のイテレータ、最後+1の要素のイテレータ、ソートの関数)`と使う。
```
sort(v.begin(),v.end(),[](int a, int b){
    return a < b;
});
```
で昇順ソートができる(ラムダ式使用)<br>
キャプチャ([])に`&`を指定するとその時点で見える自動変数を参照でキャプチャ<br>
`=`を指定するとその時点で見える自動変数をコピーでキャプチャする。<br>
計算量はO(NlogN)

## substr(n,m)
n番目以降の文字列Sをm文字だけ取り出す場合は`S.substr(n,m)`とする。

## count
`count(v.begin(),v.end(),x)`と使い、vの中でxがいくつ含まれているかを返す

## find
`find(v.begin(),v.end(),x)`と使い、vにxがない場合は`a.end()`、そうでない場合は初めてa[i] = xとなるようなa[i]のイテレータを返す。

## lower_bound,upper_bound
`lower_bound()`はソートされた配列に対して二分探索を行い、指定したkey以上の配列の要素の内、
最小のインデックスをイテレータで返す<br>
`upper_bound()`はソートされた配列に対して二分探索を行い、指定したkeyより大きい要素の内、
最小のインテックスをイテレータで返す<br>
```
lower_bound(v.begin(),v.end(),key)
upper_bound(v.begin(),v.end(),key)
```
と使う

## distance
`distance()`はイテレータ同士の距離を求める<br>
```
vector<int> vec = {1, 1, 2, 2, 4, 5, 5, 6, 8, 8, 8, 10, 15};
vector<int>::iterator position;  // auto position; で良い．
int idx_lower;

position = lower_bound(vec.begin(), vec.end(), 3);  // 3 を二分探索
idx_lower = distance(vec.begin(), position);
cout << "vec[" << idx_lower << "] = " << *position << "\n";

// cout << "vec[" << idx_lower << "] = " << vec[idx_lower] << "\n"; でも良い

position = lower_bound(vec.begin(), vec.end(), 2);  // 3 を二分探索
idx_lower = distance(vec.begin(), position);
cout << "vec[" << idx_lower << "] = " << *position << "\n";
```
と使う<br><br>
key未満の要素数は`distance(v.begin(),lower_bound(v.begin(),v.end(),key)))`<br>
key以上の要素数は`v.size() - distance(v.begin(),lower_bound(v.begin(),v.end(),key))`


## next_permutation
`next_permutation(v.begin(),v.end())`とすると次の順列を生成する。<br>
```
do{
    //code
}while(next_permutation(v.begin(),v.end()));
```

## charをllに(stlの関数ではない)
`(ll)(c - '0')`とすればよい。(ASCIIコード表の48～57は文字の'0'~'9'に対応)

## isupper,islower
文字sが大文字ならば`isupper(s)`はtrueを、小文字ならば`islower(s)`はtrueを返す。

## setprecision
小数点以下の桁数を設定する
`cout << fixed << setprecision(桁数);`で指定する。
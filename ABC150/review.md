# C 
nの位-1*n-1-iの階乗で辞書順の順番がわかると思ったが誤り  
nが8以下と小さいので全ての通りを試していくのが正解  
```do{ 
}
while(next_permutation(s.begin(),s.end()))
```
で順列を辞書順で全探索出来ることを知った  
参考 https://qiita.com/siser/items/a91022071b24952d27d9

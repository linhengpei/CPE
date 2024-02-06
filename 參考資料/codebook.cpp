

Shift + tab       左移
Ctrl + /          註解
CTRL + C          停止終端機
CTRL + Z          復原
CTRL + Y          取消復原

//一般架構
//#include<iostream>
//萬用標頭檔
#include<bits/stdc++.h>
#include<numeric>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    return 0;
}

//Codeforces
#include<bits/stdc++.h>
#include<numeric>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){

    }
    return 0;
}



// 宣告一個字母a在str(string)裡面
char a:str;
// 用for來把string裡的字母一個一個抓出來並執行
// 要先cin過str
for(char a:str){
}

// string內字母分開存進 array
char a[];
string str;cin>>str;
int x;x=0;
for(char w:str){
    a[x] = w;
    x++;
}

//while
while (n--) {
}
//執行n次,最後n為-1

while (--n)
//執行n-1次,最後n為1

//vector 加強型array

vector<int> vec(3, 0)
//三個0

vec[i] - 存取索引值為 i 的元素值。
vec.at(i) - 存取索引值為 i 的元素的值，
vec.front() - 回傳 vector 第一個元素的值。
vec.back() - 回傳 vector 最尾元素的值。
vec.push_back() - 新增元素至 vector 的尾端，必要時會進行記憶體配置。
vec.pop_back() - 刪除 vector 最尾端的元素。
vec.insert() - 插入一個或多個元素至 vector 內的任意位置。
//vec.insert(position,value)
vec.erase() - 刪除 vector 中一個或多個元素。
vec.clear() - 清空所有元素。
vec.empty() - 如果 vector 內部為空，則傳回 true 值。
vec.size() - 取得 vector 目前持有的元素個數。


//連續cin進list a
for(int i=0;i<n;i++){
    cin>>a[i]
}

//左移陣列(include algorithm)
// i 選取起始位置 , d 左移次數 , j 選取結束位置
rotate(arr.begin(),arr.begin()+d,arr.end())

//右移陣列
rotate(arr.begin(),arr.begin()+j-i+1-d ,arr.end())

//算array總和
//用到 #include <numeric>
accumulate(arr.begin(), arr.end(),0)
//第三項為初始值，一般為0

//自動排列array數字
//x為排列幾個數字or排列的最後位置
//compare為由大至小排
bool compare(int a, int b) {
  return a > b;
}
sort(arr,arr+x);
sort(arr,arr+x,compare);


//qsort(2D)
int cmp(const void *_a, const void *_b){
    const long long *a = (const long long *)_a, *b = (const long long *)_b;
    return a[0] < b[0];
}

qsort(a, n, sizeof(a[0]), cmp);


//多維sort
//t1.t2視維度增加宣告
for(int i=n-1;i>0;i--){
    for(int j=0;j<=i-1;j++){
        if(a[j][1]<a[j+1][1]){
            t1=a[j][0];
            t2=a[j][1];
            a[j][0]=a[j+1][0];
            a[j][1]=a[j+1][1];
            a[j+1][0]=t1;
            a[j+1][1]=t2;
        }
    }
}

//sort 一維陣列(2-block)
void sort(int row, int n){
    char t1, t2;
    for(int j=n-1;j>0;j--){
        for(int i=0;i<=j-1;i++){
            if(work[row][2*i+2] > work[row][2*i+4]){
                t1 = work[row][2*i+1];
                t2 = work[row][2*i+2];
                work[row][2*i+1] = work[row][2*i+3];
                work[row][2*i+2] = work[row][2*i+4];
                work[row][2*i+3] = t1;
                work[row][2*i+4] = t2;
            }
        }
    }
}


//char轉int
for (int i = 0; i < x; i++) {
    int ia =(int)a[i];
    s[i]=ia-48;
}

//0不是 1是
//判斷質數
int prime(int n){
    float n_sqrt;
    if(n==2||n==3) return 1;
    if(n%6!=1&&n%6!=5) return 0;
    n_sqrt=floor(sqrt((float)n));
    for(int i=5;i<=n_sqrt;i+=6){
        if(n%(i)==0|n%(i+2)==0) return 0;
    }
    return 1;
}

//gcd
int gcd(int a,int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}




C語言

FILE *fin = freopen("input.txt","r",stdin);
FILE *fout = freopen("output.txt","w",stdout);

fclose(fin);
fclose(fout);
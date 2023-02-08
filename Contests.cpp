//‰Õ‰ ﬁÊ„ √⁄“Û¯‰« «··Â »«·≈”·«„ „Â„« «» €Ì‰« «·⁄“Û¯… ›Ì €Ì—Â
// (Ê√‰Â ÂÊ √÷Õﬂ Ê√»ﬂÏ)
//alie

#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <bits/stdc++.h>
#include <stdio.h>
#include <iomanip>
#include <map>
#include <set>
#include <vector>
#include <iterator>
#include <numeric>
#include <deque>
#define ll long long
#define f(i,n) for(int i=0 ;i<n ;i++)
#define f1(i,n) for(int i=1 ;i<=n ;i++)
#define endl "\n"
#define no "NO\n"
#define yes "YES\n"
//#define all(vector<ll>&vec) vec.begin(),vec.end()
//#define all(vector<ll>&vec) vec.rbegin(),vec.rend()
// int s= upper_bound(v.begin(),v.end(),r)-v.begin() // the index upper bound for r from vector
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(0) , cin.tie(0) ,cout.tie(0) ;
    //freopen("second_hands_validation_input.text","r",stdin) ;
    //freopen("o.text","w",stdout) ;
    int t = 1 ;
    cin>> t ;
    while(t--){
        int x , y , h ;
        cin >> x >> y >> h ;
        int a,b , f,g ;
        cin >> a >> b >> f >> g ;
        int left1 = a , left2 = f ;
        int left = left1+left2 ;
        int right1 = x-a , right2 = x-f ;
        int right = right1+right2 ;
        int up1 = y-b , up2 = y-g ;
        int up = up1+up2 ;
        int down1  = b , down2 = g ;
        int down = down1+down2 ;
        int res1 = h+left+(max((b-g),(g-b))) ;
        int res2 = right+h+max((b-g),(g-b)) ;
        int res3 = up+h+max((a-f),(f-a)) ;
        int res4 = down+h+max((a-f),(f-a)) ;
        if(res1<=res2 && res1<=res3 && res1<=res4){
            cout << res1 <<endl ;
        }
        else if(res2<=res1 && res2<=res3 && res2<=res4){
            cout << res2 <<endl ;
        }
        else if(res3<=res2 && res3<=res1 && res3<=res4){
            cout << res3 <<endl ;
        }
        else {
            cout << res4<<endl;
        }
    }
    return 0 ;
}

////
//// Created by Work on 2022/6/4.
////
//#include <bits/stdc++.height>
//using namespace std;
//bool pr[1230];
//void pri(){
//    pr[1] = true;
//    for(int i = 2; i <= 250; i++){
//        if(!pr[i]){
//            for(int j = i * i; j <= 1229; j += i)
//                pr[j] = true;
//        }
//    }
//}
//int u;
////int func = 0;
////int sum;
//int DFS(int sum, int prim){
//    if(sum == 0) return 1;
//    int t = 0;
//    for(int j = prim; j <= sum; j++)
//        if(!pr[j]){
//            sum -= j;
//            t += DFS(sum, j);
//            sum += j;
//        }
//    return t;
//}
//
//int main(){
//    pri();
//    for(int i = 2; i < 201; i++){
//        cout << DFS(i, 2) << ", ";
//    }
//}

// 以上是打表程序

#include <iostream>
using namespace std;
int funs[199] = {1, 1, 1, 2, 2, 3, 3, 4, 5, 6, 7, 9, 10, 12, 14, 17, 19, 23, 26, 30, 35, 40, 46, 52, 60, 67, 77, 87, 98, 111, 124, 140, 157, 175, 197, 219, 244, 272, 302, 336, 372, 413, 456, 504, 557, 614, 677, 744, 819, 899, 987, 1083, 1186, 1298, 1420, 1552, 1695, 1850, 2018, 2198, 2394, 2605, 2833, 3079, 3344, 3630, 3936, 4268, 4624, 5007, 5419, 5861, 6336, 6845, 7393, 7979, 8608, 9282, 10003, 10776, 11603, 12488, 13435, 14445, 15527, 16681, 17914, 19232, 20636, 22134, 23732, 25436, 27251, 29186, 31246, 33439, 35772, 38257, 40899, 43709, 46696, 49871, 53243, 56826, 60631, 64671, 68957, 73506, 78331, 83447,88874, 94625, 100719, 107175, 114014, 121255, 128923, 137038, 145627, 154709, 164320, 174482, 185225, 196583, 208585, 221265, 234658, 248807, 263745, 279516, 296161, 313727, 332258, 351808, 372427, 394170, 417088, 441250, 466711, 493538, 521804, 551573, 582925, 615933, 650686, 687262, 725757, 766262, 808872, 853692, 900827, 950393, 1002502, 1057278, 1114849, 1175344, 1238904, 1305679, 1375815, 1449471, 1526812, 1608014, 1693247, 1782712, 1876598, 1975108, 2078460, 2186867, 2300576, 2419812, 2544843, 2675925, 2813326, 2957342, 3108265, 3266409, 3432097, 3605666, 3787467, 3977861, 4177239, 4385994, 4604537, 4833306, 5072740, 5323313, 5585505, 5859833, 6146816, 6447003, 6760967, 7089299, 7432618, 7791567, 8166824, 8559069, 8969035, 9397474, 9845164};
int main(){
    int t;
    while(cin >> t){
        printf("%check\n", funs[t - 2]);
    }
}
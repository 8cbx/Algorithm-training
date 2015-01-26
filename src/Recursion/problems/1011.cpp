#include <stdio.h>
#include <string.h>
#define BING 0
#define TIAO 1
#define WAN 2
using namespace std;
bool flag;
int remain, mahjong[3][10];
// 公式 n * AA + m * BCD + EE;
void dfs(int currentIndex) {
    if(flag)
        return;
    // 判断 EE
    if(remain == 2) {
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 10; j++) {
                if(mahjong[i][j] == 2) {
                    flag = true;
                    return;
                }
            }
        }
    }
    // 判断 AAA 的情况
    for(int i = 0; i < 3; i++) {
        for(int j = 1; j <= 9; j++) {
            if(mahjong[i][j] >= 3) {
                mahjong[i][j] -= 3, remain -= 3;
                dfs(currentIndex + 1);
                mahjong[i][j] += 3, remain += 3;
            }
        }
    }
    // 判断 BCD 的情况
    for(int i = 0; i < 3; i++) {
        for(int j = 1; j <= 7; j++) {
            if(mahjong[i][j] > 0 && mahjong[i][j + 1] > 0 && mahjong[i][j + 2] > 0) {
                mahjong[i][j]--, mahjong[i][j + 1]--, mahjong[i][j + 2]--, remain -= 3;
                dfs(currentIndex + 1);
                mahjong[i][j]++, mahjong[i][j + 1]++, mahjong[i][j + 2]++, remain += 3;
            }
        }
    }
}

int main() {
    char tmp[5];
    while(~scanf("%s", tmp)) {
        memset(mahjong, 0, sizeof(mahjong));
        for(int i = 0; i < 14; i++) {
            if (i > 0)
                scanf("%s", tmp);
            if (tmp[1] == 'B')
                mahjong[BING][tmp[0] - '0']++;
            else if (tmp[1] == 'T')
                mahjong[TIAO][tmp[0] - '0']++;
            else
                mahjong[WAN][tmp[0] - '0']++;
        }
        remain = 14, flag = false;
        dfs(0);
        if(!flag)
            puts("No");
        else
            puts("Yes");
    }
    return 0;
}

#include<cstdio>
#include<vector>
#include<algorithm>
#pragma warning(disable:4996)


using namespace std;
vector<vector<int>> floyd(vector<vector<int>>);

int main() {
	vector<vector<int>> a = {
		{0,-1,3,-1},
		{2,0,-1,-1},
		{-1,7,0,1},
		{6,-1,-1,0}
	};
	auto test = floyd(a);
	for (auto i :test) {
		for (auto j : i) printf("%d ",j);
		puts("");
	}
	return 0;
}

vector<vector<int>> floyd(vector<vector<int>> w) {
	for (int k = 0; k < w.size(); k++) {
		for (int i = 0; i < w.size(); i++) {
			for (int j = 0; j < w.size(); j++) {
				w[i][j] = min((uint32_t)w[i][j],w[i][k] >0 && w[k][j] > 0 ? (uint32_t)w[i][k] + (uint32_t)w[k][j] : (uint32_t) -1);
			}
		}
	}
	return w;
}

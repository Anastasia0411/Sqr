#include <vector>
#include <map>
#include <utility>

using namespace std;

template<typename T> 
T Sqr(const T& x);

template<typename T> 
vector<T> Sqr(const vector<T>& v);

template<typename T, typename S>
pair<T, S> Sqr(const pair<T, S>& p);

template<typename T, typename S>
map<T, S> Sqr(const map<T, S>& m);


template <typename T>
T Sqr(const T& x) { 
	return x * x;
}

template <typename T>
vector<T> Sqr(const vector<T>& v) {
	vector<T> ans;
	for (const auto& item : v) {
		ans.push_back(Sqr(item));
	}
	return ans;
}

template<typename T, typename S>
pair<T, S> Sqr(const pair<T, S>& p) {
	return {Sqr(p.first), Sqr(p.second)};
}

template<typename T, typename S>
map<T, S> Sqr(const map<T, S>& m) {
	map<T, S> ans;
	for (const auto& item : m) {
		ans[item.first] = Sqr(item.second);
	}
	return ans;
}

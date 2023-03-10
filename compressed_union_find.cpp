struct UnionFind {
    //////////////////
    ///1-index ///////
    //////////////////
    map<int,  int> d;

    int find(int x) {
      if (d[x] == 0) return x;
      return d[x] = find(d[x]);
    }
    bool unite(int x, int y) {
      x = find(x); y = find(y);
      if (x == y) return false;
      if (d[x] > d[y]) swap(x,y);
      d[x] += d[y];
      d[y] = x;
      return true;
    }
    bool same(int x, int y) { return find(x) == find(y);}
    int size(int x) { return -d[find(x)];}

};
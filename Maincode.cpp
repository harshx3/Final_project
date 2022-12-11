#include<bits/stdc++.h>
using namespace std::chrono;

class finalProject {
  public : 
    int minRefuelStops (int target, int startFuel, int[][] stations) {
    int n = stations.length;
    PriorityQueue<int[]> p = new PriorityQueue<>((a,b) -> b[1]-a[1]);
    
    int refill = 0;
    int i = 0;
    int distance = startFuel;
    
      while(distance<target) {
        while(i<n && distance >= stations[i][0]) {
          p.offer(stations[i]);
          i++;
        }
        if(p.isEmpty())
          return -1;
        
        distance += p.remove()[1];
        refill++;
      }
    return refill;
  }
};

int main() {
  
  finalProject fp;
  auto start = high_resolution_clock::now();
  fp.minRefuelStops(100, 1,[[10,100]]);
  auto stop = hig_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop-start);
  
  cout << "Total time :" << duration.count() << "microsecond" <<endl;
  
  return 0;
}




       

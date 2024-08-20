// 4. N meetings in one room //

class Solution {
    static class Data{
       int start;
       int end;
       Data(int s,int e){
           this.start=s;
           this.end=e;
       }
   }
   public int maxMeetings(int n, int start[], int end[]) {
        Data arr[]=new Data[n];
      for(int i=0;i<n;i++){
          arr[i]=new Data(start[i],end[i]);
      }
      
      Arrays.sort(arr,(a,b)-> a.end-b.end);
      int count=1;
      int freeTime=arr[0].end;
      
      for(int i=1;i<n;i++){
          if(arr[i].start > freeTime){
              count++;
              freeTime=arr[i].end;
          }
      }
      return count;
   }
}
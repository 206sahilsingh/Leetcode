// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       int first=1, last= n;
       int mid=0;
       while(first<=last){
        mid= first +(last-first)/2;
        bool ans =isBadVersion(mid);
        bool pre =(mid==1)?false:isBadVersion(mid-1);
        if(ans==true &&pre==false){
        return mid;
       } 
       else if(ans==false){
        first=mid+1;
       }
       else{
        last =mid-1;
       }
       }
       return -1;
    }
};
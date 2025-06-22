class Solution {
public:
    int compress(vector<char>& chars) {
        int index=0;
        int n=chars.size();
        for(int i=0;i<n;i++){
            int count=0;
            int ch=chars[i];
            while(i<n && ch==chars[i]){
                count++;
                i++;
            }

            if(count==1){
                chars[index++]=ch;
            }else{
                chars[index++]=ch;
                string s=to_string(count);
                for(char c:s){
                    chars[index++]=c;
                }

            }
            i--;

        }
        return index;
    }
};
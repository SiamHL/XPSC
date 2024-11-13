class Solution{
public:
	int search(string pat, string txt) {
	    int n = txt.size();
        int m = pat.size();
        vector<int> count1(26, 0);
        vector<int> count2(26, 0);
        int ans = 0;

        for (auto k : pat) {
            count1[k - 'a']++;
        }

        int l = 0, r = 0;
        while (r < m && r < n) {
            count2[txt[r] - 'a']++;
            r++;
        }

        if (count1 == count2) {
            ans++;
        }

        while (r < n) {
            count2[txt[l] - 'a']--;
            count2[txt[r] - 'a']++;
            l++;
            r++;

            if (count1 == count2) {
                ans++;
            }
        }

        return ans;
	}

};
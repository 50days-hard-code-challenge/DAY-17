void helper(int n, string cur, vector<string>& ans) {

    if(cur.size() == n){

        ans.push_back(cur);

        return;

    }

    if(cur == "" || cur[cur.size() -1] == '0') {

        helper(n, cur + '0', ans);

        helper(n, cur + '1', ans);

    } else {

        helper(n, cur + '0', ans);

    }

}

 

vector<string> generateString(int N) {

    // Write your code here.

    string cur = "";

    vector<string> ans;

 

    helper(N, cur, ans);

 

    return ans;

}

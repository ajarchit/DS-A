class Solution {
public:
    string reformatDate(string date) {
        int n=date.size();
        string res;
        stringstream ss(date);
        string d,m,y;
        ss >> d>>m>>y;
        d=d.substr(0,d.size()-2);
        if(d.size()==1)
            d='0'+d;
         unordered_map<string, string> month{{"Jan", "01"},{"Feb", "02"},{"Mar", "03"},{"Apr", "04"},{"May", "05"},{"Jun", "06"},{"Jul", "07"},{"Aug", "08"},{"Sep", "09"},{"Oct", "10"},{"Nov", "11"},{"Dec", "12"}};
        res=y+'-'+month[m] +'-'+d;
        
        return res;
    }
};
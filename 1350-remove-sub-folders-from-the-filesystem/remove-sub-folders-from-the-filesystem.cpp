class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        // Sort folders so parent folders appear before subfolders
        sort(folder.begin(), folder.end());

        vector<string> result;
        unordered_map<string, bool> folderMap;

        for (const string& path : folder) {
            string current = "";
            bool isSubfolder = false;

            // Check for any parent folder in map
            for (int i = 1; i < path.size(); ++i) {
                if (path[i] == '/') {
                    current = path.substr(0, i);
                    if (folderMap.find(current) != folderMap.end()) {
                        isSubfolder = true;
                        break;
                    }
                }
            }

            if (!isSubfolder) {
                folderMap[path] = true;
                result.push_back(path);
            }
        }

        return result;
    }
};

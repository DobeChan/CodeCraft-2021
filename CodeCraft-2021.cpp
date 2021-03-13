#include "iostream"
#include "fstream"
#include "sstream"
#include "vector"
#include "map"

using namespace std;

class ServerInfo{
public:
    string servername;
    int cpuCore;
    int memory;
    double hardwareCost;
    double energyCost;
    //vector<string,vector<int>>::const_iterator info;
    string NUMA;//node A & B
};

class VirMachineInfo{
public:
    string virmachinename;
    vector<int> cpuCore;
    vector<int> memory;
    bool node;//0->单节点
};

void ResourceSchedule(){

}

inline std::istream& operator>>(std::istream& in, ServerInfo& obj)
{

    return in >> obj.servername >> obj.cpuCore >> obj.memory >> obj.hardwareCost >> obj.energyCost >> obj.NUMA;
}

void ReadIn(const string& path, vector<ServerInfo>& info){
    ifstream fin(path);
    ServerInfo serverInfo;
    string line;
    while (getline(fin, line)){
        stringstream ss;
        ss << line;
        ss >> serverInfo;
        info.emplace_back(serverInfo);
    }
}

void WrittenOut(){

}

int main()
{
	// TODO:read standard input
	// TODO:process
	// TODO:write standard output
	// TODO:fflush(stdout);


	return 0;
}

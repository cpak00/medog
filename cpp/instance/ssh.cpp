#include <iostream>
#include <sstream>
#include "ssh2.h"

int main(int argc, const char *argv[])
{
    using namespace std;
    //using namespace fish;

    Ssh2 ssh("192.168.12.1");
    ssh.Connect("pi", "raspberry");
    Channel *channel = ssh.CreateChannel();
    channel->Write("cd me_dog");
    cout << channel->Read(":") << endl;
    channel->Write("./main");
    cout << channel->Read(":") << endl;
    char orientation;
    stringstream ss;
    while (cin.get(orientation), orientation != 'q')
    {
        ss.clear();
        ss << orientation << ' ' << '1';
        channel->Write(ss.str());
        cout << channel->Read(":", 5000) << endl;
    }
    delete channel;
    return 0;
}

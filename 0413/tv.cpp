#include <iostream>
#include <string>
using namespace std;

class TV {
    int channel, volume;
    bool on; 
public: 
    TV(int ch, int vol, bool on) : channel(ch), volume(vol), on(on) {
        cout << "TV : " << ch << endl;
    }
    void setVolume(int vol) { volume = vol; }
};

class WideTV : public TV {
    int width;
public: 
    WideTV(int width) : TV(100, 10, true) { 
        this->width = width;
        cout << "WideTV : " << width << endl;
    }
};

class SmartTV : public WideTV {
    string url;
public: 
    SmartTV(string url, int width) : WideTV(width) {
        cout << "SmartTV : " << url << endl;
        this->url = url;
    }
};

int main() {
    SmartTV tv("www.youtube.com", 1920);
    return 0;
}

//Aurelio Arango
//CS 542
//Added MediaAdapter
//Modified Audio player so that it plays a new audio format
#include <iostream>
#include <string>

using namespace std;

//Media player interface
class MediaPlayer {
    public:
        virtual void play(string audioType, string fileName) = 0;
};

class AdvancedMediaPlayer {
    public:
        virtual void playVlc(string fileName) = 0;
        virtual void playMp4(string fileName) = 0;
};

class VlcPlayer: public AdvancedMediaPlayer {
    public:
        void playVlc(string fileName) {
            cout << "Playing vlc file. Name: " + fileName << endl;
        }
        void playMp4(string fileName) {
            cout << "Vlc player cannot play mp4." << endl;
        }
};

class Mp4Player: public AdvancedMediaPlayer {
    public:
        void playVlc(string fileName) {
            cout << "Mp4 player cannot play vlc." << endl;
        }
        void playMp4(string fileName) {
            cout << "Playing mp4 file. Name: " + fileName  << endl;
        }
};

//creating Adapter

class MediaAdapter: public MediaPlayer
{
  private:
    //player pointer to AdvancedMediaPlayer
    AdvancedMediaPlayer * player;

  public:
    //conctructor
    MediaAdapter()
    {
    }
    ~MediaAdapter(){delete player;}
    //play function that checks which type of file it is and plays it
    void play(string audioType, string fileNamet)
    {//check if is vlc or mp4
      if(audioType == "vlc")
      {
        player = new VlcPlayer;
        player->playVlc(fileNamet);
      }
      else if(audioType == "mp4")
      {
        player = new Mp4Player;
        player->playMp4(fileNamet);
      }
    }
};

//concrete class inherits from Media Player

class AudioPlayer: public MediaPlayer {
    public:

        MediaPlayer * media;
        void play(string audioType, string fileName) {
            if(audioType == "mp3"){
                cout << "Playing mp3 file. Name: " + fileName << endl;
            } else if(audioType == "vlc" || audioType == "mp4"){
              media = new MediaAdapter;
               media->play(audioType,fileName);
               delete media;
            } else {
                cout << "Invalid media. " + audioType + " format not supported" << endl;
            }
        }
};
//main funtion remains the same
int main() {
      AudioPlayer *audioPlayer = new AudioPlayer();
      audioPlayer->play("mp3", "beyond the horizon.mp3");
      audioPlayer->play("mp4", "alone.mp4");
      audioPlayer->play("vlc", "far far away.vlc");
      audioPlayer->play("avi", "mind me.avi");
}

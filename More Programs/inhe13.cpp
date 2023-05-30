//program to illustrate multiple inheritance
#include<iostream>
using namespace std;

class MusicPlayer {
    public:
        void play_music() {
            cout<<"I am playing music\n";
        }
};
class AudioPlayer:virtual public MusicPlayer {
    public:
        void play_audio() {
            cout<<"I am playing audio\n";
        }
};
class VideoPlayer:virtual public MusicPlayer {
    public:
        void play_video() {
            cout<<"I am playing video\n";
        }
};
class Playlist:public AudioPlayer,public VideoPlayer {
    public:
        void play_playlist() {
            cout<<"I am plaing a play-list\n";
        }
};
int main() {
    MusicPlayer musicplayer;
    AudioPlayer audioplayer;
    VideoPlayer videoplayer;
    Playlist playlist;

    musicplayer.play_music();
    audioplayer.play_music();
    audioplayer.play_audio();

    videoplayer.play_music();
    videoplayer.play_video();

    playlist.play_music();
    playlist.play_audio();
    playlist.play_video();
    playlist.play_playlist();
    return 0;
}
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    cout << "Конвертация MP4 в MP3..." << endl;

    // Путь к исходному файлу mp4 
    string sourcePath = "C:\\source.mp4";

    // Путь, куда будет сохранен mp3-файл 
    string destPath = "C:\\dest.mp3";

    // Команда ffmpeg, которая будет использоваться для конвертирования  
    string command = "ffmpeg -i \"" + sourcePath + "\" \"" + destPath + "\"";

    system(command.c_str());

    cout << "Готово!";

    return 0;
}
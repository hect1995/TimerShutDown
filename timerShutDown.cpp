/*#include <sstream>
#include <iostream>

int main(){
    std::stringstream ss;
    std::cout << "In how many minutes does this cutie girl want to shut down the PC?\n";
    int n;
    std::cin >> n;
    int seconds = 60*n;
    ss << "shutdown -s -t " << seconds;
    system( ss.str().c_str() ); // str() returns a std::string with the contents of the stream, c_str() the equivalent C string
}
*/

#include "notepad.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication EditorApp(argc, argv);
    Notepad Editor;
    Editor.show();

    return EditorApp.exec();
}
./server/TCPServer.cpp:2:10: fatal error: sys/socket.h: No such file or directory
    2 | #include <sys/socket.h>
      |          ^~~~~~~~~~~~~~
compilation terminated.
Build failed.



chmod +x build.sh


./build.sh



apt update && apt install -y nano


docker run -it -v "C:\Users\admin\Code\Course\ID_0000_FW:/app" ubuntu:22.04

apt install -y g++-11

update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-11 100


g++ --version

cd /app          # Chuyển vào thư mục đã mount
g++ -o main main.cpp  # Chỉ chạy khi file tồn tại



ls -la
cat main.cpp
g++ -o main main.cpp
./main

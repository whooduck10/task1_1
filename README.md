./server/TCPServer.cpp:2:10: fatal error: sys/socket.h: No such file or directory
    2 | #include <sys/socket.h>
      |          ^~~~~~~~~~~~~~
compilation terminated.
Build failed.



chmod +x build.sh


./build.sh

cd TASK1_1/TASK1_1

apt update && apt install -y nano
C:\Users\admin\Downloads\TASK1_1\TASK1_1

docker run -it -v "C:\Users\admin\Downloads\TASK1_1:/TASK1_1" ubuntu:22.04

apt-get update
apt-get install -y telnet
sed -i 's/\r$//' build.sh 
apt install -y g++-11

update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-11 100

docker exec -it 550e716d4f6c bash
g++ --version
DOCKER INSTALLED : 550e716d4f6c
cd /app          # Chuyển vào thư mục đã mount
g++ -o main main.cpp  # Chỉ chạy khi file tồn tại



ls -la
cat main.cpp
g++ -o main main.cpp
./main


windown:
 !!! NO NO NO  
linux (WSL/docker ubuntu) + MACOS: 
- chmod +x build.sh
- ./build.sh
- ./cs23_server PORT 8080 (./cs23_server PORT 8085)
- telnet localhost 8080 (telnet localhost 8085)


request: POST /login None {"username": "admin", "password": "1"}
response: 200 Fail login!!!

request: POST /login None {"username": "guest", "password": "123456"}
response: 200 Fail login!!!

request: GET /login None {"username": "admin", "password": "123456"}
response: 500 Internal Server Error

request: POST /login None {"username": "admin", "password": "123456"}
response: 200 tM6Vs2pvsoXXeBNu
POST /register CGDP3q8GqF4zsTiK {"username": "admin", "password": "123456"}
request: POST /login None {"username": "user", "password": "123456"}
response: 200 CGDP3q8GqF4zsTiK

TOKEN: 
- USER: 898V7ILMY9Jpmj0H
- ADMIN: C1z0fX5if0yKyN29

request: GET /admin C1z0fX5if0yKyN29 {}
response: 200 Welcome, admin VOTIEN!

response: GET /user 898V7ILMY9Jpmj0H {}
response: 200 Welcome, user VOTIEN!

response: GET /admin 898V7ILMY9Jpmj0H {}
response: 500 Internal Server Error


<!-- response: GET /guest YZKEzCtB12L2c9Qm {}
response: 500 Internal Server Error -->

response: GET /user None {}
response: 403 Forbidden



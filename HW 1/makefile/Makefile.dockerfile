FROM ubuntu:22.04

RUN apt-get update && \
    apt-get install -y gcc make && \ 
    rm -rf /var/lib/apt/lists/*

COPY . /app/ 

WORKDIR  /app

RUN make

CMD ./hello_world

#docker build -t patelkharsh/ubuntu:22.04 . -f Makefile.dockerfile .
#docker run patelkharsh/ubuntu:22.04  
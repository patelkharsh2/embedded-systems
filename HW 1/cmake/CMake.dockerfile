#repo: patelkharsh2/cmake-app
FROM ubuntu:22.04

RUN apt-get update && \
    apt-get install -y gcc cmake make build-essential && \ 
    rm -rf /var/lib/apt/lists/*

COPY . app/ 

WORKDIR  /app
RUN mkdir -p /app/build

WORKDIR /app/build
RUN cmake ..
RUN make

CMD ./hello_world





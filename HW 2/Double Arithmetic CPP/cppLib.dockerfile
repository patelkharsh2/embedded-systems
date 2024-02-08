FROM ubuntu:22.04

RUN apt-get update && \
    apt-get install -y gcc cmake make build-essential && \ 
    rm -rf /var/lib/apt/lists/*

COPY . app/ 

WORKDIR  /app

#manually compiling the library
#RUN gcc -c sub_int.c -o sub_int.o && \ 
#    gcc -c add_int.c add_int.o && \ 
#    gcc -c mult_int.c mult_int.o && \
#    gcc -c div_int.c div_int.o && \
#    ar rcs libarithmetic.a *.o && \
#    ranlib libarithmetic.a && \ 
#    gcc -o main main.c -L. -larithmetic
#
  
#compiling using CMAKE
RUN mkdir -p /app/build
WORKDIR /app/build
RUN cmake ..
RUN make

CMD ./cppmath
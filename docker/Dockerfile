FROM debian:stretch
LABEL maintainer="PESPCOIN Developers <dev@PESPCOIN.org>"
LABEL description="Dockerised PESPCOINCore, built from Travis"

RUN apt-get update && apt-get -y upgrade && apt-get clean && rm -fr /var/cache/apt/*

COPY bin/* /usr/bin/

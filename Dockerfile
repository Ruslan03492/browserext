FROM 1and1internet/ubuntu-16-apache-php-5.6
MAINTAINER Ruslan Telyak <rvelvetby@gmail.com>

RUN apt-get update
RUN apt-get -y install \
    unzip \
    libqt4-dev \
    libqt4-dev-bin \
    libqt4-opengl-dev \
    libqtwebkit-dev \
    qt4-linguist-tools \
    qt4-qmake \
#    qt4-default \
#    qt4-qmake \
#    qt4-dev-tools \
#    libqtwebkit4 \
#    libqt5webkit5-qmlwebkitplugin \
#    libqt5webkit5 \
    php-dev \
    mc \
    nano

COPY docker-run.sh /usr/local/bin/
CMD "docker-run.sh"

#!/usr/bin/env bash

./var/www/html/build.sh
./var/www/html/install.sh
echo "extension=browserext.so" >> /etc/php/5.6/apache2/php.ini
echo "export DOCUMENT_ROOT=html" >> /etc/apache2/envvars
service apache2 restart
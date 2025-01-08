gcc bit.c -o bit -g

nm bit

objdump -d bit

readelf -all bit

readelf --debug-dump bit | more

strings bit

xxd bit



1 #!/bin/sh
  2
  3 echo Architecture:
  4 uname -m
  5 echo Kernel:
  6 uname -r
  7 echo Physical processors
  8 cat /proc/cpuinfo | grep cpu\ cores | uniq
  9 echo Virtual processors
 10 lscpu | grep CPU\(s\)\:
 11 echo Memory
 12 free -m | grep Mem\: | awk '{print $2}'
 13 echo Memory %
 14 free -m | grep Mem\: | awk '{print $3/$2 * 100}'
 15 echo Memory
 16 grep MemTotal /proc/meminfo
 17 echo Last reboot
 18 last reboot
 19 echo Active users
 20 w | awk '{print $4}'
 21 w | cut -d " " -f 7
 22 echo IP and MAC
 23 ip addr show eth0 | grep inet

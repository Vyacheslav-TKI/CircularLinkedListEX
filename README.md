# CircularLinkedListEX

~/glibc-2.34/build$ ../configure --prefix=/usr --disable-profile --enable-add-ons --with-headers=/usr/include --with-binutils=/usr/bin
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
checking build system type... x86_64-pc-linux-gnu
checking host system type... x86_64-pc-linux-gnu
checking for gcc... gcc
checking for suffix of object files... o
checking whether we are using the GNU C compiler... yes
checking whether gcc accepts -g... yes
checking for readelf... readelf
checking for g++... g++
checking whether we are using the GNU C++ compiler... yes
checking whether g++ accepts -g... yes
checking whether g++ can link programs... yes
checking for sysdeps preconfigure fragments... aarch64 alpha arc arm csky hppa i386 m68k microblaze checking for grep that handles long lines and -e... /usr/bin/grep
checking for egrep... /usr/bin/grep -E
mips nios2 powerpc riscv s390 sh checking for grep that handles long lines and -e... (cached) /usr/bin/grep
checking for egrep... (cached) /usr/bin/grep -E
sparc x86_64 checking whether gcc compiles in -mx32 mode by default... no

checking for use of fpu sysdeps directories... yes
checking for -fstack-protector... yes
checking for -fstack-protector-strong... yes
checking for -fstack-protector-all... yes
checking for assembler and linker STT_GNU_IFUNC support... yes
checking for gcc attribute ifunc support... yes
checking whether the linker supports textrels along with ifunc... yes
checking for GNU attribute retain support... no
checking if compiler warns about alias for function with incompatible types... yes
checking sysdep dirs... sysdeps/unix/sysv/linux/x86_64/64 sysdeps/unix/sysv/linux/x86_64 sysdeps/unix/sysv/linux/x86 sysdeps/x86/nptl sysdeps/unix/sysv/linux/wordsize-64 sysdeps/x86_64/nptl sysdeps/unix/sysv/linux sysdeps/nptl sysdeps/pthread sysdeps/gnu sysdeps/unix/inet sysdeps/unix/sysv sysdeps/unix/x86_64 sysdeps/unix sysdeps/posix sysdeps/x86_64/64 sysdeps/x86_64/fpu/multiarch sysdeps/x86_64/fpu sysdeps/x86/fpu sysdeps/x86_64/multiarch sysdeps/x86_64 sysdeps/x86 sysdeps/ieee754/float128 sysdeps/ieee754/ldbl-96 sysdeps/ieee754/dbl-64 sysdeps/ieee754/flt-32 sysdeps/wordsize-64 sysdeps/ieee754 sysdeps/generic
checking for a BSD-compatible install... /usr/bin/install -c
checking whether ln -s works... yes
checking whether /usr/bin/as is GNU as... yes
checking whether /usr/bin/ld is GNU ld... yes
checking for /usr/bin/as... /usr/bin/as
checking version of /usr/bin/as... 2.31.1, ok
checking for /usr/bin/ld... /usr/bin/ld
checking version of /usr/bin/ld... 2.31.1, ok
checking for gnumake... no
checking for gmake... no
checking for make... make
checking version of make... 4.2.1, ok
checking for gnumsgfmt... no
checking for gmsgfmt... no
checking for msgfmt... msgfmt
checking version of msgfmt... 0.19.8.1, ok
checking for makeinfo... no
checking for sed... sed
checking version of sed... 4.7, ok
checking for gawk... gawk
checking version of gawk... 4.2.1, ok
checking for bison... no
checking if gcc -B/usr/bin/ is sufficient to build libc... yes
checking for nm... nm
checking for python3... python3
checking version of python3... 3.7.3, ok
configure: error: 
*** These critical programs are missing or too old: bison
*** Check the INSTALL file for required versions.

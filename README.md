# CircularLinkedListEX

i461@tsinch:~/glibc-2.34/build$ make -j$(nproc)                             make -r PARALLELMFLAGS="" -C .. objdir=`pwd` all
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
make[1]: Entering directory '/home/i461/glibc-2.34'
LC_ALL=C gawk -f scripts/sysd-rules.awk > /home/i461/glibc-2.34/build/sysd-rulesT \
                -v all_object_suffixes='.o .os .oS' \
                -v inhibit_sysdep_asm='' \
                -v sysd_rules_patterns='%:% rtld-%:rtld-% rtld-%:% m_%:s_%' \
                -v config_sysdirs='sysdeps/unix/sysv/linux/x86_64/64 sysdeps/unix/sysv/linux/x86_64 sysdeps/unix/sysv/linux/x86 sysdeps/x86/nptl sysdeps/unix/sysv/linux/wordsize-64 sysdeps/x86_64/nptl sysdeps/unix/sysv/linux sysdeps/nptl sysdeps/pthread sysdeps/gnu sysdeps/unix/inet sysdeps/unix/sysv sysdeps/unix/x86_64 sysdeps/unix sysdeps/posix sysdeps/x86_64/64 sysdeps/x86_64/fpu/multiarch sysdeps/x86_64/fpu sysdeps/x86/fpu sysdeps/x86_64/multiarch sysdeps/x86_64 sysdeps/x86 sysdeps/ieee754/float128 sysdeps/ieee754/ldbl-96 sysdeps/ieee754/dbl-64 sysdeps/ieee754/flt-32 sysdeps/wordsize-64 sysdeps/ieee754 sysdeps/generic'
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
/bin/sh: line 4: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
mv -f /home/i461/glibc-2.34/build/sysd-rulesT /home/i461/glibc-2.34/build/sysd-rules
gawk -f scripts/gen-sorted.awk \
       -v subdirs='csu assert ctype locale intl catgets math setjmp signal stdlib stdio-common libio malloc string wcsmbs time dirent grp pwd posix io termios resource misc socket sysvipc gmon gnulib iconv iconvdata wctype manual shadow gshadow po argp localedata timezone rt conform debug mathvec support dlfcn elf crypt' \
       -v srcpfx='' \
       sysdeps/nptl/Subdirs sysdeps/unix/inet/Subdirs sysdeps/posix/Subdirs assert/Depend catgets/Depend debug/Depend iconvdata/Depend intl/Depend libio/Depend localedata/Depend malloc/Depend mathvec/Depend posix/Depend rt/Depend stdio-common/Depend stdlib/Depend string/Depend time/Depend wcsmbs/Depend > /home/i461/glibc-2.34/build/sysd-sorted-tmp
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
mv -f /home/i461/glibc-2.34/build/sysd-sorted-tmp /home/i461/glibc-2.34/build/sysd-sorted
{ echo '#include "posix/bits/posix1_lim.h"';            \
} |                                                             \
gcc -B/usr/bin/ -E -dM -MD -MP -MF /home/i461/glibc-2.34/build/bits/stdio_lim.dT -MT '/home/i461/glibc-2.34/build/bits/stdio_lim.h /home/i461/glibc-2.34/build/bits/stdio_lim.d'        \
       -Iinclude   -I/home/i461/glibc-2.34/build  -Isysdeps/unix/sysv/linux/x86_64/64  -Isysdeps/unix/sysv/linux/x86_64  -Isysdeps/unix/sysv/linux/x86/include -Isysdeps/unix/sysv/linux/x86  -Isysdeps/x86/nptl  -Isysdeps/unix/sysv/linux/wordsize-64  -Isysdeps/x86_64/nptl  -Isysdeps/unix/sysv/linux/include -Isysdeps/unix/sysv/linux  -Isysdeps/nptl  -Isysdeps/pthread  -Isysdeps/gnu  -Isysdeps/unix/inet  -Isysdeps/unix/sysv  -Isysdeps/unix/x86_64  -Isysdeps/unix  -Isysdeps/posix  -Isysdeps/x86_64/64  -Isysdeps/x86_64/fpu/multiarch  -Isysdeps/x86_64/fpu  -Isysdeps/x86/fpu  -Isysdeps/x86_64/multiarch  -Isysdeps/x86_64  -Isysdeps/x86/include -Isysdeps/x86  -Isysdeps/ieee754/float128  -Isysdeps/ieee754/ldbl-96/include -Isysdeps/ieee754/ldbl-96  -Isysdeps/ieee754/dbl-64  -Isysdeps/ieee754/flt-32  -Isysdeps/wordsize-64  -Isysdeps/ieee754  -Isysdeps/generic   -Ilibio -I. -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/8/include -isystem /usr/lib/gcc/x86_64-linux-gnu/8/include-fixed -isystem /usr/include -xc - -o /home/i461/glibc-2.34/build/bits/stdio_lim.hT
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
sed -e 's@ /home/i461/glibc-2\.34/build/@ $(common-objpfx)@g' -e 's@^/home/i461/glibc-2\.34/build/@$(common-objpfx)@g' -e 's@  *\([^        \/$][^  \]*\)@ $(..)\1@g' -e 's@^\([^       \/$][^  \]*\)@$(..)\1@g'                   \
    /home/i461/glibc-2.34/build/bits/stdio_lim.dT > /home/i461/glibc-2.34/build/bits/stdio_lim.dt
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
mv -f /home/i461/glibc-2.34/build/bits/stdio_lim.dt /home/i461/glibc-2.34/build/bits/stdio_lim.d
fopen_max=`sed -n 's/^#define OPEN_MAX //1p' /home/i461/glibc-2.34/build/bits/stdio_lim.hT`;        \
filename_max=`sed -n 's/^#define PATH_MAX //1p' /home/i461/glibc-2.34/build/bits/stdio_lim.hT`;     \
fopen_max=${fopen_max:-16};                                     \
filename_max=${filename_max:-1024};                             \
sed -e "s/@FOPEN_MAX@/$fopen_max/"                              \
    -e "s/@FILENAME_MAX@/$filename_max/"                        \
    -e "s/@L_tmpnam@/20/"                               \
    -e "s/@TMP_MAX@/238328/"                            \
    -e "s/@L_ctermid@/9/"                               \
    -e "s/@L_cuserid@/9/"                               \
    stdio-common/stdio_lim.h.in > /home/i461/glibc-2.34/build/bits/stdio_lim.h.new
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
/bin/sh scripts/move-if-change /home/i461/glibc-2.34/build/bits/stdio_lim.h.new /home/i461/glibc-2.34/build/bits/stdio_lim.h
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
rm -f /home/i461/glibc-2.34/build/bits/stdio_lim.hT /home/i461/glibc-2.34/build/bits/stdio_lim.dT /home/i461/glibc-2.34/build/bits/stdio_lim.dt
touch /home/i461/glibc-2.34/build/bits/stdio_lim.st
printf "#include <time64-compat.h>\n#ifdef TIME64_NON_DEFAULT\nhave-time64-compat = yes\n#endif" \
| gcc -B/usr/bin/ -E -undef     -Iinclude   -I/home/i461/glibc-2.34/build  -Isysdeps/unix/sysv/linux/x86_64/64  -Isysdeps/unix/sysv/linux/x86_64  -Isysdeps/unix/sysv/linux/x86/include -Isysdeps/unix/sysv/linux/x86  -Isysdeps/x86/nptl  -Isysdeps/unix/sysv/linux/wordsize-64  -Isysdeps/x86_64/nptl  -Isysdeps/unix/sysv/linux/include -Isysdeps/unix/sysv/linux  -Isysdeps/nptl  -Isysdeps/pthread  -Isysdeps/gnu  -Isysdeps/unix/inet  -Isysdeps/unix/sysv  -Isysdeps/unix/x86_64  -Isysdeps/unix  -Isysdeps/posix  -Isysdeps/x86_64/64  -Isysdeps/x86_64/fpu/multiarch  -Isysdeps/x86_64/fpu  -Isysdeps/x86/fpu  -Isysdeps/x86_64/multiarch  -Isysdeps/x86_64  -Isysdeps/x86/include -Isysdeps/x86  -Isysdeps/ieee754/float128  -Isysdeps/ieee754/ldbl-96/include -Isysdeps/ieee754/ldbl-96  -Isysdeps/ieee754/dbl-64  -Isysdeps/ieee754/flt-32  -Isysdeps/wordsize-64  -Isysdeps/ieee754  -Isysdeps/generic   -Ilibio -I. -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/8/include -isystem /usr/lib/gcc/x86_64-linux-gnu/8/include-fixed -isystem /usr/include  -D_LIBC_REENTRANT  -include include/libc-symbols.h       -DTOP_NAMESPACE=glibc -x assembler-with-cpp - > /home/i461/glibc-2.34/build/time64-compat.mk.iT
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
mv -f /home/i461/glibc-2.34/build/time64-compat.mk.iT /home/i461/glibc-2.34/build/time64-compat.mk.i
sed '/^[        ]*#/d;/^[       ]*$/d' /home/i461/glibc-2.34/build/time64-compat.mk.i > /home/i461/glibc-2.34/build/time64-compat.mkT
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
mv -f /home/i461/glibc-2.34/build/time64-compat.mkT /home/i461/glibc-2.34/build/time64-compat.mk
sed '/^[        ]*%/!s/#.*$//;/^[       ]*$/d;s/^[      ]*%/#/' \
    sysdeps/unix/sysv/linux/x86_64/64/shlib-versions sysdeps/unix/sysv/linux/shlib-versions nptl/shlib-versions nptl_db/shlib-versions shlib-versions \
| gcc -B/usr/bin/ -E -undef     -Iinclude   -I/home/i461/glibc-2.34/build  -Isysdeps/unix/sysv/linux/x86_64/64  -Isysdeps/unix/sysv/linux/x86_64  -Isysdeps/unix/sysv/linux/x86/include -Isysdeps/unix/sysv/linux/x86  -Isysdeps/x86/nptl  -Isysdeps/unix/sysv/linux/wordsize-64  -Isysdeps/x86_64/nptl  -Isysdeps/unix/sysv/linux/include -Isysdeps/unix/sysv/linux  -Isysdeps/nptl  -Isysdeps/pthread  -Isysdeps/gnu  -Isysdeps/unix/inet  -Isysdeps/unix/sysv  -Isysdeps/unix/x86_64  -Isysdeps/unix  -Isysdeps/posix  -Isysdeps/x86_64/64  -Isysdeps/x86_64/fpu/multiarch  -Isysdeps/x86_64/fpu  -Isysdeps/x86/fpu  -Isysdeps/x86_64/multiarch  -Isysdeps/x86_64  -Isysdeps/x86/include -Isysdeps/x86  -Isysdeps/ieee754/float128  -Isysdeps/ieee754/ldbl-96/include -Isysdeps/ieee754/ldbl-96  -Isysdeps/ieee754/dbl-64  -Isysdeps/ieee754/flt-32  -Isysdeps/wordsize-64  -Isysdeps/ieee754  -Isysdeps/generic   -Ilibio -I. -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/8/include -isystem /usr/lib/gcc/x86_64-linux-gnu/8/include-fixed -isystem /usr/include  -D_LIBC_REENTRANT  -include include/libc-symbols.h       -DTOP_NAMESPACE=glibc -x assembler-with-cpp - \
           > /home/i461/glibc-2.34/build/shlib-versions.v.iT
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
mv -f /home/i461/glibc-2.34/build/shlib-versions.v.iT /home/i461/glibc-2.34/build/shlib-versions.v.i
sed '/^[        ]*#/d;/^[       ]*$/d' /home/i461/glibc-2.34/build/shlib-versions.v.i > /home/i461/glibc-2.34/build/shlib-versions.vT
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
mv -f /home/i461/glibc-2.34/build/shlib-versions.vT /home/i461/glibc-2.34/build/shlib-versions.v
gawk -f scripts/soversions.awk /home/i461/glibc-2.34/build/shlib-versions.v > /home/i461/glibc-2.34/build/soversions.iT
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
mv -f /home/i461/glibc-2.34/build/soversions.iT /home/i461/glibc-2.34/build/soversions.i
sed '/^[        ]*%/!s/#.*$//;/^[       ]*$/d;s/^[      ]*%/#/' \
    csu/Versions iconv/Versions locale/Versions assert/Versions ctype/Versions intl/Versions catgets/Versions math/Versions setjmp/Versions signal/Versions stdlib/Versions stdio-common/Versions libio/Versions dlfcn/Versions nptl/Versions rt/Versions malloc/Versions string/Versions wcsmbs/Versions time/Versions dirent/Versions grp/Versions pwd/Versions posix/Versions io/Versions termios/Versions resource/Versions misc/Versions socket/Versions sysvipc/Versions gmon/Versions wctype/Versions shadow/Versions gshadow/Versions argp/Versions debug/Versions crypt/Versions nptl_db/Versions inet/Versions resolv/Versions nss/Versions hesiod/Versions sunrpc/Versions nis/Versions login/Versions elf/Versions sysdeps/unix/sysv/linux/x86_64/Versions sysdeps/unix/sysv/linux/wordsize-64/Versions sysdeps/unix/sysv/linux/Versions sysdeps/x86_64/fpu/Versions sysdeps/x86_64/Versions sysdeps/x86/Versions sysdeps/ieee754/float128/Versions sysdeps/wordsize-64/Versions \
| gcc -B/usr/bin/ -E -undef     -Iinclude   -I/home/i461/glibc-2.34/build  -Isysdeps/unix/sysv/linux/x86_64/64  -Isysdeps/unix/sysv/linux/x86_64  -Isysdeps/unix/sysv/linux/x86/include -Isysdeps/unix/sysv/linux/x86  -Isysdeps/x86/nptl  -Isysdeps/unix/sysv/linux/wordsize-64  -Isysdeps/x86_64/nptl  -Isysdeps/unix/sysv/linux/include -Isysdeps/unix/sysv/linux  -Isysdeps/nptl  -Isysdeps/pthread  -Isysdeps/gnu  -Isysdeps/unix/inet  -Isysdeps/unix/sysv  -Isysdeps/unix/x86_64  -Isysdeps/unix  -Isysdeps/posix  -Isysdeps/x86_64/64  -Isysdeps/x86_64/fpu/multiarch  -Isysdeps/x86_64/fpu  -Isysdeps/x86/fpu  -Isysdeps/x86_64/multiarch  -Isysdeps/x86_64  -Isysdeps/x86/include -Isysdeps/x86  -Isysdeps/ieee754/float128  -Isysdeps/ieee754/ldbl-96/include -Isysdeps/ieee754/ldbl-96  -Isysdeps/ieee754/dbl-64  -Isysdeps/ieee754/flt-32  -Isysdeps/wordsize-64  -Isysdeps/ieee754  -Isysdeps/generic   -Ilibio -I. -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/8/include -isystem /usr/lib/gcc/x86_64-linux-gnu/8/include-fixed -isystem /usr/include  -D_LIBC_REENTRANT  -include include/libc-symbols.h       -DTOP_NAMESPACE=glibc -x assembler-with-cpp - \
           > /home/i461/glibc-2.34/build/Versions.v.iT
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
mv -f /home/i461/glibc-2.34/build/Versions.v.iT /home/i461/glibc-2.34/build/Versions.v.i
sed '/^[        ]*#/d;/^[       ]*$/d' /home/i461/glibc-2.34/build/Versions.v.i > /home/i461/glibc-2.34/build/Versions.vT
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
mv -f /home/i461/glibc-2.34/build/Versions.vT /home/i461/glibc-2.34/build/Versions.v
LC_ALL=C gawk -f scripts/versionlist.awk /home/i461/glibc-2.34/build/Versions.v > /home/i461/glibc-2.34/build/Versions.defT
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
mv -f /home/i461/glibc-2.34/build/Versions.defT /home/i461/glibc-2.34/build/Versions.def
{ while read which lib version setname; do \
    test x"$which" = xDEFAULT || continue; \
    test -z "$setname" || echo "$lib : $setname"; \
  done < /home/i461/glibc-2.34/build/soversions.i; \
  cat /home/i461/glibc-2.34/build/Versions.def; \
} | LC_ALL=C gawk -f scripts/firstversions.awk > /home/i461/glibc-2.34/build/Versions.allT
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
mv -f /home/i461/glibc-2.34/build/Versions.allT /home/i461/glibc-2.34/build/Versions.all
gawk -f scripts/haveversions.awk /home/i461/glibc-2.34/build/Versions.all > /home/i461/glibc-2.34/build/Versions.mkT
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
mv -f /home/i461/glibc-2.34/build/Versions.mkT /home/i461/glibc-2.34/build/Versions.mk
( echo 'sysd-versions-subdirs = csu iconv locale localedata iconvdata assert ctype intl catgets math setjmp signal stdlib stdio-common libio dlfcn nptl rt malloc string wcsmbs timezone time dirent grp pwd posix io termios resource misc socket sysvipc gmon gnulib wctype manual shadow gshadow po argp conform debug mathvec support crypt nptl_db inet resolv nss hesiod sunrpc nis nscd login elf sysdeps/unix/sysv/linux/x86_64/64 sysdeps/unix/sysv/linux/x86_64 sysdeps/unix/sysv/linux/x86 sysdeps/x86/nptl sysdeps/unix/sysv/linux/wordsize-64 sysdeps/x86_64/nptl sysdeps/unix/sysv/linux sysdeps/nptl sysdeps/pthread sysdeps/gnu sysdeps/unix/inet sysdeps/unix/sysv sysdeps/unix/x86_64 sysdeps/unix sysdeps/posix sysdeps/x86_64/64 sysdeps/x86_64/fpu/multiarch sysdeps/x86_64/fpu sysdeps/x86/fpu sysdeps/x86_64/multiarch sysdeps/x86_64 sysdeps/x86 sysdeps/ieee754/float128 sysdeps/ieee754/ldbl-96 sysdeps/ieee754/dbl-64 sysdeps/ieee754/flt-32 sysdeps/wordsize-64 sysdeps/ieee754 sysdeps/generic' ; \
  cat /home/i461/glibc-2.34/build/Versions.v \
  | LC_ALL=C gawk -v buildroot=/home/i461/glibc-2.34/build/ -v defsfile=/home/i461/glibc-2.34/build/Versions.all \
                    -v move_if_change='/bin/sh scripts/move-if-change' \
                    -f scripts/versions.awk; \
) > /home/i461/glibc-2.34/build/sysd-versionsT
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
mv -f /home/i461/glibc-2.34/build/sysd-versionsT /home/i461/glibc-2.34/build/sysd-versions
touch /home/i461/glibc-2.34/build/versions.stmp
(while read which lib number setname; do \
   eval seen_$which=1; \
   test x"$which" = xDEFAULT || continue; \
   case $number in \
     [0-9]*) echo "$lib.so-version=.$number"; \
             echo "all-sonames+=$lib=$lib.so\$($lib.so-version)";;\
     *)      echo "$lib.so-version=$number"; \
             echo "all-sonames+=$lib=\$($lib.so-version)";;\
   esac; \
 done; \
 echo soversions.mk-done = t;) < /home/i461/glibc-2.34/build/soversions.i > /home/i461/glibc-2.34/build/soversions.mkT; exit 0
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
mv -f /home/i461/glibc-2.34/build/soversions.mkT /home/i461/glibc-2.34/build/soversions.mk
gawk -v buildlist="iconvprogs iconvdata ldconfig lddlibc4 libmemusage libSegFault libpcprofile librpcsvc locale_programs memusagestat nonlib nscd extramodules libnldbl libsupport testsuite" -f scripts/gen-libc-modules.awk /home/i461/glibc-2.34/build/soversions.i > /home/i461/glibc-2.34/build/libc-modules.T
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
/bin/sh scripts/move-if-change /home/i461/glibc-2.34/build/libc-modules.T /home/i461/glibc-2.34/build/libc-modules.h
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
touch /home/i461/glibc-2.34/build/libc-modules.stmp
for dir in /home/i461/glibc-2.34/build sysdeps/unix/sysv/linux/x86_64/64 sysdeps/unix/sysv/linux/x86_64 sysdeps/unix/sysv/linux/x86 sysdeps/x86/nptl sysdeps/unix/sysv/linux/wordsize-64 sysdeps/x86_64/nptl sysdeps/unix/sysv/linux sysdeps/nptl sysdeps/pthread sysdeps/gnu sysdeps/unix/inet sysdeps/unix/sysv sysdeps/unix/x86_64 sysdeps/unix sysdeps/posix sysdeps/x86_64/64 sysdeps/x86_64/fpu/multiarch sysdeps/x86_64/fpu sysdeps/x86/fpu sysdeps/x86_64/multiarch sysdeps/x86_64 sysdeps/x86 sysdeps/ieee754/float128 sysdeps/ieee754/ldbl-96 sysdeps/ieee754/dbl-64 sysdeps/ieee754/flt-32 sysdeps/wordsize-64 sysdeps/ieee754 sysdeps/generic; do \
  test -f $dir/syscalls.list && \
  { sysdirs='sysdeps/unix/sysv/linux/x86_64/64 sysdeps/unix/sysv/linux/x86_64 sysdeps/unix/sysv/linux/x86 sysdeps/x86/nptl sysdeps/unix/sysv/linux/wordsize-64 sysdeps/x86_64/nptl sysdeps/unix/sysv/linux sysdeps/nptl sysdeps/pthread sysdeps/gnu sysdeps/unix/inet sysdeps/unix/sysv sysdeps/unix/x86_64 sysdeps/unix sysdeps/posix sysdeps/x86_64/64 sysdeps/x86_64/fpu/multiarch sysdeps/x86_64/fpu sysdeps/x86/fpu sysdeps/x86_64/multiarch sysdeps/x86_64 sysdeps/x86 sysdeps/ieee754/float128 sysdeps/ieee754/ldbl-96 sysdeps/ieee754/dbl-64 sysdeps/ieee754/flt-32 sysdeps/wordsize-64 sysdeps/ieee754 sysdeps/generic' \
    asm_CPP='gcc -B/usr/bin/ -c     -Iinclude   -I/home/i461/glibc-2.34/build  -Isysdeps/unix/sysv/linux/x86_64/64  -Isysdeps/unix/sysv/linux/x86_64  -Isysdeps/unix/sysv/linux/x86/include -Isysdeps/unix/sysv/linux/x86  -Isysdeps/x86/nptl  -Isysdeps/unix/sysv/linux/wordsize-64  -Isysdeps/x86_64/nptl  -Isysdeps/unix/sysv/linux/include -Isysdeps/unix/sysv/linux  -Isysdeps/nptl  -Isysdeps/pthread  -Isysdeps/gnu  -Isysdeps/unix/inet  -Isysdeps/unix/sysv  -Isysdeps/unix/x86_64  -Isysdeps/unix  -Isysdeps/posix  -Isysdeps/x86_64/64  -Isysdeps/x86_64/fpu/multiarch  -Isysdeps/x86_64/fpu  -Isysdeps/x86/fpu  -Isysdeps/x86_64/multiarch  -Isysdeps/x86_64  -Isysdeps/x86/include -Isysdeps/x86  -Isysdeps/ieee754/float128  -Isysdeps/ieee754/ldbl-96/include -Isysdeps/ieee754/ldbl-96  -Isysdeps/ieee754/dbl-64  -Isysdeps/ieee754/flt-32  -Isysdeps/wordsize-64  -Isysdeps/ieee754  -Isysdeps/generic   -Ilibio -I. -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/8/include -isystem /usr/lib/gcc/x86_64-linux-gnu/8/include-fixed -isystem /usr/include  -D_LIBC_REENTRANT -include /home/i461/glibc-2.34/build/libc-modules.h -DMODULE_NAME=libc -include include/libc-symbols.h       -DTOP_NAMESPACE=glibc -DASSEMBLER  -g -Werror=undef -Wa,--noexecstack   -E -x assembler-with-cpp' \
    /bin/sh sysdeps/unix/make-syscalls.sh $dir || exit 1; }; \
  test $dir = sysdeps/unix && break; \
done > /home/i461/glibc-2.34/build/sysd-syscallsT
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
In file included from sysdeps/unix/sysv/linux/bits/errno.h:26,
                 from ./stdlib/errno.h:28,
                 from include/errno.h:2,
                 from ./sysdeps/unix/sysv/linux/sysdep.h:24,
                 from sysdeps/unix/sysv/linux/x86_64/sysdep.h:22,
                 from <stdin>:1:
/usr/include/linux/errno.h:1:10: fatal error: asm/errno.h: No such file or directory
 #include <asm/errno.h>
          ^~~~~~~~~~~~~
compilation terminated.
In file included from sysdeps/unix/sysv/linux/bits/errno.h:26,
                 from ./stdlib/errno.h:28,
                 from include/errno.h:2,
                 from ./sysdeps/unix/sysv/linux/sysdep.h:24,
                 from sysdeps/unix/sysv/linux/x86_64/sysdep.h:22,
                 from <stdin>:1:
/usr/include/linux/errno.h:1:10: fatal error: asm/errno.h: No such file or directory
 #include <asm/errno.h>
          ^~~~~~~~~~~~~
compilation terminated.
In file included from sysdeps/unix/sysv/linux/bits/errno.h:26,
                 from ./stdlib/errno.h:28,
                 from include/errno.h:2,
                 from ./sysdeps/unix/sysv/linux/sysdep.h:24,
                 from sysdeps/unix/sysv/linux/x86_64/sysdep.h:22,
                 from <stdin>:1:
/usr/include/linux/errno.h:1:10: fatal error: asm/errno.h: No such file or directory
 #include <asm/errno.h>
          ^~~~~~~~~~~~~
compilation terminated.
sysdeps/unix/make-syscalls.sh: no number for , no-error syscall (__syscall_clock_gettime )

type "make help" for help with common glibc makefile targets

rm -f /home/i461/glibc-2.34/build/stamp.o; > /home/i461/glibc-2.34/build/stamp.o
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
rm -f /home/i461/glibc-2.34/build/stamp.os; > /home/i461/glibc-2.34/build/stamp.os
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
rm -f /home/i461/glibc-2.34/build/stamp.oS; > /home/i461/glibc-2.34/build/stamp.oS
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
make  subdir=csu -C csu ..=../ subdir_lib
make[2]: Entering directory '/home/i461/glibc-2.34/csu'
for dir in /home/i461/glibc-2.34/build ../sysdeps/unix/sysv/linux/x86_64/64 ../sysdeps/unix/sysv/linux/x86_64 ../sysdeps/unix/sysv/linux/x86 ../sysdeps/x86/nptl ../sysdeps/unix/sysv/linux/wordsize-64 ../sysdeps/x86_64/nptl ../sysdeps/unix/sysv/linux ../sysdeps/nptl ../sysdeps/pthread ../sysdeps/gnu ../sysdeps/unix/inet ../sysdeps/unix/sysv ../sysdeps/unix/x86_64 ../sysdeps/unix ../sysdeps/posix ../sysdeps/x86_64/64 ../sysdeps/x86_64/fpu/multiarch ../sysdeps/x86_64/fpu ../sysdeps/x86/fpu ../sysdeps/x86_64/multiarch ../sysdeps/x86_64 ../sysdeps/x86 ../sysdeps/ieee754/float128 ../sysdeps/ieee754/ldbl-96 ../sysdeps/ieee754/dbl-64 ../sysdeps/ieee754/flt-32 ../sysdeps/wordsize-64 ../sysdeps/ieee754 ../sysdeps/generic; do \
  test -f $dir/syscalls.list && \
  { sysdirs='../sysdeps/unix/sysv/linux/x86_64/64 ../sysdeps/unix/sysv/linux/x86_64 ../sysdeps/unix/sysv/linux/x86 ../sysdeps/x86/nptl ../sysdeps/unix/sysv/linux/wordsize-64 ../sysdeps/x86_64/nptl ../sysdeps/unix/sysv/linux ../sysdeps/nptl ../sysdeps/pthread ../sysdeps/gnu ../sysdeps/unix/inet ../sysdeps/unix/sysv ../sysdeps/unix/x86_64 ../sysdeps/unix ../sysdeps/posix ../sysdeps/x86_64/64 ../sysdeps/x86_64/fpu/multiarch ../sysdeps/x86_64/fpu ../sysdeps/x86/fpu ../sysdeps/x86_64/multiarch ../sysdeps/x86_64 ../sysdeps/x86 ../sysdeps/ieee754/float128 ../sysdeps/ieee754/ldbl-96 ../sysdeps/ieee754/dbl-64 ../sysdeps/ieee754/flt-32 ../sysdeps/wordsize-64 ../sysdeps/ieee754 ../sysdeps/generic' \
    asm_CPP='gcc -B/usr/bin/ -c     -I../include -I/home/i461/glibc-2.34/build/csu  -I/home/i461/glibc-2.34/build  -I../sysdeps/unix/sysv/linux/x86_64/64  -I../sysdeps/unix/sysv/linux/x86_64  -I../sysdeps/unix/sysv/linux/x86/include -I../sysdeps/unix/sysv/linux/x86  -I../sysdeps/x86/nptl  -I../sysdeps/unix/sysv/linux/wordsize-64  -I../sysdeps/x86_64/nptl  -I../sysdeps/unix/sysv/linux/include -I../sysdeps/unix/sysv/linux  -I../sysdeps/nptl  -I../sysdeps/pthread  -I../sysdeps/gnu  -I../sysdeps/unix/inet  -I../sysdeps/unix/sysv  -I../sysdeps/unix/x86_64  -I../sysdeps/unix  -I../sysdeps/posix  -I../sysdeps/x86_64/64  -I../sysdeps/x86_64/fpu/multiarch  -I../sysdeps/x86_64/fpu  -I../sysdeps/x86/fpu  -I../sysdeps/x86_64/multiarch  -I../sysdeps/x86_64  -I../sysdeps/x86/include -I../sysdeps/x86  -I../sysdeps/ieee754/float128  -I../sysdeps/ieee754/ldbl-96/include -I../sysdeps/ieee754/ldbl-96  -I../sysdeps/ieee754/dbl-64  -I../sysdeps/ieee754/flt-32  -I../sysdeps/wordsize-64  -I../sysdeps/ieee754  -I../sysdeps/generic  -I.. -I../libio -I. -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/8/include -isystem /usr/lib/gcc/x86_64-linux-gnu/8/include-fixed -isystem /usr/include  -D_LIBC_REENTRANT -include /home/i461/glibc-2.34/build/libc-modules.h -DMODULE_NAME=libc -include ../include/libc-symbols.h       -DTOP_NAMESPACE=glibc -DASSEMBLER  -I/home/i461/glibc-2.34/build/csu/. -g -Werror=undef -Wa,--noexecstack   -E -x assembler-with-cpp' \
    /bin/sh ../sysdeps/unix/make-syscalls.sh $dir || exit 1; }; \
  test $dir = ../sysdeps/unix && break; \
done > /home/i461/glibc-2.34/build/sysd-syscallsT
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
In file included from ../sysdeps/unix/sysv/linux/bits/errno.h:26,
                 from ../stdlib/errno.h:28,
                 from ../include/errno.h:2,
                 from ../sysdeps/unix/sysv/linux/sysdep.h:24,
                 from ../sysdeps/unix/sysv/linux/x86_64/sysdep.h:22,
                 from <stdin>:1:
/usr/include/linux/errno.h:1:10: fatal error: asm/errno.h: No such file or directory
 #include <asm/errno.h>
          ^~~~~~~~~~~~~
compilation terminated.
In file included from ../sysdeps/unix/sysv/linux/bits/errno.h:26,
                 from ../stdlib/errno.h:28,
                 from ../include/errno.h:2,
                 from ../sysdeps/unix/sysv/linux/sysdep.h:24,
                 from ../sysdeps/unix/sysv/linux/x86_64/sysdep.h:22,
                 from <stdin>:1:
/usr/include/linux/errno.h:1:10: fatal error: asm/errno.h: No such file or directory
 #include <asm/errno.h>
          ^~~~~~~~~~~~~
compilation terminated.
In file included from ../sysdeps/unix/sysv/linux/bits/errno.h:26,
                 from ../stdlib/errno.h:28,
                 from ../include/errno.h:2,
                 from ../sysdeps/unix/sysv/linux/sysdep.h:24,
                 from ../sysdeps/unix/sysv/linux/x86_64/sysdep.h:22,
                 from <stdin>:1:
/usr/include/linux/errno.h:1:10: fatal error: asm/errno.h: No such file or directory
 #include <asm/errno.h>
          ^~~~~~~~~~~~~
compilation terminated.
../sysdeps/unix/make-syscalls.sh: no number for , no-error syscall (__syscall_clock_gettime )
/bin/sh ../scripts/gen-libc-abis \
         x86_64-pc-linux-gnu \
         < ../libc-abis > /home/i461/glibc-2.34/build/libc-abis.hT
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
/bin/sh ../scripts/move-if-change /home/i461/glibc-2.34/build/libc-abis.hT /home/i461/glibc-2.34/build/libc-abis.h
/usr/bin/install -c -m 644 /usr/include/c++/8/bits/std_abs.h /home/i461/glibc-2.34/build/bits/std_abs.hT
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
/bin/sh ../scripts/move-if-change /home/i461/glibc-2.34/build/bits/std_abs.hT /home/i461/glibc-2.34/build/bits/std_abs.h
touch /home/i461/glibc-2.34/build/libc-abis.stamp
/usr/bin/install -c -m 644 /usr/include/c++/8/cstdlib /home/i461/glibc-2.34/build/cstdlibT
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
/bin/sh ../scripts/move-if-change /home/i461/glibc-2.34/build/cstdlibT /home/i461/glibc-2.34/build/cstdlib
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
/usr/bin/install -c -m 644 /usr/include/c++/8/cmath /home/i461/glibc-2.34/build/cmathT
/bin/sh ../scripts/move-if-change /home/i461/glibc-2.34/build/cmathT /home/i461/glibc-2.34/build/cmath
LC_ALL=C gawk -f ../scripts/abi-versions.awk /home/i461/glibc-2.34/build/Versions.all > /home/i461/glibc-2.34/build/abi-versions.hT
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
mv -f /home/i461/glibc-2.34/build/abi-versions.hT /home/i461/glibc-2.34/build/abi-versions.h
gawk -f ../scripts/gen-tunables.awk ../elf/dl-tunables.list ../sysdeps/nptl/dl-tunables.list ../sysdeps/x86/dl-tunables.list > /home/i461/glibc-2.34/build/dl-tunable-list.T
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
.././scripts/mkinstalldirs /home/i461/glibc-2.34/build/csu
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
mkdir -p -- /home/i461/glibc-2.34/build/csu
rm -f /home/i461/glibc-2.34/build/csu/abi-tag.h.new
sed -e 's/#.*$//' -e '/^[       ]*$/d' ../abi-tags | \
while read conf tagos tagver; do \
  test `expr 'x86_64-pc-linux-gnu' \
             : "$conf"` != 0 || continue; \
  ( echo "$tagos" | \
    sed -e 's/[^0-9xXa-fA-F     ]//' \
        -e 's/^/#define __ABI_TAG_OS /'; \
    echo "#ifndef __ABI_TAG_VERSION"; \
    echo "$tagver" | \
    sed -e 's/[^0-9xXa-fA-F]/ /g' -e 's/ *$//' \
      -e 's/ /,/g' -e 's/^/# define __ABI_TAG_VERSION /'; \
    echo "#endif" ) > /home/i461/glibc-2.34/build/csu/abi-tag.h.new; \
done
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
/bin/sh ../scripts/move-if-change /home/i461/glibc-2.34/build/dl-tunable-list.T /home/i461/glibc-2.34/build/dl-tunable-list.h
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
touch /home/i461/glibc-2.34/build/dl-tunable-list.stmp
.././scripts/mkinstalldirs /home/i461/glibc-2.34/build/csu
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
.././scripts/mkinstalldirs /home/i461/glibc-2.34/build/gnu
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
if test -r /home/i461/glibc-2.34/build/csu/abi-tag.h.new; then mv -f /home/i461/glibc-2.34/build/csu/abi-tag.h.new /home/i461/glibc-2.34/build/csu/abi-tag.h; \
else echo >&2 'This configuration not matched in ../abi-tags'; exit 1; fi
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
.././scripts/mkinstalldirs /home/i461/glibc-2.34/build/gnu
mkdir -p -- /home/i461/glibc-2.34/build/gnu
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
{ \
 echo '/* This file is automatically generated.';\
 echo '   It defines macros to allow user program to find the shared'; \
 echo '   library files which come as part of GNU libc.  */'; \
 echo '#ifndef __GNU_LIB_NAMES_H'; \
 echo '#define __GNU_LIB_NAMES_H        1'; \
 echo ''; \
  \
   echo '#if !defined __x86_64__'; echo '# include <gnu/lib-names-32.h>'; echo '#endif';   echo '#if defined __x86_64__ && defined __LP64__'; echo '# include <gnu/lib-names-64.h>'; echo '#endif';   echo '#if defined __x86_64__ && defined __ILP32__'; echo '# include <gnu/lib-names-x32.h>'; echo '#endif'; \
 echo ''; \
 echo '#endif   /* gnu/lib-names.h */'; \
} >  /home/i461/glibc-2.34/build/gnu/lib-names.h
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
mkdir -p -- /home/i461/glibc-2.34/build/gnu
echo '' > /home/i461/glibc-2.34/build/csu/stamp.oST
{ \
  echo '/* This file is automatically generated.  */'; echo '#ifndef __GNU_LIB_NAMES_H'; echo '# error "Never use <gnu/lib-names-64.h> directly; include <gnu/lib-names.h> instead."'; echo '#endif'; \
 echo ''; \
 ( echo ld=ld-linux-x86-64.so.2;  echo libc=libc.so.6;  echo libBrokenLocale=libBrokenLocale.so.1;  echo libpthread=libpthread.so.0;  echo libthread_db=libthread_db.so.1;  echo libcrypt=libcrypt.so.1;  echo libdl=libdl.so.2;  echo libgcc_s=libgcc_s.so.1;  echo libnss_test1=libnss_test1.so.2;  echo libnsl=libnsl.so.1;  echo libc_malloc_debug=libc_malloc_debug.so.0;  echo libutil=libutil.so.1;  echo libnss_ldap=libnss_ldap.so.2;  echo libnss_test2=libnss_test2.so.2;  echo libnss_dns=libnss_dns.so.2;  echo libnss_compat=libnss_compat.so.2;  echo libmvec=libmvec.so.1;  echo libresolv=libresolv.so.2;  echo libnss_db=libnss_db.so.2;  echo libm=libm.so.6;  echo libnss_files=libnss_files.so.2;  echo librt=librt.so.1;  echo libnss_hesiod=libnss_hesiod.so.2;  echo libanl=libanl.so.1;) \
 | LC_ALL=C gawk -f ../scripts/lib-names.awk | LC_ALL=C sort; \
  \
} >  /home/i461/glibc-2.34/build/gnu/lib-names-64.T
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
mv -f /home/i461/glibc-2.34/build/csu/stamp.oST /home/i461/glibc-2.34/build/csu/stamp.oS
python3 -B ../scripts/gen-as-const.py --cc="gcc -B/usr/bin/ -std=gnu11 -fgnu89-inline  -g -O2 -Wall -Wwrite-strings -Wundef -Werror -fmerge-all-constants -frounding-math -fno-stack-protector -fno-common -Wstrict-prototypes -Wold-style-definition -fmath-errno     -ftls-model=initial-exec      -I../include -I/home/i461/glibc-2.34/build/csu  -I/home/i461/glibc-2.34/build  -I../sysdeps/unix/sysv/linux/x86_64/64  -I../sysdeps/unix/sysv/linux/x86_64  -I../sysdeps/unix/sysv/linux/x86/include -I../sysdeps/unix/sysv/linux/x86  -I../sysdeps/x86/nptl  -I../sysdeps/unix/sysv/linux/wordsize-64  -I../sysdeps/x86_64/nptl  -I../sysdeps/unix/sysv/linux/include -I../sysdeps/unix/sysv/linux  -I../sysdeps/nptl  -I../sysdeps/pthread  -I../sysdeps/gnu  -I../sysdeps/unix/inet  -I../sysdeps/unix/sysv  -I../sysdeps/unix/x86_64  -I../sysdeps/unix  -I../sysdeps/posix  -I../sysdeps/x86_64/64  -I../sysdeps/x86_64/fpu/multiarch  -I../sysdeps/x86_64/fpu  -I../sysdeps/x86/fpu  -I../sysdeps/x86_64/multiarch  -I../sysdeps/x86_64  -I../sysdeps/x86/include -I../sysdeps/x86  -I../sysdeps/ieee754/float128  -I../sysdeps/ieee754/ldbl-96/include -I../sysdeps/ieee754/ldbl-96  -I../sysdeps/ieee754/dbl-64  -I../sysdeps/ieee754/flt-32  -I../sysdeps/wordsize-64  -I../sysdeps/ieee754  -I../sysdeps/generic  -I.. -I../libio -I. -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/8/include -isystem /usr/lib/gcc/x86_64-linux-gnu/8/include-fixed -isystem /usr/include  -D_LIBC_REENTRANT -include /home/i461/glibc-2.34/build/libc-modules.h -DMODULE_NAME=libc -include ../include/libc-symbols.h       -DTOP_NAMESPACE=glibc -DGEN_AS_CONST_HEADERS \
                   -MD -MP -MF /home/i461/glibc-2.34/build/ucontext_i.h.dT \
                   -MT '/home/i461/glibc-2.34/build/ucontext_i.h.d /home/i461/glibc-2.34/build/ucontext_i.h'" \
          ../sysdeps/unix/sysv/linux/x86_64/ucontext_i.sym > /home/i461/glibc-2.34/build/ucontext_i.hT
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
/bin/sh ../scripts/move-if-change /home/i461/glibc-2.34/build/gnu/lib-names-64.T /home/i461/glibc-2.34/build/gnu/lib-names-64.h
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
touch /home/i461/glibc-2.34/build/gnu/lib-names-64.stmp
python3 -B ../scripts/gen-as-const.py --cc="gcc -B/usr/bin/ -std=gnu11 -fgnu89-inline  -g -O2 -Wall -Wwrite-strings -Wundef -Werror -fmerge-all-constants -frounding-math -fno-stack-protector -fno-common -Wstrict-prototypes -Wold-style-definition -fmath-errno     -ftls-model=initial-exec      -I../include -I/home/i461/glibc-2.34/build/csu  -I/home/i461/glibc-2.34/build  -I../sysdeps/unix/sysv/linux/x86_64/64  -I../sysdeps/unix/sysv/linux/x86_64  -I../sysdeps/unix/sysv/linux/x86/include -I../sysdeps/unix/sysv/linux/x86  -I../sysdeps/x86/nptl  -I../sysdeps/unix/sysv/linux/wordsize-64  -I../sysdeps/x86_64/nptl  -I../sysdeps/unix/sysv/linux/include -I../sysdeps/unix/sysv/linux  -I../sysdeps/nptl  -I../sysdeps/pthread  -I../sysdeps/gnu  -I../sysdeps/unix/inet  -I../sysdeps/unix/sysv  -I../sysdeps/unix/x86_64  -I../sysdeps/unix  -I../sysdeps/posix  -I../sysdeps/x86_64/64  -I../sysdeps/x86_64/fpu/multiarch  -I../sysdeps/x86_64/fpu  -I../sysdeps/x86/fpu  -I../sysdeps/x86_64/multiarch  -I../sysdeps/x86_64  -I../sysdeps/x86/include -I../sysdeps/x86  -I../sysdeps/ieee754/float128  -I../sysdeps/ieee754/ldbl-96/include -I../sysdeps/ieee754/ldbl-96  -I../sysdeps/ieee754/dbl-64  -I../sysdeps/ieee754/flt-32  -I../sysdeps/wordsize-64  -I../sysdeps/ieee754  -I../sysdeps/generic  -I.. -I../libio -I. -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/8/include -isystem /usr/lib/gcc/x86_64-linux-gnu/8/include-fixed -isystem /usr/include  -D_LIBC_REENTRANT -include /home/i461/glibc-2.34/build/libc-modules.h -DMODULE_NAME=libc -include ../include/libc-symbols.h       -DTOP_NAMESPACE=glibc -DGEN_AS_CONST_HEADERS \
                   -MD -MP -MF /home/i461/glibc-2.34/build/tcb-offsets.h.dT \
                   -MT '/home/i461/glibc-2.34/build/tcb-offsets.h.d /home/i461/glibc-2.34/build/tcb-offsets.h'" \
          ../sysdeps/x86_64/nptl/tcb-offsets.sym > /home/i461/glibc-2.34/build/tcb-offsets.hT
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
In file included from ../sysdeps/unix/sysv/linux/bits/errno.h:26,
                 from ../stdlib/errno.h:28,
                 from ../include/errno.h:2,
                 from ../sysdeps/unix/sysv/linux/sysdep.h:24,
                 from ../sysdeps/unix/sysv/linux/x86_64/sysdep.h:22,
                 from <stdin>:1:
/usr/include/linux/errno.h:1:10: fatal error: asm/errno.h: No such file or directory
 #include <asm/errno.h>
          ^~~~~~~~~~~~~
compilation terminated.
Traceback (most recent call last):
  File "../scripts/gen-as-const.py", line 120, in <module>
    main()
  File "../scripts/gen-as-const.py", line 116, in main
    consts = glibcextract.compute_c_consts(sym_data, args.cc)
  File "/home/i461/glibc-2.34/scripts/glibcextract.py", line 62, in compute_c_consts
    subprocess.check_call(cmd, shell=True)
  File "/usr/lib/python3.7/subprocess.py", line 347, in check_call
    raise CalledProcessError(retcode, cmd)
subprocess.CalledProcessError: Command 'gcc -B/usr/bin/ -std=gnu11 -fgnu89-inline  -g -O2 -Wall -Wwrite-strings -Wundef -Werror -fmerge-all-constants -frounding-math -fno-stack-protector -fno-common -Wstrict-prototypes -Wold-style-definition -fmath-errno     -ftls-model=initial-exec      -I../include -I/home/i461/glibc-2.34/build/csu  -I/home/i461/glibc-2.34/build  -I../sysdeps/unix/sysv/linux/x86_64/64  -I../sysdeps/unix/sysv/linux/x86_64  -I../sysdeps/unix/sysv/linux/x86/include -I../sysdeps/unix/sysv/linux/x86  -I../sysdeps/x86/nptl  -I../sysdeps/unix/sysv/linux/wordsize-64  -I../sysdeps/x86_64/nptl  -I../sysdeps/unix/sysv/linux/include -I../sysdeps/unix/sysv/linux  -I../sysdeps/nptl  -I../sysdeps/pthread  -I../sysdeps/gnu  -I../sysdeps/unix/inet  -I../sysdeps/unix/sysv  -I../sysdeps/unix/x86_64  -I../sysdeps/unix  -I../sysdeps/posix  -I../sysdeps/x86_64/64  -I../sysdeps/x86_64/fpu/multiarch  -I../sysdeps/x86_64/fpu  -I../sysdeps/x86/fpu  -I../sysdeps/x86_64/multiarch  -I../sysdeps/x86_64  -I../sysdeps/x86/include -I../sysdeps/x86  -I../sysdeps/ieee754/float128  -I../sysdeps/ieee754/ldbl-96/include -I../sysdeps/ieee754/ldbl-96  -I../sysdeps/ieee754/dbl-64  -I../sysdeps/ieee754/flt-32  -I../sysdeps/wordsize-64  -I../sysdeps/ieee754  -I../sysdeps/generic  -I.. -I../libio -I. -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/8/include -isystem /usr/lib/gcc/x86_64-linux-gnu/8/include-fixed -isystem /usr/include  -D_LIBC_REENTRANT -include /home/i461/glibc-2.34/build/libc-modules.h -DMODULE_NAME=libc -include ../include/libc-symbols.h       -DTOP_NAMESPACE=glibc -DGEN_AS_CONST_HEADERS               -MD -MP -MF /home/i461/glibc-2.34/build/tcb-offsets.h.dT                    -MT '/home/i461/glibc-2.34/build/tcb-offsets.h.d /home/i461/glibc-2.34/build/tcb-offsets.h' -S -o /tmp/tmp_hza54eh/test.s -x c - < /tmp/tmp_hza54eh/test.c' returned non-zero exit status 1.
make[2]: *** [../Makerules:271: /home/i461/glibc-2.34/build/tcb-offsets.h] Error 1
make[2]: *** Waiting for unfinished jobs....
sed -e 's@ /home/i461/glibc-2\.34/build/@ $(common-objpfx)@g' -e 's@^/home/i461/glibc-2\.34/build/@$(common-objpfx)@g' -e 's@  *\.\.\/\([^  \]*\)@ $(..)\1@g' -e 's@^\.\.\/\([^         \]*\)@$(..)\1@g' \
    /home/i461/glibc-2.34/build/ucontext_i.h.dT > /home/i461/glibc-2.34/build/ucontext_i.h.dT2
/bin/sh: warning: setlocale: LC_ALL: cannot change locale (en_US.UTF-8)
rm -f /home/i461/glibc-2.34/build/ucontext_i.h.dT
mv -f /home/i461/glibc-2.34/build/ucontext_i.h.dT2 /home/i461/glibc-2.34/build/ucontext_i.h.d
mv -f /home/i461/glibc-2.34/build/ucontext_i.hT /home/i461/glibc-2.34/build/ucontext_i.h
make[2]: Leaving directory '/home/i461/glibc-2.34/csu'
make[1]: *** [Makefile:478: csu/subdir_lib] Error 2
make[1]: Leaving directory '/home/i461/glibc-2.34'
make: *** [Makefile:9: all] Error 2

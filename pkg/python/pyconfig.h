#ifndef Py_PYCONFIG_H
#define Py_PYCONFIG_H
/* #undef AC_APPLE_UNIVERSAL_BUILD */
/* #undef AIX_GENUINE_CPLUSPLUS */
/* #undef ALT_SOABI */
/* #undef ANDROID_API_LEVEL */
/* #undef DOUBLE_IS_ARM_MIXED_ENDIAN_IEEE754 */
/* #undef DOUBLE_IS_BIG_ENDIAN_IEEE754 */
#define DOUBLE_IS_LITTLE_ENDIAN_IEEE754 1
#define ENABLE_IPV6 1
/* #undef FLOAT_WORDS_BIGENDIAN */
/* #undef FLOCK_NEEDS_LIBBSD */
/* #undef GETPGRP_HAVE_ARG */
/* #undef GETTIMEOFDAY_NO_TZ */
#define HAVE_ACCEPT4 1
#define HAVE_ACOSH 1
#define HAVE_ADDRINFO 1
#define HAVE_ALARM 1
/* #undef HAVE_ALIGNED_REQUIRED */
#define HAVE_ALLOCA_H 1
/* #undef HAVE_ALTZONE */
#define HAVE_ASINH 1
#define HAVE_ASM_TYPES_H 1
#define HAVE_ATANH 1
#define HAVE_BIND_TEXTDOMAIN_CODESET 1
/* #undef HAVE_BLUETOOTH_BLUETOOTH_H */
/* #undef HAVE_BLUETOOTH_H */
/* #undef HAVE_BROKEN_MBSTOWCS */
/* #undef HAVE_BROKEN_NICE */
/* #undef HAVE_BROKEN_PIPE_BUF */
/* #undef HAVE_BROKEN_POLL */
/* #undef HAVE_BROKEN_POSIX_SEMAPHORES */
/* #undef HAVE_BROKEN_PTHREAD_SIGMASK */
/* #undef HAVE_BROKEN_SEM_GETVALUE */
/* #undef HAVE_BROKEN_UNSETENV */
#define HAVE_BUILTIN_ATOMIC 1
/* #undef HAVE_CHFLAGS */
#define HAVE_CHOWN 1
#define HAVE_CHROOT 1
#define HAVE_CLOCK 1
#define HAVE_CLOCK_GETRES 1
#define HAVE_CLOCK_GETTIME 1
#define HAVE_CLOCK_SETTIME 1
#define HAVE_COMPUTED_GOTOS 1
#define HAVE_CONFSTR 1
/* #undef HAVE_CONIO_H */
#define HAVE_COPYSIGN 1
#define HAVE_COPY_FILE_RANGE 1
#define HAVE_CRYPT_H 1
#define HAVE_CRYPT_R 1
#define HAVE_CTERMID 1
/* #undef HAVE_CTERMID_R */
/* #undef HAVE_CURSES_FILTER */
/* #undef HAVE_CURSES_H */
/* #undef HAVE_CURSES_HAS_KEY */
/* #undef HAVE_CURSES_IMMEDOK */
/* #undef HAVE_CURSES_IS_PAD */
/* #undef HAVE_CURSES_IS_TERM_RESIZED */
/* #undef HAVE_CURSES_RESIZETERM */
/* #undef HAVE_CURSES_RESIZE_TERM */
/* #undef HAVE_CURSES_SYNCOK */
/* #undef HAVE_CURSES_TYPEAHEAD */
/* #undef HAVE_CURSES_USE_ENV */
/* #undef HAVE_CURSES_WCHGAT */
#define HAVE_DECL_ISFINITE 1
#define HAVE_DECL_ISINF 1
#define HAVE_DECL_ISNAN 1
#define HAVE_DECL_RTLD_DEEPBIND 0
#define HAVE_DECL_RTLD_GLOBAL 1
#define HAVE_DECL_RTLD_LAZY 1
#define HAVE_DECL_RTLD_LOCAL 1
#define HAVE_DECL_RTLD_MEMBER 0
#define HAVE_DECL_RTLD_NODELETE 1
#define HAVE_DECL_RTLD_NOLOAD 1
#define HAVE_DECL_RTLD_NOW 1
/* #undef HAVE_DECL_TZNAME */
#define HAVE_DEVICE_MACROS 1
/* #undef HAVE_DEV_PTC */
#define HAVE_DEV_PTMX 1
/* #undef HAVE_DIRECT_H */
#define HAVE_DIRENT_D_TYPE 1
#define HAVE_DIRENT_H 1
#define HAVE_DIRFD 1
#define HAVE_DLFCN_H 1
/* #undef HAVE_DLOPEN */
#define HAVE_DUP2 1
#define HAVE_DUP3 1
/* #undef HAVE_DYNAMIC_LOADING */
#define HAVE_ENDIAN_H 1
#define HAVE_EPOLL 1
#define HAVE_EPOLL_CREATE1 1
#define HAVE_ERF 1
#define HAVE_ERFC 1
#define HAVE_ERRNO_H 1
#define HAVE_EXECV 1
#define HAVE_EXPLICIT_BZERO 1
/* #undef HAVE_EXPLICIT_MEMSET */
#define HAVE_EXPM1 1
#define HAVE_FACCESSAT 1
#define HAVE_FCHDIR 1
#define HAVE_FCHMOD 1
#define HAVE_FCHMODAT 1
#define HAVE_FCHOWN 1
#define HAVE_FCHOWNAT 1
#define HAVE_FCNTL_H 1
#define HAVE_FDATASYNC 1
#define HAVE_FDOPENDIR 1
/* #undef HAVE_FDWALK */
#define HAVE_FEXECVE 1
#define HAVE_FINITE 1
#define HAVE_FLOCK 1
#define HAVE_FORK 1
#define HAVE_FORKPTY 1
#define HAVE_FPATHCONF 1
/* #undef HAVE_FSEEK64 */
#define HAVE_FSEEKO 1
#define HAVE_FSTATAT 1
#define HAVE_FSTATVFS 1
#define HAVE_FSYNC 1
/* #undef HAVE_FTELL64 */
#define HAVE_FTELLO 1
#define HAVE_FTIME 1
#define HAVE_FTRUNCATE 1
#define HAVE_FUTIMENS 1
#define HAVE_FUTIMES 1
#define HAVE_FUTIMESAT 1
#define HAVE_GAI_STRERROR 1
/* #undef HAVE_GAMMA */
/* #undef HAVE_GCC_ASM_FOR_MC68881 */
#define HAVE_GCC_ASM_FOR_X64 1
#define HAVE_GCC_ASM_FOR_X87 1
#define HAVE_GCC_UINT128_T 1
#define HAVE_GETADDRINFO 1
#define HAVE_GETC_UNLOCKED 1
#define HAVE_GETENTROPY 1
#define HAVE_GETGRGID_R 1
#define HAVE_GETGRNAM_R 1
#define HAVE_GETGROUPLIST 1
#define HAVE_GETGROUPS 1
/* #undef HAVE_GETHOSTBYNAME */
#define HAVE_GETHOSTBYNAME_R 1
/* #undef HAVE_GETHOSTBYNAME_R_3_ARG */
/* #undef HAVE_GETHOSTBYNAME_R_5_ARG */
#define HAVE_GETHOSTBYNAME_R_6_ARG 1
#define HAVE_GETITIMER 1
#define HAVE_GETLOADAVG 1
#define HAVE_GETLOGIN 1
#define HAVE_GETNAMEINFO 1
#define HAVE_GETPAGESIZE 1
#define HAVE_GETPEERNAME 1
#define HAVE_GETPGID 1
#define HAVE_GETPGRP 1
#define HAVE_GETPID 1
#define HAVE_GETPRIORITY 1
#define HAVE_GETPWENT 1
#define HAVE_GETPWNAM_R 1
#define HAVE_GETPWUID_R 1
#define HAVE_GETRANDOM 1
#define HAVE_GETRANDOM_SYSCALL 1
#define HAVE_GETRESGID 1
#define HAVE_GETRESUID 1
#define HAVE_GETSID 1
#define HAVE_GETSPENT 1
#define HAVE_GETSPNAM 1
#define HAVE_GETTIMEOFDAY 1
/* #undef HAVE_GETWD */
/* #undef HAVE_GLIBC_MEMMOVE_BUG */
#define HAVE_GRP_H 1
#define HAVE_HSTRERROR 1
#define HAVE_HTOLE64 1
#define HAVE_HYPOT 1
/* #undef HAVE_IEEEFP_H */
#define HAVE_IF_NAMEINDEX 1
#define HAVE_INET_ATON 1
#define HAVE_INET_PTON 1
#define HAVE_INITGROUPS 1
#define HAVE_INTTYPES_H 1
/* #undef HAVE_IO_H */
/* #undef HAVE_IPA_PURE_CONST_BUG */
#define HAVE_KILL 1
#define HAVE_KILLPG 1
/* #undef HAVE_KQUEUE */
#define HAVE_LANGINFO_H 1
/* #undef HAVE_LARGEFILE_SUPPORT */
/* #undef HAVE_LCHFLAGS */
/* #undef HAVE_LCHMOD */
#define HAVE_LCHOWN 1
#define HAVE_LGAMMA 1
#define HAVE_LIBDL 1
/* #undef HAVE_LIBDLD */
/* #undef HAVE_LIBIEEE */
/* #undef HAVE_LIBINTL_H */
/* #undef HAVE_LIBREADLINE */
/* #undef HAVE_LIBRESOLV */
/* #undef HAVE_LIBSENDFILE */
/* #undef HAVE_LIBUTIL_H */
#define HAVE_LINK 1
#define HAVE_LINKAT 1
#define HAVE_LINUX_CAN_BCM_H 1
#define HAVE_LINUX_CAN_H 1
#define HAVE_LINUX_CAN_RAW_FD_FRAMES 1
#define HAVE_LINUX_CAN_RAW_H 1
#define HAVE_LINUX_MEMFD_H 1
#define HAVE_LINUX_NETLINK_H 1
#define HAVE_LINUX_QRTR_H 1
#define HAVE_LINUX_RANDOM_H 1
#define HAVE_LINUX_TIPC_H 1
#define HAVE_LINUX_VM_SOCKETS_H 1
#define HAVE_LOCKF 1
#define HAVE_LOG1P 1
#define HAVE_LOG2 1
#define HAVE_LONG_DOUBLE 1
#define HAVE_LSTAT 1
#define HAVE_LUTIMES 1
#define HAVE_MADVISE 1
#define HAVE_MAKEDEV 1
#define HAVE_MBRTOWC 1
#define HAVE_MEMFD_CREATE 1
#define HAVE_MEMORY_H 1
#define HAVE_MEMRCHR 1
#define HAVE_MKDIRAT 1
#define HAVE_MKFIFO 1
#define HAVE_MKFIFOAT 1
#define HAVE_MKNOD 1
#define HAVE_MKNODAT 1
#define HAVE_MKTIME 1
#define HAVE_MMAP 1
#define HAVE_MREMAP 1
/* #undef HAVE_NCURSES_H */
/* #undef HAVE_NDIR_H */
#define HAVE_NETPACKET_PACKET_H 1
#define HAVE_NET_IF_H 1
#define HAVE_NICE 1
#define HAVE_OPENAT 1
#define HAVE_OPENPTY 1
#define HAVE_PATHCONF 1
#define HAVE_PAUSE 1
#define HAVE_PIPE2 1
/* #undef HAVE_PLOCK */
#define HAVE_POLL 1
#define HAVE_POLL_H 1
#define HAVE_POSIX_FADVISE 1
#define HAVE_POSIX_FALLOCATE 1
#define HAVE_POSIX_SPAWN 1
#define HAVE_POSIX_SPAWNP 1
#define HAVE_PREAD 1
#define HAVE_PREADV 1
/* #undef HAVE_PREADV2 */
#define HAVE_PRLIMIT 1
/* #undef HAVE_PROCESS_H */
#define HAVE_PROTOTYPES 1
#define HAVE_PTHREAD_CONDATTR_SETCLOCK 1
/* #undef HAVE_PTHREAD_DESTRUCTOR */
#define HAVE_PTHREAD_GETCPUCLOCKID 1
#define HAVE_PTHREAD_H 1
/* #undef HAVE_PTHREAD_INIT */
#define HAVE_PTHREAD_KILL 1
#define HAVE_PTHREAD_SIGMASK 1
#define HAVE_PTY_H 1
#define HAVE_PUTENV 1
#define HAVE_PWRITE 1
#define HAVE_PWRITEV 1
/* #undef HAVE_PWRITEV2 */
#define HAVE_READLINK 1
#define HAVE_READLINKAT 1
#define HAVE_READV 1
#define HAVE_REALPATH 1
#define HAVE_RENAMEAT 1
/* #undef HAVE_RL_APPEND_HISTORY */
/* #undef HAVE_RL_CATCH_SIGNAL */
/* #undef HAVE_RL_COMPLETION_APPEND_CHARACTER */
/* #undef HAVE_RL_COMPLETION_DISPLAY_MATCHES_HOOK */
/* #undef HAVE_RL_COMPLETION_MATCHES */
/* #undef HAVE_RL_COMPLETION_SUPPRESS_APPEND */
/* #undef HAVE_RL_PRE_INPUT_HOOK */
/* #undef HAVE_RL_RESIZE_TERMINAL */
#define HAVE_ROUND 1
/* #undef HAVE_RTPSPAWN */
#define HAVE_SCHED_GET_PRIORITY_MAX 1
#define HAVE_SCHED_H 1
#define HAVE_SCHED_RR_GET_INTERVAL 1
#define HAVE_SCHED_SETAFFINITY 1
#define HAVE_SCHED_SETPARAM 1
#define HAVE_SCHED_SETSCHEDULER 1
#define HAVE_SEM_GETVALUE 1
#define HAVE_SEM_OPEN 1
#define HAVE_SEM_TIMEDWAIT 1
#define HAVE_SEM_UNLINK 1
#define HAVE_SENDFILE 1
#define HAVE_SETEGID 1
#define HAVE_SETEUID 1
#define HAVE_SETGID 1
#define HAVE_SETGROUPS 1
#define HAVE_SETHOSTNAME 1
#define HAVE_SETITIMER 1
#define HAVE_SETLOCALE 1
#define HAVE_SETPGID 1
#define HAVE_SETPGRP 1
#define HAVE_SETPRIORITY 1
#define HAVE_SETREGID 1
#define HAVE_SETRESGID 1
#define HAVE_SETRESUID 1
#define HAVE_SETREUID 1
#define HAVE_SETSID 1
#define HAVE_SETUID 1
#define HAVE_SETVBUF 1
#define HAVE_SHADOW_H 1
#define HAVE_SHM_OPEN 1
#define HAVE_SHM_UNLINK 1
#define HAVE_SIGACTION 1
#define HAVE_SIGALTSTACK 1
#define HAVE_SIGFILLSET 1
#define HAVE_SIGINFO_T_SI_BAND 1
#define HAVE_SIGINTERRUPT 1
#define HAVE_SIGNAL_H 1
#define HAVE_SIGPENDING 1
#define HAVE_SIGRELSE 1
#define HAVE_SIGTIMEDWAIT 1
#define HAVE_SIGWAIT 1
#define HAVE_SIGWAITINFO 1
#define HAVE_SNPRINTF 1
#define HAVE_SOCKADDR_ALG 1
/* #undef HAVE_SOCKADDR_SA_LEN */
#define HAVE_SOCKADDR_STORAGE 1
#define HAVE_SOCKETPAIR 1
#define HAVE_SPAWN_H 1
#define HAVE_SSIZE_T 1
#define HAVE_STATVFS 1
#define HAVE_STAT_TV_NSEC 1
/* #undef HAVE_STAT_TV_NSEC2 */
#define HAVE_STDARG_PROTOTYPES 1
#define HAVE_STDINT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STD_ATOMIC 1
#define HAVE_STRDUP 1
#define HAVE_STRFTIME 1
#define HAVE_STRINGS_H 1
#define HAVE_STRING_H 1
#define HAVE_STRLCPY 1
#define HAVE_STROPTS_H 1
#define HAVE_STRSIGNAL 1
#define HAVE_STRUCT_PASSWD_PW_GECOS 1
#define HAVE_STRUCT_PASSWD_PW_PASSWD 1
/* #undef HAVE_STRUCT_STAT_ST_BIRTHTIME */
#define HAVE_STRUCT_STAT_ST_BLKSIZE 1
#define HAVE_STRUCT_STAT_ST_BLOCKS 1
/* #undef HAVE_STRUCT_STAT_ST_FLAGS */
/* #undef HAVE_STRUCT_STAT_ST_GEN */
#define HAVE_STRUCT_STAT_ST_RDEV 1
#define HAVE_STRUCT_TM_TM_ZONE 1
#define HAVE_SYMLINK 1
#define HAVE_SYMLINKAT 1
#define HAVE_SYNC 1
#define HAVE_SYSCONF 1
#define HAVE_SYSEXITS_H 1
/* #undef HAVE_SYS_AUDIOIO_H */
/* #undef HAVE_SYS_BSDTTY_H */
/* #undef HAVE_SYS_DEVPOLL_H */
/* #undef HAVE_SYS_DIR_H */
/* #undef HAVE_SYS_ENDIAN_H */
#define HAVE_SYS_EPOLL_H 1
/* #undef HAVE_SYS_EVENT_H */
#define HAVE_SYS_FILE_H 1
#define HAVE_SYS_IOCTL_H 1
/* #undef HAVE_SYS_KERN_CONTROL_H */
/* #undef HAVE_SYS_LOADAVG_H */
/* #undef HAVE_SYS_LOCK_H */
/* #undef HAVE_SYS_MEMFD_H */
/* #undef HAVE_SYS_MKDEV_H */
#define HAVE_SYS_MMAN_H 1
/* #undef HAVE_SYS_MODEM_H */
/* #undef HAVE_SYS_NDIR_H */
#define HAVE_SYS_PARAM_H 1
#define HAVE_SYS_POLL_H 1
#define HAVE_SYS_RANDOM_H 1
#define HAVE_SYS_RESOURCE_H 1
#define HAVE_SYS_SELECT_H 1
#define HAVE_SYS_SENDFILE_H 1
#define HAVE_SYS_SOCKET_H 1
#define HAVE_SYS_STATVFS_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_SYSCALL_H 1
#define HAVE_SYS_SYSMACROS_H 1
/* #undef HAVE_SYS_SYS_DOMAIN_H */
/* #undef HAVE_SYS_TERMIO_H */
#define HAVE_SYS_TIMES_H 1
#define HAVE_SYS_TIME_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_UIO_H 1
#define HAVE_SYS_UN_H 1
#define HAVE_SYS_UTSNAME_H 1
#define HAVE_SYS_WAIT_H 1
#define HAVE_SYS_XATTR_H 1
#define HAVE_TCGETPGRP 1
#define HAVE_TCSETPGRP 1
#define HAVE_TEMPNAM 1
#define HAVE_TERMIOS_H 1
/* #undef HAVE_TERM_H */
#define HAVE_TGAMMA 1
#define HAVE_TIMEGM 1
#define HAVE_TIMES 1
#define HAVE_TMPFILE 1
#define HAVE_TMPNAM 1
/* #undef HAVE_TMPNAM_R */
#define HAVE_TM_ZONE 1
#define HAVE_TRUNCATE 1
/* #undef HAVE_TZNAME */
/* #undef HAVE_UCS4_TCL */
#define HAVE_UNAME 1
#define HAVE_UNISTD_H 1
#define HAVE_UNLINKAT 1
#define HAVE_UNSETENV 1
/* #undef HAVE_USABLE_WCHAR_T */
/* #undef HAVE_UTIL_H */
#define HAVE_UTIMENSAT 1
#define HAVE_UTIMES 1
#define HAVE_UTIME_H 1
/* #undef HAVE_UUID_CREATE */
/* #undef HAVE_UUID_ENC_BE */
/* #undef HAVE_UUID_GENERATE_TIME_SAFE */
/* #undef HAVE_UUID_H */
/* #undef HAVE_UUID_UUID_H */
#define HAVE_WAIT3 1
#define HAVE_WAIT4 1
#define HAVE_WAITID 1
#define HAVE_WAITPID 1
#define HAVE_WCHAR_H 1
#define HAVE_WCSCOLL 1
#define HAVE_WCSFTIME 1
#define HAVE_WCSXFRM 1
#define HAVE_WMEMCMP 1
#define HAVE_WORKING_TZSET 1
#define HAVE_WRITEV 1
#define HAVE_X509_VERIFY_PARAM_SET1_HOST 1
#define HAVE_ZLIB_COPY 1
/* #undef HAVE__GETPTY */
/* #undef MAJOR_IN_MKDEV */
#define MAJOR_IN_SYSMACROS 1
/* #undef MVWDELCH_IS_EXPRESSION */
/* #undef PACKAGE_BUGREPORT */
/* #undef PACKAGE_NAME */
/* #undef PACKAGE_STRING */
/* #undef PACKAGE_TARNAME */
/* #undef PACKAGE_URL */
/* #undef PACKAGE_VERSION */
/* #undef POSIX_SEMAPHORES_NOT_ENABLED */
#define PTHREAD_KEY_T_IS_COMPATIBLE_WITH_INT 1
#define PTHREAD_SYSTEM_SCHED_SUPPORTED 1
/* #undef PYLONG_BITS_IN_DIGIT */
#define PY_COERCE_C_LOCALE 1
#define PY_FORMAT_SIZE_T "z"
#define PY_SSL_DEFAULT_CIPHERS 1
/* #undef PY_SSL_DEFAULT_CIPHER_STRING */
/* #undef Py_DEBUG */
/* #undef Py_ENABLE_SHARED */
/* #undef Py_HASH_ALGORITHM */
/* #undef Py_TRACE_REFS */
#define RETSIGTYPE void
/* #undef SETPGRP_HAVE_ARG */
/* #undef SHM_NEEDS_LIBRT */
/* #undef SIGNED_RIGHT_SHIFT_ZERO_FILLS */
#define SIZEOF_DOUBLE 8
#define SIZEOF_FLOAT 4
#define SIZEOF_FPOS_T 16
#define SIZEOF_INT 4
#define SIZEOF_LONG 8
#define SIZEOF_LONG_DOUBLE 16
#define SIZEOF_LONG_LONG 8
#define SIZEOF_OFF_T 8
#define SIZEOF_PID_T 4
#define SIZEOF_PTHREAD_KEY_T 4
#define SIZEOF_PTHREAD_T 8
#define SIZEOF_SHORT 2
#define SIZEOF_SIZE_T 8
#define SIZEOF_TIME_T 8
#define SIZEOF_UINTPTR_T 8
#define SIZEOF_VOID_P 8
#define SIZEOF_WCHAR_T 4
#define SIZEOF__BOOL 1
#define STDC_HEADERS 1
#define SYS_SELECT_WITH_SYS_TIME 1
/* #undef TIMEMODULE_LIB */
#define TIME_WITH_SYS_TIME 1
/* #undef TM_IN_SYS_TIME */
/* #undef USE_COMPUTED_GOTOS */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif
/* #undef WINDOW_HAS_FLAGS */
#define WITH_DECIMAL_CONTEXTVAR 1
#define WITH_DOC_STRINGS 1
/* #undef WITH_DTRACE */
/* #undef WITH_DYLD */
/* #undef WITH_LIBINTL */
/* #undef WITH_NEXT_FRAMEWORK */
/* #undef WITH_PYMALLOC */
/* #undef WITH_VALGRIND */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif
/* #undef X87_DOUBLE_ROUNDING */
/* #undef _BSD_SOURCE */
#define _DARWIN_C_SOURCE 1
#define _FILE_OFFSET_BITS 64
#define _GNU_SOURCE 1
/* #undef _INCLUDE__STDC_A1_SOURCE */
#define _LARGEFILE_SOURCE 1
/* #undef _LARGE_FILES */
/* #undef _MINIX */
#define _NETBSD_SOURCE 1
/* #undef _POSIX_1_SOURCE */
#define _POSIX_C_SOURCE 200809L
/* #undef _POSIX_SOURCE */
/* #undef _POSIX_THREADS */
#define _PYTHONFRAMEWORK ""
#define _REENTRANT 1
#define _XOPEN_SOURCE 700
#define _XOPEN_SOURCE_EXTENDED 1
#define __BSD_VISIBLE 1
#ifndef __CHAR_UNSIGNED__
/* # undef __CHAR_UNSIGNED__ */
#endif
/* #undef clock_t */
/* #undef const */
/* #undef gid_t */
/* #undef mode_t */
/* #undef off_t */
/* #undef pid_t */
/* #undef signed */
/* #undef size_t */
/* #undef socklen_t */
/* #undef uid_t */
#if defined(__USLC__) && defined(__SCO_VERSION__)
#define STRICT_SYSV_CURSES /* Don't use ncurses extensions */
#endif
#endif /*Py_PYCONFIG_H*/

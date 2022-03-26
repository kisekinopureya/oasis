cflags{
	'-D HAVE_CONFIG_H',
	([[-D 'SYSCONFDIR="%s/etc"']]):format(config.prefix),
	'-I $dir',
	'-isystem $builddir/pkg/libtls-bearssl/include',
}

pkg.deps = {
	'pkg/libtls-bearssl/headers',
}

exe('mpop', [[
	src/(
		conf.c
		list.c
		mpop.c
		net.c
		netrc.c
		readbuf.c
		pop3.c
		stream.c
		tools.c
		xalloc.c
		password.c
		base64.c
		delivery.c
		uidls.c

		mtls.c
		mtls-libtls.c

		md5.c md5-apps.c
	)
	$builddir/pkg/libtls-bearssl/libtls.a.d
]])

file('bin/mpop', '755', '$outdir/mpop')
man{'doc/mpop.1'}

fetch 'git'

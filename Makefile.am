NULL =

ACLOCAL_AMFLAGS = -I m4 ${ACLOCAL_FLAGS}

SUBDIRS = 			\
	ukui-settings-daemon	\
	plugins			\
	data			\
	po 			\
	$(NULL)

EXTRA_DIST = \
	autogen.sh		\
	ChangeLog		\
	README			\
	$(NULL)

DISTCLEANFILES = \
	$(NULL)

# Build ChangeLog from GIT  history
ChangeLog:
	$(AM_V_GEN) if test -d $(top_srcdir)/.git; then \
		GIT_DIR="$(top_srcdir)/.git" git log --stat > $@; \
	fi

dist: ChangeLog

.PHONY: ChangeLog


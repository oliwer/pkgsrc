# $NetBSD: Makefile,v 1.30 2014/11/27 13:38:15 joerg Exp $

DISTNAME=			mksh-R50e
PKGNAME=			${DISTNAME:S/-R/-/}
CATEGORIES=			shells
MASTER_SITES=			# maintained locally
DISTFILES=			# maintained locally

MAINTAINER=			ahoka@NetBSD.org
HOMEPAGE=			http://mirbsd.de/mksh
COMMENT=			MirBSD Korn Shell
LICENSE=			miros

PKG_SHELL=			bin/mksh

CPPFLAGS+=			-DMKSH_BINSHPOSIX -DMKSH_DISABLE_EXPERIMENTAL
LIBS.Interix+=			-lcrypt

INSTALLATION_DIRS=		bin ${PKGMANDIR}/man1 ${PKG_SYSCONFDIR}/skel

do-extract:
	${CP} -R ${FILESDIR} ${WRKSRC}

do-build:
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} LIBS=${LIBS:Q} CPPFLAGS=${CPPFLAGS:Q} \
	    ${TOOLS_SHELL} ${WRKSRC}/Build.sh -r
	# lksh
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} LIBS=${LIBS:Q} CPPFLAGS=${CPPFLAGS:Q} \
	    ${TOOLS_SHELL} ${WRKSRC}/Build.sh -L -r
	${SED} -i -e "s,/etc,${PKG_SYSCONFDIR},g" ${WRKSRC}/skel.mkshrc

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/mksh ${DESTDIR}${PREFIX}/bin/mksh
	${INSTALL_PROGRAM} ${WRKSRC}/lksh ${DESTDIR}${PREFIX}/bin/lksh
	${INSTALL_MAN} ${WRKSRC}/mksh.1 ${DESTDIR}${PREFIX}/${PKGMANDIR}/man1/
	${INSTALL_MAN} ${WRKSRC}/lksh.1 ${DESTDIR}${PREFIX}/${PKGMANDIR}/man1/
	${INSTALL_DATA} ${WRKSRC}/dot.mkshrc ${DESTDIR}${PKG_SYSCONFDIR}/mkshrc
	${INSTALL_DATA} ${WRKSRC}/skel.mkshrc ${DESTDIR}${PKG_SYSCONFDIR}/skel/.mkshrc

# Uncomment this if you want to run the regression tests
#USE_TOOLS+=			perl
#do-test:
#	${WRKBUILD}/test.sh -v

.include "../../mk/bsd.pkg.mk"

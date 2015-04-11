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

.include "../../mk/bsd.prefs.mk"

BUILDFLAGS=			-r
.if !empty(MAKE_JOBS)
BUILDFLAGS+=			-j
.endif

CPPFLAGS+=			-DMKSH_BINSHPOSIX -DMKSH_DISABLE_EXPERIMENTAL
LIBS.Interix+=			-lcrypt

SUBST_CLASSES+=		skel
SUBST_STAGE.skel=		pre-configure
SUBST_FILES.skel=		skel.mkshrc
SUBST_SED.skel=		-e "s,/etc,${PKG_SYSCONFDIR},g"

WRKBUILD?=			${WRKSRC}/build

EGDIR=				${PREFIX}/share/examples/mksh
CONF_FILES=			${EGDIR}/mkshrc ${PKG_SYSCONFDIR}/mkshrc
CONF_FILES+=			${EGDIR}/mkshrc.skel ${PKG_SYSCONFDIR}/skel/.mkshrc

INSTALLATION_DIRS=		bin ${PKGMANDIR}/man1 share/examples/mksh
MAKE_DIRS=			${PKG_SYSCONFDIR}/skel

do-extract:
	${CP} -R ${FILESDIR} ${WRKSRC}
	${MKDIR} ${WRKBUILD}

do-build:
	cd ${WRKBUILD} && ${SETENV} ${MAKE_ENV} LIBS=${LIBS:Q} CPPFLAGS=${CPPFLAGS:Q} \
	    ${TOOLS_SHELL} ${WRKSRC}/Build.sh ${BUILDFLAGS}
	# lksh
	cd ${WRKBUILD} && ${SETENV} ${MAKE_ENV} LIBS=${LIBS:Q} CPPFLAGS=${CPPFLAGS:Q} \
	    ${TOOLS_SHELL} ${WRKSRC}/Build.sh ${BUILDFLAGS} -L

do-install:
	${INSTALL_PROGRAM} ${WRKBUILD}/mksh ${DESTDIR}${PREFIX}/bin/mksh
	${INSTALL_PROGRAM} ${WRKBUILD}/lksh ${DESTDIR}${PREFIX}/bin/lksh
	${INSTALL_MAN} ${WRKSRC}/mksh.1 ${DESTDIR}${PREFIX}/${PKGMANDIR}/man1/
	${INSTALL_MAN} ${WRKSRC}/lksh.1 ${DESTDIR}${PREFIX}/${PKGMANDIR}/man1/
	${INSTALL_DATA} ${WRKSRC}/dot.mkshrc ${DESTDIR}${EGDIR}/mkshrc
	${INSTALL_DATA} ${WRKSRC}/skel.mkshrc ${DESTDIR}${EGDIR}/mkshrc.skel

# Uncomment this if you want to run the regression tests
#USE_TOOLS+=			perl
#do-test:
#	${WRKBUILD}/test.sh -v

.include "../../mk/bsd.pkg.mk"

# $NetBSD: Makefile,v 1.18 2014/05/29 23:37:11 wiz Exp $
#

DISTNAME=	fnet.pl-1.4
PKGNAME=	pfnet-1.4
PKGREVISION=	4
CATEGORIES=	chat net
MASTER_SITES=	${MASTER_SITE_LOCAL}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://web.archive.org/web/20021123084932/http://www.abattoir.com/~banshee/Tech/
COMMENT=	Minimal FNET-like ICB client written in Perl

WRKSRC=		${WRKDIR}/fnet-1.4
USE_TOOLS+=	perl:run

INSTALLATION_DIRS=	bin ${PERL5_INSTALLVENDORLIB}

do-build:
	${SED} -e 's,/usr/local,${PREFIX},g' ${WRKSRC}/fnet.pl >${WRKSRC}/pfnet

do-install:
	${INSTALL_DATA} ${WRKSRC}/CMDLINE.pm ${WRKSRC}/FNET.pm		\
		${DESTDIR}${PERL5_INSTALLVENDORLIB}
	${INSTALL_SCRIPT} ${WRKSRC}/pfnet ${DESTDIR}${PREFIX}/bin

.include "../../mk/bsd.pkg.mk"

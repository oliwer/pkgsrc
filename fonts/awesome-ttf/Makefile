# $NetBSD: Makefile,v 1.1 2014/11/02 17:58:21 khorben Exp $
#

DISTNAME=	font-awesome-4.2.0
PKGNAME=	awesome-ttf-4.2.0
CATEGORIES=	fonts
MASTER_SITES=	http://fortawesome.github.io/Font-Awesome/assets/
EXTRACT_SUFX=	.zip

MAINTAINER=	khorben@defora.org
HOMEPAGE=	http://fortawesome.github.io/Font-Awesome/assets/
COMMENT=	The iconic font and CSS toolkit
LICENSE=	ofl-v1.1

NO_CONFIGURE=	yes
NO_BUILD=	yes

FONTS_DIRS.ttf=	share/fonts/X11/TTF

INSTALLATION_DIRS=	${FONTS_DIRS.ttf}

do-install:
	${INSTALL_DATA} ${WRKSRC}/fonts/*.ttf ${DESTDIR}${PREFIX}/${FONTS_DIRS.ttf}

.include "../../mk/bsd.pkg.mk"

# $NetBSD: Makefile,v 1.26 2015/03/15 19:51:08 hiramatsu Exp $
#

DISTNAME=	tokyotyrant-perl-1.16
PKGNAME=	p5-${DISTNAME:S/-perl-/-/}
PKGREVISION=	5
CATEGORIES=	databases perl5
MASTER_SITES=	${HOMEPAGE:S/perldoc/perlpkg/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://fallabs.com/tokyotyrant/perldoc/
COMMENT=	Pure Perl Interface of Tokyo Tyrant
LICENSES=	gnu-lgpl-v2.1

PERL5_PACKLIST=	auto/TokyoTyrant/.packlist
USE_LANGUAGES=	# none

REPLACE_PERL=	*.pl

INSTALLATION_DIRS+=	share/tokyotyrant/doc/perl

post-install:
	${INSTALL_DATA} ${WRKSRC}/doc/index.html \
		${DESTDIR}${PREFIX}/share/tokyotyrant/doc/perl/index.html

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"

# $NetBSD: Makefile,v 1.2 2015/02/27 13:31:09 mef Exp $

DISTNAME=	Net-OpenID-Common-1.19
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	net
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Net/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/~wrog/Net-OpenID-Common/
COMMENT=	Common - Libraries shared between Net::OpenID::Consumer and ::Server
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-Crypt-DH-GMP>=0.00011:../../security/p5-Crypt-DH-GMP

REPLACE_PERL=	lib/Net/OpenID/URIFetch.pm

PERL5_PACKLIST=         auto/Net/OpenID/Common/.packlist
USE_LANGUAGES=          # none

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"

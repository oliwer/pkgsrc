# $NetBSD: Makefile,v 1.15 2014/12/04 01:28:35 mef Exp $

DISTNAME=	DateTime-Format-Pg-0.16010
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	time perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=DateTime/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/DateTime-Format-Pg/
COMMENT=	Parse and format PostgreSQL dates and times
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-DateTime>=0.1000:../../time/p5-DateTime
DEPENDS+=	p5-DateTime-Format-Builder>=0.72:../../time/p5-DateTime-Format-Builder
DEPENDS+=	p5-DateTime-TimeZone>=0.05:../../time/p5-DateTime-TimeZone

PERL5_PACKLIST=		auto/DateTime/Format/Pg/.packlist

PERL5_MODULE_TYPE=	Module::Build

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"

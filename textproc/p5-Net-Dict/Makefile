# $NetBSD: Makefile,v 1.12 2015/03/10 12:00:13 mef Exp $
#

DISTNAME=		Net-Dict-2.19
PKGNAME=		p5-${DISTNAME}
CATEGORIES=		net textproc
MASTER_SITES=		${MASTER_SITE_PERL_CPAN:=Net/}

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://search.cpan.org/~neilb/Net-Dict/
COMMENT=		Client API for the DICT protocol defined in RFC2229
LICENSE=		${PERL5_LICENSE}

PERL5_PACKLIST=		auto/Net/Dict/.packlist

CONFLICTS=		dict-client-[0-9]*

DEPENDS+=		p5-AppConfig-Std-[0-9]*:../../devel/p5-AppConfig-Std
DEPENDS+=		p5-Tk-[0-9]*:../../x11/p5-Tk
# only for make test
DEPENDS+=		p5-Test-Differences-[0-9]*:../../devel/p5-Test-Differences

REPLACE_PERL+=		dict
REPLACE_PERL+=		tkdict

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"

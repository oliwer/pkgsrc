# $NetBSD: Makefile,v 1.22 2014/12/31 09:05:09 mef Exp $
#

DISTNAME=		Apache-Test-1.38
PKGNAME=		p5-${DISTNAME}
CATEGORIES=		www perl5
MASTER_SITES=		${MASTER_SITE_PERL_CPAN:=Apache/}

MAINTAINER=		adam@migus.org
HOMEPAGE=		http://search.cpan.org/dist/Apache-Test/
COMMENT=		Wrapper for Test.pm to test an Apache server
LICENSE=		apache-2.0

CONFLICTS+=		ap2-perl-[0-9]*

USE_LANGUAGES=		# none
PERL5_PACKLIST=		auto/Apache/Test/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"

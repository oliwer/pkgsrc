# $NetBSD: Makefile,v 1.14 2015/03/15 23:28:50 mef Exp $

DISTNAME=	Module-Find-0.13
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Module/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Module-Find/
COMMENT=	Lets you find and use modules in categories
LICENSE=	${PERL5_LICENSE}

USE_LANGUAGES=	# empty
PERL5_PACKLIST=	auto/Module/Find/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"

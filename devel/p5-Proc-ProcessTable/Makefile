# $NetBSD: Makefile,v 1.16 2014/10/20 09:00:52 wiz Exp $

DISTNAME=		Proc-ProcessTable-0.51
PKGNAME=		p5-${DISTNAME}
CATEGORIES=		devel perl5
MASTER_SITES=		${MASTER_SITE_PERL_CPAN:=Proc/}

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://search.cpan.org/dist/Proc-ProcessTable/
COMMENT=		Perl extension to access the UNIX process table
LICENSE=		${PERL5_LICENSE}

REPLACE_PERL=		example.pl

PERL5_PACKLIST=		auto/Proc/ProcessTable/.packlist

CFLAGS.SunOS+=		-D_POSIX_PTHREAD_SEMANTICS

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"

SUBDIRS = lfg lcg lcg64 cmrg mlfg pmlcg .

noinst_SCRIPTS = checksprng timesprng 
CLEANFILES = $(noinst_SCRIPTS)
#dist_data_DATA = insertlib gencheck gentime .insertlib
#EXTRA_DIST = insertlib gencheck gentime .insertlib
CHKDIR = $(top_srcdir)/check

checksprng: gencheck
	rm -f checksprng
	@./gencheck
	chmod u+x ./checksprng

timesprng: gentime
	rm -f timesprng
	@./gentime
	chmod u+x ./timesprng

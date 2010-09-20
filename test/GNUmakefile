# ======================================================================
# 
# ======================================================================


# ----------------------------------------------------------------------
# define compilation command

CXX03 = g++
CXX0X = PATH=/usr/local/bin:${PATH} g++ --std=c++0x
#BOOST = ${HOME}/Downloads/boost/boost_1_43_0/
BOOST = /p/boost/v1_42_0/Linux64/include/
#BOOST = /p/boost/v1_44_0/Linux64bit-2.6-2.5/include/
CXXOPTS = -Wall -O3 -I$(BOOST)

# ----------------------------------------------------------------------
# define files

PROJ = main
SRCS = main.cc
HDRS = _cpp0x_config_ \
       algorithm array functional memory numeric regex type_traits \
       _unique_ptr_
TGTS = $(PROJ)
TAR  = $(PROJ).tar

# ----------------------------------------------------------------------
# compilation

.PHONY: all
all:  $(TGTS)

$(PROJ): $(SRCS) $(HDRS) GNUmakefile
	$(CXX03) $(CXXOPTS) -o $@ $<
#	$(CXX0X) $(CXXOPTS) -o $@ $<

# ----------------------------------------------------------------------
# execution

.PHONY: go
go: all
	./$(PROJ) ; echo $$?

# ----------------------------------------------------------------------
# tarball

.PHONY: tar
tar: $(TAR)

$(TAR): $(SRCS) $(HDRS) GNUmakefile
	tar cf $@ $^

# ----------------------------------------------------------------------
# clean up

clean:
	@rm -fr $(TGTS) $(TAR)

# ======================================================================

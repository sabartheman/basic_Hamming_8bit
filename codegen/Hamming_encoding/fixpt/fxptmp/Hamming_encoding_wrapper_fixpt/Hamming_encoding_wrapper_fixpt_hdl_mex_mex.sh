MATLAB="/usr/local/MATLAB/R2018b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/sky/.matlab/R2018b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for Hamming_encoding_wrapper_fixpt_hdl_mex" > Hamming_encoding_wrapper_fixpt_hdl_mex_mex.mki
echo "CC=$CC" >> Hamming_encoding_wrapper_fixpt_hdl_mex_mex.mki
echo "CFLAGS=$CFLAGS" >> Hamming_encoding_wrapper_fixpt_hdl_mex_mex.mki
echo "CLIBS=$CLIBS" >> Hamming_encoding_wrapper_fixpt_hdl_mex_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> Hamming_encoding_wrapper_fixpt_hdl_mex_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> Hamming_encoding_wrapper_fixpt_hdl_mex_mex.mki
echo "CXX=$CXX" >> Hamming_encoding_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> Hamming_encoding_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXLIBS=$CXXLIBS" >> Hamming_encoding_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> Hamming_encoding_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> Hamming_encoding_wrapper_fixpt_hdl_mex_mex.mki
echo "LDFLAGS=$LDFLAGS" >> Hamming_encoding_wrapper_fixpt_hdl_mex_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> Hamming_encoding_wrapper_fixpt_hdl_mex_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> Hamming_encoding_wrapper_fixpt_hdl_mex_mex.mki
echo "Arch=$Arch" >> Hamming_encoding_wrapper_fixpt_hdl_mex_mex.mki
echo "LD=$LD" >> Hamming_encoding_wrapper_fixpt_hdl_mex_mex.mki
echo OMPFLAGS= >> Hamming_encoding_wrapper_fixpt_hdl_mex_mex.mki
echo OMPLINKFLAGS= >> Hamming_encoding_wrapper_fixpt_hdl_mex_mex.mki
echo "EMC_COMPILER=gcc" >> Hamming_encoding_wrapper_fixpt_hdl_mex_mex.mki
echo "EMC_CONFIG=optim" >> Hamming_encoding_wrapper_fixpt_hdl_mex_mex.mki
"/usr/local/MATLAB/R2018b/bin/glnxa64/gmake" -j 1 -B -f Hamming_encoding_wrapper_fixpt_hdl_mex_mex.mk

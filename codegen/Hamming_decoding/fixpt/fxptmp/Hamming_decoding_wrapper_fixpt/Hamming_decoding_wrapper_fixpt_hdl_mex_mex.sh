MATLAB="/usr/local/MATLAB/R2018b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/sky/.matlab/R2018b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for Hamming_decoding_wrapper_fixpt_hdl_mex" > Hamming_decoding_wrapper_fixpt_hdl_mex_mex.mki
echo "CC=$CC" >> Hamming_decoding_wrapper_fixpt_hdl_mex_mex.mki
echo "CFLAGS=$CFLAGS" >> Hamming_decoding_wrapper_fixpt_hdl_mex_mex.mki
echo "CLIBS=$CLIBS" >> Hamming_decoding_wrapper_fixpt_hdl_mex_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> Hamming_decoding_wrapper_fixpt_hdl_mex_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> Hamming_decoding_wrapper_fixpt_hdl_mex_mex.mki
echo "CXX=$CXX" >> Hamming_decoding_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> Hamming_decoding_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXLIBS=$CXXLIBS" >> Hamming_decoding_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> Hamming_decoding_wrapper_fixpt_hdl_mex_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> Hamming_decoding_wrapper_fixpt_hdl_mex_mex.mki
echo "LDFLAGS=$LDFLAGS" >> Hamming_decoding_wrapper_fixpt_hdl_mex_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> Hamming_decoding_wrapper_fixpt_hdl_mex_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> Hamming_decoding_wrapper_fixpt_hdl_mex_mex.mki
echo "Arch=$Arch" >> Hamming_decoding_wrapper_fixpt_hdl_mex_mex.mki
echo "LD=$LD" >> Hamming_decoding_wrapper_fixpt_hdl_mex_mex.mki
echo OMPFLAGS= >> Hamming_decoding_wrapper_fixpt_hdl_mex_mex.mki
echo OMPLINKFLAGS= >> Hamming_decoding_wrapper_fixpt_hdl_mex_mex.mki
echo "EMC_COMPILER=gcc" >> Hamming_decoding_wrapper_fixpt_hdl_mex_mex.mki
echo "EMC_CONFIG=optim" >> Hamming_decoding_wrapper_fixpt_hdl_mex_mex.mki
"/usr/local/MATLAB/R2018b/bin/glnxa64/gmake" -j 1 -B -f Hamming_decoding_wrapper_fixpt_hdl_mex_mex.mk

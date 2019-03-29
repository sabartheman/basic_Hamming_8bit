/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Hamming_encoding_wrapper_fixpt_hdl_mex_info.c
 *
 * Code generation for function '_coder_Hamming_encoding_wrapper_fixpt_hdl_mex_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Hamming_encoding_fixpt_logger.h"
#include "Hamming_encoding_wrapper_fixpt.h"
#include "_coder_Hamming_encoding_wrapper_fixpt_hdl_mex_info.h"

/* Function Definitions */
mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[6] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs", "FullPath", "TimeStamp" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 2, 6, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 1);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString(
    "Hamming_encoding_wrapper_fixpt"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath", emlrtMxCreateString(
    "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/Hamming_encoding_wrapper_fixpt.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp", emlrtMxCreateDoubleScalar
                (737513.59997685184));
  xInputs = emlrtCreateLogicalMatrix(1, 0);
  emlrtSetField(xEntryPoints, 1, "Name", emlrtMxCreateString(
    "Hamming_encoding_fixpt_logger"));
  emlrtSetField(xEntryPoints, 1, "NumberOfInputs", emlrtMxCreateDoubleScalar(0.0));
  emlrtSetField(xEntryPoints, 1, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (1.0));
  emlrtSetField(xEntryPoints, 1, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 1, "FullPath", emlrtMxCreateString(
    "/home/sky/Documents/MATLAB/Hamming/codegen/Hamming_encoding/fixpt/fxptmp/Hamming_encoding_fixpt_logger.m"));
  emlrtSetField(xEntryPoints, 1, "TimeStamp", emlrtMxCreateDoubleScalar
                (737513.60054398153));
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", emlrtMxCreateString(
    "9.5.0.944444 (R2018b)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[66] = {
    "789ced5d5f6cebd67957d2264d90a615906c695164bd376bd3ac29ae64cbb6ec0ec1f45f96af6559b26cc94a139b92288912ff99a464491b50efad05f6d09701"
    "7b18d0fbb6764d8bb40f6b81ed41c3fad0c720cb566040b1bcecbdc0b0618f9348d1d7e4d5b994cdc32391fa0e90d0d4479edfe1b91f7fdfe177bef31ddf3399",
    "ec333e9fef0be3ffcebfebf3fdfe3f9ff54dcacb3eadf8a7c7677dc662963f333dfeb9e95c2fcff93e6bb8ef9929dedf4ecf6b02afd07d453b61199e3ee87255"
    "5a1a9ff014475f5753173886a778a53810699f44cb02dba3ebaaa4c1b07491e1e87de1c6c92e333ee1523744d72713d1e4ef788bae758eba9c4f6ac98f9bcbde",
    "3cf14dfb67523e423cff67e7ec1f11d13f7e93fcdde47b8196c0d101b9330824845a97a379450e64a3c5fd682cb04b71e37e68066a429d6ed2bc7e7e46f3e35f"
    "268206d31795277e3ebb942851a4a53355fc80bbdfa495f1df1ca5b4f4e73b47b4fff9399fcf7cd4cb8bbe176e9c7d2b6285376f7f3e6f3af75d5fa749b4a77b",
    "fcef6717efb3a6f3c7789aa4d6a2264a7b8df7239b7831249e51fe6e66bf3c5699ae2c0558a146b1baa614d6836bdbd58022086c55e807688e0db04c75a21f74"
    "5d14185e09683df480d3ea21a707a30f4a5ffeb72859bd23f97c8bc5eb23ea9b57effe1081e737c907b56cea54dc5cab9795ce7eb72c2ae5934d3af9b81d8716",
    "3856edf021ce49d5ff1bc4fdf3f6236d3af799aed3e544f8de475a1fef61e3f9cf21f0fc53498339633891b5cdf3e682fa77d30b2e9e8f5be0e9723b3caff6d0"
    "94e8c9e94124fee6d5bf03cf3b84478ae71be2fa7e7fff20d1afb1ed23b6ba5dc8519bc771eff03cbcbfc662d0b7ab0c361e7fc174eebbbe4e9330b22c52924c",
    "93fa3ea80bdd2a4be3d3835d249e517e4b3d180fd159aa1a98f44da3cb07f45e7ac011e4f117de791f78dced3c7e59cac829b673925a6f48476caf9ddbe38779"
    "e071e0f1e9d1291ed7fd5a77c5fb2212cf28a7b92a5dafd3f50753c70ff0faec7603af93c1035ec7533ff0bab118f42d7218c1c5b32f9bce7da6eb743923f35d",
    "8e96989a329989c1e75fbfed78fd439b7819249e517e77bd30f494ee6627a91f3f053fbbfbf93d1dea0c8e2e9a0c1b2fc63b858b58b3d8394e26bcc3ef76dfe3"
    "2ca27ebf498e81dfef8fff6ad1aca8ce4e5bf1eebc7af7ace95c2f2f9aae57cb3d31a2fd7811c1a5877f80c0f79be4931908e9c1b83f6889a7d8072ccd3727d3",
    "abaef5bb3b30ae9ffcf7b6da4f81b7f58e0a681d45745cfffeaf5f8171fdb2f2febcef5b71ffa4b2c3d5cb52b4b411eeaf854eb8e0c1431ff0fe4af27e70cafb"
    "f7f0f1feab087cbf493eee98b3f1f3d726d1520d41aa09bcac066b2d8b7fc7ae1e1d9acecdf8bafcee7a34ab0749da0388b771128fd4774037152ec6e2dde276",
    "21572a0545b620ed964a29b0072b690f0ea7f6e0fcb13d3847d48f2bbe91911b9398da85f97b1ed9c48b20f18c723bfe9e064392d77dbffa9fff005e773baf1f"
    "0d4486dbbc2894d6986a7d2353c91f66d77a1ef2ef3c42dcbfc2efedb8043de3b7bf6d5cbc5d3b0f7e7bec786a59153cf0dbe3a9dfede3f57344fbb0eadd3d69",
    "d1fe1a7e4af7d8f47ffe764cfd3546b3e35ebf0daf9903f0db78038f941d080b1d813e3da9a6e3fba561ac10bdccef0c6369efd801582735fbb9e6d3c737b0d9"
    "8779f5f1892e501f1d9f3fff258b76e8f21bfe7cf55cc71fd9c47fcf025f973ba34f8bd0a3ab5ffef01bbf053be1101ea9f7325b4eec70c230bad9ee5743eb9d",
    "d8e989c0473d14c769d74eb410f5fb4d7247dfeb45e54db8da83bc0973e241de045c785a59153cc89b80a7fe11e27eb78edf7e8068efbc7a88e25b7d5e3768f8"
    "3515d18e11ed78959e9ec7a6c7f5e93101f9152cf0f4fabdbbfe03f22b388907f915f0d46fd7cfbb12f3041f898b9e27a02549308cc3619ee08ef3046a4f129d",
    "27f8f8ebc94fc00e388447ca0ed4ea3d2698a58ea98da0588b8952e284dd28c7bc63074688fbddfa5d708568efbc7a88f28be8df05f76efe78958c68c7f8f418"
    "d58ebe3f2316ff29b25d3533eab2cc13d8b50b0716f8bafcee7621a2373d1069308149ff4d1488208f7df72fff1abe0fdc6e171e4699ac4449d96193c9e51a87",
    "990b2ab8d3f190bf08dee3d9ed37eadd5ac4caeeccdb5ff710787e93dcb4de571e7719dd17e30227520a5365b1e5f7b16b077e6513ffc8025f97db5d07fc4407"
    "92f717c1ba6007f148d983565d942ae561b2d60c27f6c38350978ae6b73df49de0767b80d28379f5ee3388f6ebdf055fbaf9e35521a2fd91981e630b5b0fb668",
    "3bf0c8267ec4025f97bb689d09ac0f73100fd687e1a9ff11e2fe157e6f7dcbb43ecc2bf300b06e0c3b9e5a56050fd68de1a9dfede3fb7344fbf0ea5d0c1bff7f"
    "1e81e737c91959f550d4cdbcbbe871bd5dffce8905be2ec7a52f37fb91b0de407ca88378a4f2bed1d9309f91863c534d0fdaf1ed58763f941ff8bcc3fff03ecf",
    "3eeac5a87f6f118bf39c7ce58cbbc033bc9fb7c0d7e5f8f444152d62dc0fbcef201ea9717f2fa9acc7f9fdcde3f4a9d816bb854179f3320771a0ab35ee1fbd8f"
    "6d9ef72b083cbf493e895ed44217d5654d0d41aa323c250d0451db087959ec01b175e698f4e729fd4a7a7df04fc03eb8df3e94369285b5dd422f536f8e6d43ab",
    "dc64f3c38b5defd80778bf673fd77cfab8816dfdc06b083cbf49cec829f5c193175d8a4d09525ca8d3699ac7662fece6855ec2b8a027e60b66f620f97d8460de"
    "c0413c52f6219f3fec0eb6d69ab563668bdb0c316185e1db1e9a371821ee87f503c6b2a8f503a8b825ff54c20975f5b82cdf1376bf47b316f8ba1cd77863dc7f",
    "84c71591bdd729881775bb5d086763fcde66339b6a1414b62dc6dadb99da2eac1f589af718c5838eec1be00b46b4e3038813bd237ec4025f97bb28de0ce2441d"
    "c48338513cf503cfcf6effbc3c4f2a8e539b2f1f7ff368ee30b56b26bf2f0bff8f6ce2bf6f81afcbf1c61f18fb13e28abc8347ca3ed0dde3cdf0813cdce09986",
    "b095dfdcefcbbdb487f60f1b21ee87f7da588c7af8d83ed8e56588337d3abe87e2d2c01e38880771a678ea1f21ee077b602c287b404c0f39f66cfcecac20d255"
    "869a929a6f79ecc2c826fe9905be2ec71997f0447f8e158960bcd10f37c3ff0af6c1213c52ef6553eeeeef0777258edf5612b97aa5b4bdbfb5e6f38e7d70bb3f",
    "e91cd13ebc7a17c2660f5e41e0f94d722d8a9e6a3625ba49297471fa99b034f6c0ee7742c1025f97bf9b99476d0c696cafff7c5bfd3b60e844f2fb15f8defce8"
    "03f84e58563b30afdfa83828e598e666b17d5a68e54ef331feb2a2f43db42ec12bef338a179d995f8845d4c35514e691ef881fb1c0d7e5308f8cc453cbaae0c1",
    "3c329efa81efb5722bbed7e3467d71984f86f9e4a73e0fcc1f2c160fe693f1d46f773d5a0d51bfdf24c76f27eeab15a56925c38b51a97950343cd739a2dd58f5"
    "3152c436affcb2e9dc67ba4e97a3f2d72dda3ed8f53342de3aec786a59153cc85b87a77eb007b39f6b2e7d1c15c14f7447fc8805be2e073f11124f2dab82077e",
    "223cf57bc54f748e6827defde953d8f8dd3a4f1d3dc997804ddf71e5a71ed96c47c5a21dba1c8b1fe8c63304a61d4a5e6faec00fe4201e293b20950a8350896b"
    "3532f5cdf5ccee56f9e2b2cf435ea2ebfaaa88fafd26b9a3e37e25c628b2f1b9ce11edc63bee3f5d985d701a8f159a4ced069edd7dea93483ca3fc96fccf510a",
    "4b5503343bfec340f5e4f420f2f18ffe0af2482c2bcfcf1b0fba270ed72ec2b9faf1e91abb4e17e8524509edf8bcc3f3f0fe1a8b51dfee61f3e7a3fe5dfca6a3"
    "16c7ae3eef594d90e845f1baddefc01212cf289fe8c5e15d15439498ded8ee07cc9d4634ee3ff237c0f3cbcbf373fbf137a37da6106ef782c7175bc150bc992d",
    "c4b73cb4bf24bccfb38f7a41ed3f6057ffbe643af799aed3e5a67d87794a6a327cadd5b1cbffe6826a875e96745db0dca2a4f1a79eb6bbf0748f61f356c3d77d"
    "4636aee7ea956f173e01fe77088f14ff0ffa97991d2ad5686e066bb9a470d44e75c3971eca17e795f799e83ec3be3723daf15bd3e31bd8fc3acf21dae19f4a1a",
    "ac20483eebf76e5ebce74de78ff134495de856591adf77611c896794dff5bbb0d1e5036a1f91cf1bfdcfc76f82ffdeed7cbf7d11ce152fd8c46627d62ae6d347"
    "ca452251f3501c27bcbfc682f2eb5c21ea9bb79fbe8ac0f39be4a6f13d23c7ba0cab64f8036d4a72613c4f6ebe7f6e3d99fcf7c460c0dc610b98b7fd25c4efb8",
    "9ff773bd8b78b4b1dbdb2ee63706b524c7afa72aac87e66d81f78dc5a86f5fc3c6fbf3ee3366e2fdc922244a7aa08feeed8fefcd655effce8777c4d3ebcf59e0"
    "e972bbbcffb6d663d73a4390efff1ee274dccff7d5d6d661996795fa91c025bbfc6ea89a8ceda581ef578def7f80a86fde7efa13049edf2437f13d258aece048",
    "a5b05497af298cc067f84396aae9fbb2e19a5f9e77dfb0c6b415672d8aaf8f3f0470c5717ec7025f97dbb507e80ed5148c9c7e8daa2fb561ded7edf641a0f6db"
    "558a4ac7eba1edb65c5ea7b31571e0a178fe11e27e78af8dc5a887dfc2e6e77fc174eebbbe4e9330b22c52928c2dce87b49f7f17896794df6dfc30e99bc90842",
    "ef2592ebb5222fbcf33ef0bbdbf9fdb29491536ce724b5de908ed85e3bb7c70ff31ecae33642dc0ffc6e2ca87ccf5788fadce607ba2bff831f6876fbc10f4406"
    "0ffc4078eab7bb5eab81a8df6f923b14df795f4bcba5ff4a3a6fcf896bc7fba4d76bc1781f179e5656050fc6fb78ea079e9ffd5c73e9e355e99ae7bf87a86fde",
    "7efc63049edf2437cf07f404a61e95246a90622945a179866faad7419cbfc5f7e38c8e239cbff3ea7fab601fdc6e1f867bbba1f8b158e6f2d55c3d5a6eec66fb"
    "5cce43f13f6eb70ffaa9f6b94f581fcf6962f1fd8ccc53bc0f9fdf87f47780d37103dabaef711f118f1bb8823c6d0ee291cadb7011ede6b88d4179235890d6bb",
    "f1357aa7c71df8bcc3f3f0fe1a8b53719ecb16df4f3a8f03c4f73b85a79555c183f87e3cf5435eb6d9cf359f3e56b08def51eb88fd530947691aefd6b81e67c7"
    "07754aa1267efe712f111f1f447eff620d78deed3c9fec6e1c488d9d439e8b278bb59d413cd46f673d94af07de5f6341addf85fc3cb7c373c86f0ff97996847f",
    "49e3417e1e3cf503df1b8b51dfbe898def5f43e0f94d7213df730c9f93b2e3313daef1bcd57e2eb516a50686e28ad3dc43e219e576fd387a472d603f0625f53d"
    "989f753bcf6fa53be5e3cb2a43159903860f5f305cfc30e5a1f558f01ecf6ebf537c0fe3fbd97830bebf2b9e5656050fc6f778ea1f21ee9fb71fcf11f5fb4d72",
    "7cbc7fbf3b89d4cc4931356233c1c822a5d45a64f5f0db6007ee880776c0693cadac0a1ed8013cf58f10f7831d301663dc7e0c5b3ccfeb083cbf496eb203dab2"
    "85acee05c237af4bda0f74683af799aed3e576f5c7d86124d7715de5fe5b013f90dbed40b592ae54377b254aa6d7b9417283ef6e52430fade382f77876fb5179",
    "1a60fc7f3b3c18ff3b8da79555c183f13f9efaedc66f5288fafd26396ede9f2edccd7515b1ab14a79b80fb48ebe3f1a2e781b56569c9a66bf3f5909a3fd23b6a"
    "0171fc3f7b13f238b8de0e040bcdb59eb2b72348cd967c94a29ab154a607f3c02bf41e8fcb55f69aef45447df3f6d7cba6739fe93a5dcec8bcb60049d16c9c5b",
    "793e83c433ca6f190f76639587a1a774f520a91f3f85bc6ceee7f974a83338ba68326cbc18ef142e62cd62e738093cbfb23c8fc2c3977fadc1709462397fb1ac"
    "ebb212483ca3dc0eaf6b3d443c2f2bf0b98378a4f22ef42ee8a4d8abc93be5cb90201cca476ba1d38acf3b7cee96f5f48ff9fc7e839164a5c1189fe31cd14eac",
    "fa373ac7366ffb47083cbf49aea614e295b38620b182209e093d5a6ab0c2e559ad45d73a8bcbb336ba239e5e7fc5024f97df315f87a6464fe939f2e382d13ffd"
    "d773e0c759567b30eff85e7e98ec2713c3e1e15e7f7d23bb1e8ce7a36b410ff9f33f45dc3f6f3f5e21eaf79be4cebdd7f79f7ec1598b66455a22aba7696cdf03",
    "56f13593d1eee4b8e0790586afd3fd0caf5cb7e391cd76442cdaa1cbed7d27108d0780bc6c0ee291b207470391e1362f0aa535a65adfc854f287d9352ff9f53f"
    "45dc0ff660f6f3cea7a7196cf6c0ca5f337e703575cfa2e23b97d43f64cceba7f611f1fd167ff5da8bf03de076fe972e82629b9137a2dcd661983fac96430f4f",
    "640fe5edf914713ff0ffece79d6f7e802cff333cf0bf15ff333c71feff47e07ff7f37f933a0de742a5838b7035aac437a9dc06bd91f7d03e5c303f30fba81783"
    "fe7d7abe303f8f5dbcdbcefb3eb2891741e219e5e0cf41e2a96555f0c09f83a77e17f2f9909604b96b9aaf1311ed9c57ff9e453cc78ba6ebd532fa4e443d46de",
    "23c6ef8d2ecb4e8e10d7f3b47d1527bd447adc7ef57388eb713fcf2b5beb5c21514ab72a2161d853b25c2abba67888e73f44dc0feb716feadd3ec1384dbcfbe4"
    "92e673d82717179e5656050ff6c9c5533ff0f9ecf61bf5eee09acfedee87fb1602cf6f929bf7c3154576a065163a52bf60525dbea630028f6bddd7172ddaa5cb",
    "1b53dcb316c5d7c7860057dce6bb16f8badcf6feb8a88e24bf7fe22f7e2c817d70bb7dc8e7e34ae7b01d0c572b070f0faa456a3b979553deb10f23c4fdf05e1b"
    "8b510fc3d8ecc51f23f0fc2639ec9fae15d83ffdd6786a59153cd83f1d4ffd76f3f3d0a6739fe93a5d8e3d3f8f360110bb6d9e4abc713aa7d8d67b2ddbbebbb7",
    "f51fb965de08f6ddf5361eecbb8ba77e72ef33ee7d778dcf718e68275e3bb0876d9ee033083cd86777d9f76d837d769dc4837d76f1d40fbc3efba81723af3f9e"
    "2fb0eb97ff82e9dc67ba4e9733f2e4c386ae9b79d72efe4b16f8ba9ce6aa6370bafe601a208b4b6fca16f8bafceef19c11bde98148830918fb91e83cd30710ff",
    "e37e3b502ac8c1cb4ba63cac2aa584d2de3e3e2c244e3c341f007660f6512f463b90c76607e6e56163564ef78ef7d3483ca3fceebc6fccca49502f207f9b8378"
    "a4f2b70d9bfc6eba5fd9910a5b89e372a7521bd67a8acf3b3c0fefafb1a0f27092d23793ff9ea5f9a6d2f22d6e3e7709e33e67faedb58e221af7f9feaf5f81f9",
    "5bb7f37b71ffa4b2c3d5cb52b4b411eeaf854eb8e0c1439f77f8fd43c4fdf3f6631651bfdf24c7f55dce09757508bfa8381e18bfdf0ecfc3f61fc6ef0ee2c1f8"
    "1d4ffdc0efb3dbbfacfc6e57ef5fb5c0d7e5d77e7a534380f767b71b789f0c1ef03e9efa81f767b7dfa877df5e9af9d965e1fd25dc6f13ad37379ee18909db29",
    "0ec1b84c98b775108fd4bc6d3dde0b57f7faf1b56da55ee975b6fa553a9bf0505c26d885d9ed37ea5d149b5d78d974ee335da7cb654590e87a8657e8263d4970"
    "b92c713b76f5c5f97d150d3db700de8fc0f7808378a4787faf1da6b3c9c3e0d1c170b7d02e1f09d983e801f0fe0abdc793b28e2d0effb6f93517cdf38f6ce247",
    "2cf07539e4db44e2a96555f020df269efa81d767b7df295eff1c02cf3f954c586afce84bc3eb76e374f316f8ba1c5fdcbd2a5a849e80ffc6413c527cdf4b2aeb"
    "717e7ff3387d2ab6c56e6150debccc419eb615e3fbada599cf753bff1f5be0eb725cfc6f9cd525a937a3c4efbeff09f0bf4378a4f89fe777b63345497c781ae5",
    "cbc3c6403c6d97d73cb4ee0af87f76fb8d71f9c96bfebf42d4376f7fbd8ec0f39be4934dc01acc5993568ef4e73fa1d8a89c286a166159ec81ddf9dda605be2e"
    "c7650f9edaaf44e37eae7e02df07eeb70f7d9eab87eb622e757c7a9450d2c9e27a7d3be5217f10bcdfb39f6b3e7d7c0bdb77c3e711787e935c0f5b31c7e12cda",
    "4e2c619eceb9f235e81f0ee037f2061ea978503a1be633d29067aae9413bbe1dcbee87f2039f77ec82ddef862ca27ebf49ee95b81f141eb63c6c425d3de2c27b"
    "0e89a749bae32edebe816737be3f8ac433caefba6fae9a854d58c43cc055ece32d58b7bbac7c3eef383fbb91ad9c3ce4b652e15a70935a2b952e85cbb287e279",
    "dcfafea2c6b58eecabe87b10d18edfc4e60f5ab63ccbb7e57dc8b33cfba817c8b34c060ff22ce3a9dfad76e01cd12ebcfaf6781ec0aebebd86c0f39be426ded7"
    "b7195e18dfdbfdeedb43e219e5f8f663d6ea23c8f33f7b13f667743dcf070bcdb59eb2b72348cd967c94a29ab15406e23c57e93df619f2b1d9f59fbf6c3af799",
    "aed3e58c6c8cfc712bcf3b1f1760e8a9458c07609d968378a4783e1dea0c8e2e9a0c1b2fc63b858b58b3d8394e02cfaf2ccfa3f0f0edabde60c61f332db7fae9"
    "13483ca3dcdebaac490f699a007cee0d3c52f3aebd0b3a29f66af24ef932240887f2d15ae8b4e2f30e9fbbc5dffa98cfef37184956a6e12064f5efd3f385adbf",
    "b58b775b5e7f64132f82c433ca61bd2d124f2dab8207eb6df1d4ef423e1fd29220774de374947fc49179d8d17722ea31f21e317e6f745976728471fbac791959"
    "a4a4c9cccca497488fdbaf7e0ee376f7f3bcb2b5ce1512a574ab1212863d25cba5b26b8a87781ee6558d0535af7a85a86fde7efa0a02cf6f92cf9857a5fb6294",
    "1d779a2a77abdffd00896794e3180fe81d46363e3ed2faf5dfc1fceab2f2fdbc7e1aae52914e5ac3927c74cc8412b1b5e0b0b2ee253f0dbcc7b3db6fd4bbe035"
    "ef7f0f51dfbcfdf50602cf6f923f85f70f84788bae75b4ebdc1a4fe9407e054bbd99761ce9fc0a104fe9201eb171fffac341f9a2593e69353be1425ae9ec1df6",
    "93104fb91ae3fe4801dbb8ffcb083cbf493e339ef281be7aca3eef9b0baa3d7a59e2f5743379ff6dadc716b19eee39ffff01dfbb9defb78a7ca274d1bee44a4d"
    "9ad95776fa07a1cb641af87e25f8de57c036de7f0b81e737c94d7c4f89223b88313c250d8e54224b75f99ac2083cae38cf2f5ab44b9737a6b8672d8aafb3f4f5",
    "bfc3c826febb16f8badcae1d4076e454b308faff7ff16309fc416eb70bf97c5ce91cb683e16ae5e0e141b5486de7b2b287f2ac8d10f7c37b6d2c463d4c78eefb"
    "6051f302f07d801d4f2dab8207df0778eab7ebdf2d22eaf79be458dfe3fbe39fa71448d63f7408eb6d6de2797ffd06acb775120fd6dbe2a97f09c76fb7ca9786",
    "f28b3812df79158d687fe0cb9f66b5cf4a83396338915d98ffdfaedf306e81a7cbefae1fd31e22fe1d1889bf7905fcee767e6f88ebfbfdfd8344bfc6b68fd8ea"
    "7621476d1e7b681f15787f8dc5b8be3643707ded24165da6dd1aa7bf8bc433caedc5e9ebbd44723d56e48577609cee7a1ebf2c65e414db3949ad37a423b6d7ce",
    "edf1c33cf038f0f8f4e8148fdbd5ef57917846f975fe7ad3065cc0efb3db0dfc4e060ff81d4ffdc0efc682f2b7a3fc3da4f29d2d0bdfdbf5db411e34ec786a59"
    "153cc88386a77ebbeff1a1e9dc67ba4e9763e0fdfbd33dac6a944caf2fc4ff7eaf16518fe755b007600f0ced057bb0583cb00778ea77bb3d3847b40fabde3daa",
    "12f4f718f3622e0bdf2f69de1dc897e9713cc89789a77ee0f9d9ed37e8dda8868de7214fa656204f26124f2dab82077932f1d40f3c3ebbfdc6f9d93ab678f9f9"
    "c7cfdab34e12c03404899624419afcbe6ce3f8e5d79f593d49d20e8c3efe7af213b0030ee191b203b57a8f0966a9636a2328d662a294386137ca31b0037a7d59",
    "44fd7e93dcd5fb8e5f3d8e9b1711f5e1ce6720d1ea522051a295b1dd532cd70dcc8bff9205be2ebfe6ffe94603b8d65d9f5ae0eb725cfa62eac705f8ef47c25f"
    "fc037c0fb8dd0e6c3252b6d490b39de3609867d71bbd6278a3eaa1389e11e27e78af8dc5a8876f2ccccfb3683bf0c8267ec4025f9783df0789a79655c103bf0f",
    "9efa4788fbddcaf3281e74248ec7f756443bbe81ed7be0f3087cbf49cec86a86e0bad90fb3683b6037ffc68905be2ec7a54f37fb91707eee0f607e7779edc3bc"
    "f3bb7436cc67a421cf54d383767c3b96dd0fe5073eb00fcb6a1fce11edc5ab875f83b84e88eb34b4770ebd81781f07f120ae134ffd23c4fd600f8cc5a8876f2d",
    "cdf7c1b2d88391cd769c59b4439763d1a31bcf60fe6020a74757f0bde0201e317fd2492fc6c5397e4392c38ab8d5e28387e1ae87f26f8e10f7837d3016a31e3e"
    "c0661fe6f5df9868d933fe2307f6e77aaafe98bf1908ce23277ef77d882772bb3de0f99ded4c51121f9e46f9f2b031104fdbe535c8cbbfe2f6e04fb1c599be82",
    "c0f39be493e848738cd1a42c8b5d18d9c47fcf025f97e3d2a319fd49da3e7c9ff243be20b7db87d65a45ac1632db0ab5bf75727070d2927ae10ed887157eaf27"
    "656369fc498bb60b30df3cfba817986f268307f3cd78ea1f21ee077b602c463ddc84f966986f36b4770ebd81f96607f160be194ffd23c4fd600f8cc5a8876198",
    "4f98fe0ef309b38f7a81f9043278309f80a7fe11e27eb007c6829a4f40e1cddb7fcf9bce7dd7d769122d57daf2f0bfddef8043d3b9195f97e3d2173dd71c39fd"
    "8800ef3b88478af70be1746fefe861bd5d1c9c1ee5f7325c31cd1621ae68c579ff1d6cbc6fb5bfe36475edb82b96ce0f34b2d98e8a453b74b90371a6ea350bd8",
    "ef17e6091cc423650fb61f56a3c934cfb4e3c983a3fd3ed5cd17a2dd5defd803d867c65896651fb1458ff761ff306381fdc3c8e0c1fe6178ea075e379665e175"
    "bb7856f98c6a2dca90d71478dc5880c7c9e0018fe3a9dfaedf358ba8df6f92e3c8273dfeab45b3222df908ebddbd0b6c71fe77cc275d13782dd07fd9fc36cbef",
    "b79fd59344f349839fc6413c5276a09b0a1763f16e71bb902b9582225b90764b250fcdd7821d98dd7e83de9d5f601bd743de50e375ba1cf28622f1d4b22a7890"
    "37144ffdc0ebb3dbef14afcf31ffca0ad4f2ec0b6037ee326f81afcbf1adcb52fb6f1171f8308e77108f14df87fabbeba58370f372b7d7d8dfe854baed2de938",
    "e91dbeff0de2fe79fbb18aa8df6f92e3e07bf5c6b39a44530a1d9f7c962728854a490297e1c5ae627cae7344bbf1da811631bffd24d0689fe92ccd7cac5d3b50"
    "b0c0d7e5b8ec80de7fe4e36e46a781af821d70bb1d900f954e61bdb855dfddd93ae85d9ef673ca7ac643e37e789f671ff562d4bf6f825fe78ef8110b7c5d0e7e",
    "1d249e5a56050ffc3a78ea077e9f7dd48b51ffd6619dedf47758673bfba81758674b060fd6d9e2a91fecc0eca35e5076008507eb6b67e31f9acecdf8ba1cd6d7"
    "ce8ba79555c183f5b578eab7fb1eafc47cee3d69d1f19afcb2e5df5c7efe9fd58310a7e9153c52fc1f163a027d7a524dc7f74bc358217a99df19c63cc4ffe788",
    "fbadfad15c50fd382f1e5e3d79f59aafaf10f5cdab27af23f0fc26f92ec5710cdf3ca3f99a509ffc3166225139638566d360af16cddb1fd9c4ef58e0ebf277c7"
    "a4dd12383a207706818450eb7234afc83a7b4f7b2b30ee2bba49f30173ef05d4de0b34c6ffe3c427a486be25be1e6ff42f3ffcc66f81d71dc223c5eb8c383808",
    "963ac3f0763a5b57cad9ccc6e545c8037e9cff0772fca327", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 188424U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_Hamming_encoding_wrapper_fixpt_hdl_mex_info.c) */
# CTranslate2Test
Quick implementation/experimentation with OpenNMT's CTranslate2 library, primarily meant to just serve as an example of the core setup that is required.

## Compiling
### Prerequisites
* [CUDA Developer Toolkit v11.0](https://developer.nvidia.com/cuda-toolkit)
* [NVIDIA cuDNN for CUDA v11.0](https://developer.nvidia.com/cudnn)
* [ICU Libraries](https://github.com/unicode-org/icu/tree/main)
* A transformer model; for this project, the [CTranslate quickstart model](https://opennmt.net/CTranslate2/quickstart.html) is recommended.

Ensure you have extracted cuDNN within your CUDA Developer Toolkit installation and that such libraries are within the system PATH, then:
`git clone --recursive "https://github.com/NM-20/CTranslate2Test.git"`.
The [converted](https://opennmt.net/CTranslate2/conversion.html) model should be placed within the `TranslateTest` project's "res" directory.

Compile the libraries within `externals`, ensuring that CTranslate2 is compiled with the following settings:
`-G "Visual Studio 16 2019" -DOPENMP_RUNTIME=COMP -DWITH_CUDA=ON -DWITH_CUDNN=ON -DWITH_MKL=OFF`

From there, you may proceed with building the `TranslateTest` project in VS 2022.

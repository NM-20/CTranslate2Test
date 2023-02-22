#include <onmt/Tokenizer.h>
#include <ctranslate2/translator.h>

using namespace std;

onmt::Tokenizer mTokenizer("sentencepiece.model");
// TODO: Look into why CPU usage results in an error
ctranslate2::Translator mTranslator("ende_ctranslate2/", ctranslate2::Device::CUDA);

int main()
{
    std::vector<std::string> tokens;
    mTokenizer.tokenize("Hello World!", tokens);

    const std::vector<ctranslate2::TranslationResult> results = mTranslator.translate_batch({ tokens });

    std::cout << mTokenizer.detokenize(results[0].output()) << std::endl;

    // Expected output: Hallo Welt!
    return 0;
}

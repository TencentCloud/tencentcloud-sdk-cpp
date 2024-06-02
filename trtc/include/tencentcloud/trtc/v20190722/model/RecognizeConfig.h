/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_RECOGNIZECONFIG_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_RECOGNIZECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 语音识别使用的配置
                */
                class RecognizeConfig : public AbstractModel
                {
                public:
                    RecognizeConfig();
                    ~RecognizeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取语音识别支持的语言，默认是"zh"。目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循[ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes)：
Chinese = "zh"
Chinese_TW = "zh-TW" 
English = "en"
Vietnamese = "vi"
Japanese = "ja"
Korean = "ko"
Indonesia = "id"
Thai = "th"
Portuguese = "pt"
Turkish = "tr"
Arabic = "ar"
Spanish = "es"
Hindi = "hi"
French = "fr"
Malay = "ms"
Filipino = "fil"
German = "de"
Italian = "it"
Russian = "ru"

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
tencent asr不支持"it"和"ru"，google asr全都支持。
                     * @return Language 语音识别支持的语言，默认是"zh"。目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循[ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes)：
Chinese = "zh"
Chinese_TW = "zh-TW" 
English = "en"
Vietnamese = "vi"
Japanese = "ja"
Korean = "ko"
Indonesia = "id"
Thai = "th"
Portuguese = "pt"
Turkish = "tr"
Arabic = "ar"
Spanish = "es"
Hindi = "hi"
French = "fr"
Malay = "ms"
Filipino = "fil"
German = "de"
Italian = "it"
Russian = "ru"

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
tencent asr不支持"it"和"ru"，google asr全都支持。
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置语音识别支持的语言，默认是"zh"。目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循[ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes)：
Chinese = "zh"
Chinese_TW = "zh-TW" 
English = "en"
Vietnamese = "vi"
Japanese = "ja"
Korean = "ko"
Indonesia = "id"
Thai = "th"
Portuguese = "pt"
Turkish = "tr"
Arabic = "ar"
Spanish = "es"
Hindi = "hi"
French = "fr"
Malay = "ms"
Filipino = "fil"
German = "de"
Italian = "it"
Russian = "ru"

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
tencent asr不支持"it"和"ru"，google asr全都支持。
                     * @param _language 语音识别支持的语言，默认是"zh"。目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循[ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes)：
Chinese = "zh"
Chinese_TW = "zh-TW" 
English = "en"
Vietnamese = "vi"
Japanese = "ja"
Korean = "ko"
Indonesia = "id"
Thai = "th"
Portuguese = "pt"
Turkish = "tr"
Arabic = "ar"
Spanish = "es"
Hindi = "hi"
French = "fr"
Malay = "ms"
Filipino = "fil"
German = "de"
Italian = "it"
Russian = "ru"

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
tencent asr不支持"it"和"ru"，google asr全都支持。
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                    /**
                     * 获取使用的模型，目前支持tencent和google，默认是tencent。
                     * @return Model 使用的模型，目前支持tencent和google，默认是tencent。
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置使用的模型，目前支持tencent和google，默认是tencent。
                     * @param _model 使用的模型，目前支持tencent和google，默认是tencent。
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取翻译功能支持的语言，如果填写，则会启用翻译，不填则只会使用语音识别。
目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循[ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes)：
Chinese = "zh"
Chinese_TW = "zh-TW" 
English = "en"
Vietnamese = "vi"
Japanese = "ja"
Korean = "ko"
Indonesia = "id"
Thai = "th"
Portuguese = "pt"
Turkish = "tr"
Arabic = "ar"
Spanish = "es"
Hindi = "hi"
French = "fr"
Malay = "ms"
Filipino = "fil"
German = "de"
Italian = "it"
Russian = "ru"

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
google支持上述语言两两之间翻译，tencent只支持部分语言之间翻译。

tencnet目标语言，各源语言的目标语言支持列表如下，冒号左侧是目标语言，右侧是源语言：
- zh（简体中文）：zh-TW（繁体中文）、en（英语）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）
- zh-TW（繁体中文）：zh（简体中文）、en（英语）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）
- en（英语）：zh（中文）、zh-TW（繁体中文）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）、ar（阿拉伯语）、hi（印地语）
- ja（日语）：zh（中文）、zh-TW（繁体中文）、en（英语）、ko（韩语）
- ko（韩语）：zh（中文）、zh-TW（繁体中文）、en（英语）、ja（日语）
- fr（法语）：zh（中文）、zh-TW（繁体中文）、en（英语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）
- es（西班牙语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）
- it（意大利语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）
- de（德语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）
- tr（土耳其语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、ru（俄语）、pt（葡萄牙语）
- ru（俄语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、pt（葡萄牙语）
- pt（葡萄牙语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）
- vi（越南语）：zh（中文）、zh-TW（繁体中文）、en（英语）
- id（印尼语）：zh（中文）、zh-TW（繁体中文）、en（英语）
- th（泰语）：zh（中文）、zh-TW（繁体中文）、en（英语）
- ms（马来语）：zh（中文）、zh-TW（繁体中文）、en（英语）
- ar（阿拉伯语）：en（英语）
- hi（印地语）：en（英语）
                     * @return TranslationLanguage 翻译功能支持的语言，如果填写，则会启用翻译，不填则只会使用语音识别。
目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循[ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes)：
Chinese = "zh"
Chinese_TW = "zh-TW" 
English = "en"
Vietnamese = "vi"
Japanese = "ja"
Korean = "ko"
Indonesia = "id"
Thai = "th"
Portuguese = "pt"
Turkish = "tr"
Arabic = "ar"
Spanish = "es"
Hindi = "hi"
French = "fr"
Malay = "ms"
Filipino = "fil"
German = "de"
Italian = "it"
Russian = "ru"

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
google支持上述语言两两之间翻译，tencent只支持部分语言之间翻译。

tencnet目标语言，各源语言的目标语言支持列表如下，冒号左侧是目标语言，右侧是源语言：
- zh（简体中文）：zh-TW（繁体中文）、en（英语）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）
- zh-TW（繁体中文）：zh（简体中文）、en（英语）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）
- en（英语）：zh（中文）、zh-TW（繁体中文）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）、ar（阿拉伯语）、hi（印地语）
- ja（日语）：zh（中文）、zh-TW（繁体中文）、en（英语）、ko（韩语）
- ko（韩语）：zh（中文）、zh-TW（繁体中文）、en（英语）、ja（日语）
- fr（法语）：zh（中文）、zh-TW（繁体中文）、en（英语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）
- es（西班牙语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）
- it（意大利语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）
- de（德语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）
- tr（土耳其语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、ru（俄语）、pt（葡萄牙语）
- ru（俄语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、pt（葡萄牙语）
- pt（葡萄牙语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）
- vi（越南语）：zh（中文）、zh-TW（繁体中文）、en（英语）
- id（印尼语）：zh（中文）、zh-TW（繁体中文）、en（英语）
- th（泰语）：zh（中文）、zh-TW（繁体中文）、en（英语）
- ms（马来语）：zh（中文）、zh-TW（繁体中文）、en（英语）
- ar（阿拉伯语）：en（英语）
- hi（印地语）：en（英语）
                     * 
                     */
                    std::string GetTranslationLanguage() const;

                    /**
                     * 设置翻译功能支持的语言，如果填写，则会启用翻译，不填则只会使用语音识别。
目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循[ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes)：
Chinese = "zh"
Chinese_TW = "zh-TW" 
English = "en"
Vietnamese = "vi"
Japanese = "ja"
Korean = "ko"
Indonesia = "id"
Thai = "th"
Portuguese = "pt"
Turkish = "tr"
Arabic = "ar"
Spanish = "es"
Hindi = "hi"
French = "fr"
Malay = "ms"
Filipino = "fil"
German = "de"
Italian = "it"
Russian = "ru"

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
google支持上述语言两两之间翻译，tencent只支持部分语言之间翻译。

tencnet目标语言，各源语言的目标语言支持列表如下，冒号左侧是目标语言，右侧是源语言：
- zh（简体中文）：zh-TW（繁体中文）、en（英语）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）
- zh-TW（繁体中文）：zh（简体中文）、en（英语）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）
- en（英语）：zh（中文）、zh-TW（繁体中文）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）、ar（阿拉伯语）、hi（印地语）
- ja（日语）：zh（中文）、zh-TW（繁体中文）、en（英语）、ko（韩语）
- ko（韩语）：zh（中文）、zh-TW（繁体中文）、en（英语）、ja（日语）
- fr（法语）：zh（中文）、zh-TW（繁体中文）、en（英语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）
- es（西班牙语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）
- it（意大利语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）
- de（德语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）
- tr（土耳其语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、ru（俄语）、pt（葡萄牙语）
- ru（俄语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、pt（葡萄牙语）
- pt（葡萄牙语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）
- vi（越南语）：zh（中文）、zh-TW（繁体中文）、en（英语）
- id（印尼语）：zh（中文）、zh-TW（繁体中文）、en（英语）
- th（泰语）：zh（中文）、zh-TW（繁体中文）、en（英语）
- ms（马来语）：zh（中文）、zh-TW（繁体中文）、en（英语）
- ar（阿拉伯语）：en（英语）
- hi（印地语）：en（英语）
                     * @param _translationLanguage 翻译功能支持的语言，如果填写，则会启用翻译，不填则只会使用语音识别。
目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循[ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes)：
Chinese = "zh"
Chinese_TW = "zh-TW" 
English = "en"
Vietnamese = "vi"
Japanese = "ja"
Korean = "ko"
Indonesia = "id"
Thai = "th"
Portuguese = "pt"
Turkish = "tr"
Arabic = "ar"
Spanish = "es"
Hindi = "hi"
French = "fr"
Malay = "ms"
Filipino = "fil"
German = "de"
Italian = "it"
Russian = "ru"

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
google支持上述语言两两之间翻译，tencent只支持部分语言之间翻译。

tencnet目标语言，各源语言的目标语言支持列表如下，冒号左侧是目标语言，右侧是源语言：
- zh（简体中文）：zh-TW（繁体中文）、en（英语）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）
- zh-TW（繁体中文）：zh（简体中文）、en（英语）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）
- en（英语）：zh（中文）、zh-TW（繁体中文）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）、ar（阿拉伯语）、hi（印地语）
- ja（日语）：zh（中文）、zh-TW（繁体中文）、en（英语）、ko（韩语）
- ko（韩语）：zh（中文）、zh-TW（繁体中文）、en（英语）、ja（日语）
- fr（法语）：zh（中文）、zh-TW（繁体中文）、en（英语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）
- es（西班牙语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）
- it（意大利语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）
- de（德语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）
- tr（土耳其语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、ru（俄语）、pt（葡萄牙语）
- ru（俄语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、pt（葡萄牙语）
- pt（葡萄牙语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）
- vi（越南语）：zh（中文）、zh-TW（繁体中文）、en（英语）
- id（印尼语）：zh（中文）、zh-TW（繁体中文）、en（英语）
- th（泰语）：zh（中文）、zh-TW（繁体中文）、en（英语）
- ms（马来语）：zh（中文）、zh-TW（繁体中文）、en（英语）
- ar（阿拉伯语）：en（英语）
- hi（印地语）：en（英语）
                     * 
                     */
                    void SetTranslationLanguage(const std::string& _translationLanguage);

                    /**
                     * 判断参数 TranslationLanguage 是否已赋值
                     * @return TranslationLanguage 是否已赋值
                     * 
                     */
                    bool TranslationLanguageHasBeenSet() const;

                private:

                    /**
                     * 语音识别支持的语言，默认是"zh"。目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循[ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes)：
Chinese = "zh"
Chinese_TW = "zh-TW" 
English = "en"
Vietnamese = "vi"
Japanese = "ja"
Korean = "ko"
Indonesia = "id"
Thai = "th"
Portuguese = "pt"
Turkish = "tr"
Arabic = "ar"
Spanish = "es"
Hindi = "hi"
French = "fr"
Malay = "ms"
Filipino = "fil"
German = "de"
Italian = "it"
Russian = "ru"

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
tencent asr不支持"it"和"ru"，google asr全都支持。
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * 使用的模型，目前支持tencent和google，默认是tencent。
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 翻译功能支持的语言，如果填写，则会启用翻译，不填则只会使用语音识别。
目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循[ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes)：
Chinese = "zh"
Chinese_TW = "zh-TW" 
English = "en"
Vietnamese = "vi"
Japanese = "ja"
Korean = "ko"
Indonesia = "id"
Thai = "th"
Portuguese = "pt"
Turkish = "tr"
Arabic = "ar"
Spanish = "es"
Hindi = "hi"
French = "fr"
Malay = "ms"
Filipino = "fil"
German = "de"
Italian = "it"
Russian = "ru"

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
google支持上述语言两两之间翻译，tencent只支持部分语言之间翻译。

tencnet目标语言，各源语言的目标语言支持列表如下，冒号左侧是目标语言，右侧是源语言：
- zh（简体中文）：zh-TW（繁体中文）、en（英语）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）
- zh-TW（繁体中文）：zh（简体中文）、en（英语）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）
- en（英语）：zh（中文）、zh-TW（繁体中文）、ja（日语）、ko（韩语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）、vi（越南语）、id（印尼语）、th（泰语）、ms（马来语）、ar（阿拉伯语）、hi（印地语）
- ja（日语）：zh（中文）、zh-TW（繁体中文）、en（英语）、ko（韩语）
- ko（韩语）：zh（中文）、zh-TW（繁体中文）、en（英语）、ja（日语）
- fr（法语）：zh（中文）、zh-TW（繁体中文）、en（英语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）
- es（西班牙语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）
- it（意大利语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、de（德语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）
- de（德语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、tr（土耳其语）、ru（俄语）、pt（葡萄牙语）
- tr（土耳其语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、ru（俄语）、pt（葡萄牙语）
- ru（俄语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、pt（葡萄牙语）
- pt（葡萄牙语）：zh（中文）、zh-TW（繁体中文）、en（英语）、fr（法语）、es（西班牙语）、it（意大利语）、de（德语）、tr（土耳其语）、ru（俄语）
- vi（越南语）：zh（中文）、zh-TW（繁体中文）、en（英语）
- id（印尼语）：zh（中文）、zh-TW（繁体中文）、en（英语）
- th（泰语）：zh（中文）、zh-TW（繁体中文）、en（英语）
- ms（马来语）：zh（中文）、zh-TW（繁体中文）、en（英语）
- ar（阿拉伯语）：en（英语）
- hi（印地语）：en（英语）
                     */
                    std::string m_translationLanguage;
                    bool m_translationLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_RECOGNIZECONFIG_H_

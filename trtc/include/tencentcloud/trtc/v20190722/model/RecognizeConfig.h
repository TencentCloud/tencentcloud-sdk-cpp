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
                     * 获取语音转文字支持识别的语言，默认是"zh" 中文
目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循[ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes)：
可通过购买「语音转文本时长包」解锁或领取包月套餐体验版解锁此功能。

语音转文本支持语言类型如下：
- Chinese = "zh" # 中文
- Chinese_TW = "zh-TW" # 中国台湾
- English = "en" # 英语
- Chinese_YUE = "zh-yue" # 中国粤语
- Chinese_DIALECT = "zh-dialect" # 中国方言
- English = "en" # 英语
- Vietnamese = "vi" # 越南语
- Japanese = "ja" # 日语
- Korean = "ko" # 汉语
- Indonesia = "id" # 印度尼西亚语
- Thai = "th" # 泰语
- Portuguese = "pt" # 葡萄牙语
- Turkish = "tr" # 土耳其语
- Arabic = "ar" # 阿拉伯语
- Spanish = "es" # 西班牙语
- Hindi = "hi" # 印地语
- French = "fr" # 法语
- Malay = "ms" # 马来语
- Filipino = "fil" # 菲律宾语
- German = "de" # 德语
- Italian = "it" # 意大利语
- Russian = "ru" # 俄语

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
示例值：zh
                     * @return Language 语音转文字支持识别的语言，默认是"zh" 中文
目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循[ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes)：
可通过购买「语音转文本时长包」解锁或领取包月套餐体验版解锁此功能。

语音转文本支持语言类型如下：
- Chinese = "zh" # 中文
- Chinese_TW = "zh-TW" # 中国台湾
- English = "en" # 英语
- Chinese_YUE = "zh-yue" # 中国粤语
- Chinese_DIALECT = "zh-dialect" # 中国方言
- English = "en" # 英语
- Vietnamese = "vi" # 越南语
- Japanese = "ja" # 日语
- Korean = "ko" # 汉语
- Indonesia = "id" # 印度尼西亚语
- Thai = "th" # 泰语
- Portuguese = "pt" # 葡萄牙语
- Turkish = "tr" # 土耳其语
- Arabic = "ar" # 阿拉伯语
- Spanish = "es" # 西班牙语
- Hindi = "hi" # 印地语
- French = "fr" # 法语
- Malay = "ms" # 马来语
- Filipino = "fil" # 菲律宾语
- German = "de" # 德语
- Italian = "it" # 意大利语
- Russian = "ru" # 俄语

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
示例值：zh
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置语音转文字支持识别的语言，默认是"zh" 中文
目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循[ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes)：
可通过购买「语音转文本时长包」解锁或领取包月套餐体验版解锁此功能。

语音转文本支持语言类型如下：
- Chinese = "zh" # 中文
- Chinese_TW = "zh-TW" # 中国台湾
- English = "en" # 英语
- Chinese_YUE = "zh-yue" # 中国粤语
- Chinese_DIALECT = "zh-dialect" # 中国方言
- English = "en" # 英语
- Vietnamese = "vi" # 越南语
- Japanese = "ja" # 日语
- Korean = "ko" # 汉语
- Indonesia = "id" # 印度尼西亚语
- Thai = "th" # 泰语
- Portuguese = "pt" # 葡萄牙语
- Turkish = "tr" # 土耳其语
- Arabic = "ar" # 阿拉伯语
- Spanish = "es" # 西班牙语
- Hindi = "hi" # 印地语
- French = "fr" # 法语
- Malay = "ms" # 马来语
- Filipino = "fil" # 菲律宾语
- German = "de" # 德语
- Italian = "it" # 意大利语
- Russian = "ru" # 俄语

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
示例值：zh
                     * @param _language 语音转文字支持识别的语言，默认是"zh" 中文
目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循[ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes)：
可通过购买「语音转文本时长包」解锁或领取包月套餐体验版解锁此功能。

语音转文本支持语言类型如下：
- Chinese = "zh" # 中文
- Chinese_TW = "zh-TW" # 中国台湾
- English = "en" # 英语
- Chinese_YUE = "zh-yue" # 中国粤语
- Chinese_DIALECT = "zh-dialect" # 中国方言
- English = "en" # 英语
- Vietnamese = "vi" # 越南语
- Japanese = "ja" # 日语
- Korean = "ko" # 汉语
- Indonesia = "id" # 印度尼西亚语
- Thai = "th" # 泰语
- Portuguese = "pt" # 葡萄牙语
- Turkish = "tr" # 土耳其语
- Arabic = "ar" # 阿拉伯语
- Spanish = "es" # 西班牙语
- Hindi = "hi" # 印地语
- French = "fr" # 法语
- Malay = "ms" # 马来语
- Filipino = "fil" # 菲律宾语
- German = "de" # 德语
- Italian = "it" # 意大利语
- Russian = "ru" # 俄语

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
示例值：zh
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
                     * 获取发起模糊识别额外可能替代语言类型,最多填写3种语言类型。
注：Language指定为"zh-dialect" # 中国方言 时，不支持模糊识别，该字段无效
                     * @return AlternativeLanguage 发起模糊识别额外可能替代语言类型,最多填写3种语言类型。
注：Language指定为"zh-dialect" # 中国方言 时，不支持模糊识别，该字段无效
                     * 
                     */
                    std::vector<std::string> GetAlternativeLanguage() const;

                    /**
                     * 设置发起模糊识别额外可能替代语言类型,最多填写3种语言类型。
注：Language指定为"zh-dialect" # 中国方言 时，不支持模糊识别，该字段无效
                     * @param _alternativeLanguage 发起模糊识别额外可能替代语言类型,最多填写3种语言类型。
注：Language指定为"zh-dialect" # 中国方言 时，不支持模糊识别，该字段无效
                     * 
                     */
                    void SetAlternativeLanguage(const std::vector<std::string>& _alternativeLanguage);

                    /**
                     * 判断参数 AlternativeLanguage 是否已赋值
                     * @return AlternativeLanguage 是否已赋值
                     * 
                     */
                    bool AlternativeLanguageHasBeenSet() const;

                    /**
                     * 获取使用的模型，目前支持tencent和google，默认是tencent。
                     * @return Model 使用的模型，目前支持tencent和google，默认是tencent。
                     * @deprecated
                     */
                    std::string GetModel() const;

                    /**
                     * 设置使用的模型，目前支持tencent和google，默认是tencent。
                     * @param _model 使用的模型，目前支持tencent和google，默认是tencent。
                     * @deprecated
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * @deprecated
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取翻译功能支持的语言，如果填写，则会启用翻译，不填则只会使用语音识别。
注：文本翻译功能需要购买「语音转文本时长包」解锁或领取包月套餐-体验版解。
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
示例值：en
                     * @return TranslationLanguage 翻译功能支持的语言，如果填写，则会启用翻译，不填则只会使用语音识别。
注：文本翻译功能需要购买「语音转文本时长包」解锁或领取包月套餐-体验版解。
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
示例值：en
                     * 
                     */
                    std::string GetTranslationLanguage() const;

                    /**
                     * 设置翻译功能支持的语言，如果填写，则会启用翻译，不填则只会使用语音识别。
注：文本翻译功能需要购买「语音转文本时长包」解锁或领取包月套餐-体验版解。
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
示例值：en
                     * @param _translationLanguage 翻译功能支持的语言，如果填写，则会启用翻译，不填则只会使用语音识别。
注：文本翻译功能需要购买「语音转文本时长包」解锁或领取包月套餐-体验版解。
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
示例值：en
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
                     * 语音转文字支持识别的语言，默认是"zh" 中文
目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循[ISO639](https://en.wikipedia.org/wiki/List_of_ISO_639_language_codes)：
可通过购买「语音转文本时长包」解锁或领取包月套餐体验版解锁此功能。

语音转文本支持语言类型如下：
- Chinese = "zh" # 中文
- Chinese_TW = "zh-TW" # 中国台湾
- English = "en" # 英语
- Chinese_YUE = "zh-yue" # 中国粤语
- Chinese_DIALECT = "zh-dialect" # 中国方言
- English = "en" # 英语
- Vietnamese = "vi" # 越南语
- Japanese = "ja" # 日语
- Korean = "ko" # 汉语
- Indonesia = "id" # 印度尼西亚语
- Thai = "th" # 泰语
- Portuguese = "pt" # 葡萄牙语
- Turkish = "tr" # 土耳其语
- Arabic = "ar" # 阿拉伯语
- Spanish = "es" # 西班牙语
- Hindi = "hi" # 印地语
- French = "fr" # 法语
- Malay = "ms" # 马来语
- Filipino = "fil" # 菲律宾语
- German = "de" # 德语
- Italian = "it" # 意大利语
- Russian = "ru" # 俄语

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
示例值：zh
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * 发起模糊识别额外可能替代语言类型,最多填写3种语言类型。
注：Language指定为"zh-dialect" # 中国方言 时，不支持模糊识别，该字段无效
                     */
                    std::vector<std::string> m_alternativeLanguage;
                    bool m_alternativeLanguageHasBeenSet;

                    /**
                     * 使用的模型，目前支持tencent和google，默认是tencent。
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 翻译功能支持的语言，如果填写，则会启用翻译，不填则只会使用语音识别。
注：文本翻译功能需要购买「语音转文本时长包」解锁或领取包月套餐-体验版解。
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
示例值：en
                     */
                    std::string m_translationLanguage;
                    bool m_translationLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_RECOGNIZECONFIG_H_

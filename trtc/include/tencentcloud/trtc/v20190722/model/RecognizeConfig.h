/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
                     * 获取
语音转文字支持识别的语言，默认是"zh" 中文

可通过购买「AI智能识别时长包」解锁或领取包月套餐体验版解锁不同语言. 详细说明参考：[AI智能识别计费说明](https://cloud.tencent.com/document/product/647/111976)

语音转文本不同套餐版本支持的语言如下：

**基础版**：
- "zh": 中文（简体）
- "zh-TW": 中文（繁体）
- "en": 英语
- "16k_zh_edu"：中文教育
- "16k_zh_medical"：中文医疗
- "16k_zh_court"：中文法庭

**标准版：**
- "8k_zh_large": 普方大模型引擎. 当前模型同时支持中文等语言的识别，模型参数量极大，语言模型性能增强，针对电话音频中各类场景、各类中文方言的识别准确率极大提升.
- "16k_zh_large": 普方英大模型引擎. 当前模型同时支持中文、英文、多种中文方言等语言的识别，模型参数量极大，语言模型性能增强，针对噪声大、回音大、人声小、人声远等低质量音频的识别准确率极大提升.
- "16k_multi_lang": 多语种大模型引擎. 当前模型同时支持英语、日语、韩语、阿拉伯语、菲律宾语、法语、印地语、印尼语、马来语、葡萄牙语、西班牙语、泰语、土耳其语、越南语、德语的识别，可实现15个语种的自动识别(句子/段落级别).
- "16k_zh_en": 中英大模型引擎. 当前模型同时支持中文、英语识别，模型参数量极大，语言模型性能增强，针对噪声大、回音大、人声小、人声远等低质量音频的识别准确率极大提升.

**高级版：**
- "zh-dialect": 中国方言
- "zh-yue": 中国粤语
- "vi": 越南语
- "ja": 日语
- "ko": 韩语
- "id": 印度尼西亚语
- "th": 泰语
- "pt": 葡萄牙语
- "tr": 土耳其语
- "ar": 阿拉伯语
- "es": 西班牙语
- "hi": 印地语
- "fr": 法语
- "ms": 马来语
- "fil": 菲律宾语
- "de": 德语
- "it": 意大利语
- "ru": 俄语
- "sv": 瑞典语
- "da": 丹麦语
- "no": 挪威语

**注意：**
如果缺少满足您需求的语言，请联系我们技术人员。
                     * @return Language 
语音转文字支持识别的语言，默认是"zh" 中文

可通过购买「AI智能识别时长包」解锁或领取包月套餐体验版解锁不同语言. 详细说明参考：[AI智能识别计费说明](https://cloud.tencent.com/document/product/647/111976)

语音转文本不同套餐版本支持的语言如下：

**基础版**：
- "zh": 中文（简体）
- "zh-TW": 中文（繁体）
- "en": 英语
- "16k_zh_edu"：中文教育
- "16k_zh_medical"：中文医疗
- "16k_zh_court"：中文法庭

**标准版：**
- "8k_zh_large": 普方大模型引擎. 当前模型同时支持中文等语言的识别，模型参数量极大，语言模型性能增强，针对电话音频中各类场景、各类中文方言的识别准确率极大提升.
- "16k_zh_large": 普方英大模型引擎. 当前模型同时支持中文、英文、多种中文方言等语言的识别，模型参数量极大，语言模型性能增强，针对噪声大、回音大、人声小、人声远等低质量音频的识别准确率极大提升.
- "16k_multi_lang": 多语种大模型引擎. 当前模型同时支持英语、日语、韩语、阿拉伯语、菲律宾语、法语、印地语、印尼语、马来语、葡萄牙语、西班牙语、泰语、土耳其语、越南语、德语的识别，可实现15个语种的自动识别(句子/段落级别).
- "16k_zh_en": 中英大模型引擎. 当前模型同时支持中文、英语识别，模型参数量极大，语言模型性能增强，针对噪声大、回音大、人声小、人声远等低质量音频的识别准确率极大提升.

**高级版：**
- "zh-dialect": 中国方言
- "zh-yue": 中国粤语
- "vi": 越南语
- "ja": 日语
- "ko": 韩语
- "id": 印度尼西亚语
- "th": 泰语
- "pt": 葡萄牙语
- "tr": 土耳其语
- "ar": 阿拉伯语
- "es": 西班牙语
- "hi": 印地语
- "fr": 法语
- "ms": 马来语
- "fil": 菲律宾语
- "de": 德语
- "it": 意大利语
- "ru": 俄语
- "sv": 瑞典语
- "da": 丹麦语
- "no": 挪威语

**注意：**
如果缺少满足您需求的语言，请联系我们技术人员。
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置
语音转文字支持识别的语言，默认是"zh" 中文

可通过购买「AI智能识别时长包」解锁或领取包月套餐体验版解锁不同语言. 详细说明参考：[AI智能识别计费说明](https://cloud.tencent.com/document/product/647/111976)

语音转文本不同套餐版本支持的语言如下：

**基础版**：
- "zh": 中文（简体）
- "zh-TW": 中文（繁体）
- "en": 英语
- "16k_zh_edu"：中文教育
- "16k_zh_medical"：中文医疗
- "16k_zh_court"：中文法庭

**标准版：**
- "8k_zh_large": 普方大模型引擎. 当前模型同时支持中文等语言的识别，模型参数量极大，语言模型性能增强，针对电话音频中各类场景、各类中文方言的识别准确率极大提升.
- "16k_zh_large": 普方英大模型引擎. 当前模型同时支持中文、英文、多种中文方言等语言的识别，模型参数量极大，语言模型性能增强，针对噪声大、回音大、人声小、人声远等低质量音频的识别准确率极大提升.
- "16k_multi_lang": 多语种大模型引擎. 当前模型同时支持英语、日语、韩语、阿拉伯语、菲律宾语、法语、印地语、印尼语、马来语、葡萄牙语、西班牙语、泰语、土耳其语、越南语、德语的识别，可实现15个语种的自动识别(句子/段落级别).
- "16k_zh_en": 中英大模型引擎. 当前模型同时支持中文、英语识别，模型参数量极大，语言模型性能增强，针对噪声大、回音大、人声小、人声远等低质量音频的识别准确率极大提升.

**高级版：**
- "zh-dialect": 中国方言
- "zh-yue": 中国粤语
- "vi": 越南语
- "ja": 日语
- "ko": 韩语
- "id": 印度尼西亚语
- "th": 泰语
- "pt": 葡萄牙语
- "tr": 土耳其语
- "ar": 阿拉伯语
- "es": 西班牙语
- "hi": 印地语
- "fr": 法语
- "ms": 马来语
- "fil": 菲律宾语
- "de": 德语
- "it": 意大利语
- "ru": 俄语
- "sv": 瑞典语
- "da": 丹麦语
- "no": 挪威语

**注意：**
如果缺少满足您需求的语言，请联系我们技术人员。
                     * @param _language 
语音转文字支持识别的语言，默认是"zh" 中文

可通过购买「AI智能识别时长包」解锁或领取包月套餐体验版解锁不同语言. 详细说明参考：[AI智能识别计费说明](https://cloud.tencent.com/document/product/647/111976)

语音转文本不同套餐版本支持的语言如下：

**基础版**：
- "zh": 中文（简体）
- "zh-TW": 中文（繁体）
- "en": 英语
- "16k_zh_edu"：中文教育
- "16k_zh_medical"：中文医疗
- "16k_zh_court"：中文法庭

**标准版：**
- "8k_zh_large": 普方大模型引擎. 当前模型同时支持中文等语言的识别，模型参数量极大，语言模型性能增强，针对电话音频中各类场景、各类中文方言的识别准确率极大提升.
- "16k_zh_large": 普方英大模型引擎. 当前模型同时支持中文、英文、多种中文方言等语言的识别，模型参数量极大，语言模型性能增强，针对噪声大、回音大、人声小、人声远等低质量音频的识别准确率极大提升.
- "16k_multi_lang": 多语种大模型引擎. 当前模型同时支持英语、日语、韩语、阿拉伯语、菲律宾语、法语、印地语、印尼语、马来语、葡萄牙语、西班牙语、泰语、土耳其语、越南语、德语的识别，可实现15个语种的自动识别(句子/段落级别).
- "16k_zh_en": 中英大模型引擎. 当前模型同时支持中文、英语识别，模型参数量极大，语言模型性能增强，针对噪声大、回音大、人声小、人声远等低质量音频的识别准确率极大提升.

**高级版：**
- "zh-dialect": 中国方言
- "zh-yue": 中国粤语
- "vi": 越南语
- "ja": 日语
- "ko": 韩语
- "id": 印度尼西亚语
- "th": 泰语
- "pt": 葡萄牙语
- "tr": 土耳其语
- "ar": 阿拉伯语
- "es": 西班牙语
- "hi": 印地语
- "fr": 法语
- "ms": 马来语
- "fil": 菲律宾语
- "de": 德语
- "it": 意大利语
- "ru": 俄语
- "sv": 瑞典语
- "da": 丹麦语
- "no": 挪威语

**注意：**
如果缺少满足您需求的语言，请联系我们技术人员。
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
                     * 获取**发起模糊识别为高级版能力,默认按照高级版收费,仅支持填写基础版和高级版语言.**
注意：不支持填写"zh-dialect"
                     * @return AlternativeLanguage **发起模糊识别为高级版能力,默认按照高级版收费,仅支持填写基础版和高级版语言.**
注意：不支持填写"zh-dialect"
                     * 
                     */
                    std::vector<std::string> GetAlternativeLanguage() const;

                    /**
                     * 设置**发起模糊识别为高级版能力,默认按照高级版收费,仅支持填写基础版和高级版语言.**
注意：不支持填写"zh-dialect"
                     * @param _alternativeLanguage **发起模糊识别为高级版能力,默认按照高级版收费,仅支持填写基础版和高级版语言.**
注意：不支持填写"zh-dialect"
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
                     * 获取目前已不支持
                     * @return Model 目前已不支持
                     * @deprecated
                     */
                    std::string GetModel() const;

                    /**
                     * 设置目前已不支持
                     * @param _model 目前已不支持
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
                     * 获取填写则翻译，目前支持的语言：
中文: zh
英语: en
越南语: vi
日语: ja
韩语: ko
印度尼西亚语: id
泰语: th
葡萄牙语: pt
土耳其语: tr
阿拉伯语: ar
西班牙语: es
印地语: hi
法语: fr
马来语: ms
菲律宾语: fil
德语: de
意大利语: it
俄语: ru
瑞典语: sv
挪威语: no
丹麦语: da
                     * @return TranslationLanguage 填写则翻译，目前支持的语言：
中文: zh
英语: en
越南语: vi
日语: ja
韩语: ko
印度尼西亚语: id
泰语: th
葡萄牙语: pt
土耳其语: tr
阿拉伯语: ar
西班牙语: es
印地语: hi
法语: fr
马来语: ms
菲律宾语: fil
德语: de
意大利语: it
俄语: ru
瑞典语: sv
挪威语: no
丹麦语: da
                     * @deprecated
                     */
                    std::string GetTranslationLanguage() const;

                    /**
                     * 设置填写则翻译，目前支持的语言：
中文: zh
英语: en
越南语: vi
日语: ja
韩语: ko
印度尼西亚语: id
泰语: th
葡萄牙语: pt
土耳其语: tr
阿拉伯语: ar
西班牙语: es
印地语: hi
法语: fr
马来语: ms
菲律宾语: fil
德语: de
意大利语: it
俄语: ru
瑞典语: sv
挪威语: no
丹麦语: da
                     * @param _translationLanguage 填写则翻译，目前支持的语言：
中文: zh
英语: en
越南语: vi
日语: ja
韩语: ko
印度尼西亚语: id
泰语: th
葡萄牙语: pt
土耳其语: tr
阿拉伯语: ar
西班牙语: es
印地语: hi
法语: fr
马来语: ms
菲律宾语: fil
德语: de
意大利语: it
俄语: ru
瑞典语: sv
挪威语: no
丹麦语: da
                     * @deprecated
                     */
                    void SetTranslationLanguage(const std::string& _translationLanguage);

                    /**
                     * 判断参数 TranslationLanguage 是否已赋值
                     * @return TranslationLanguage 是否已赋值
                     * @deprecated
                     */
                    bool TranslationLanguageHasBeenSet() const;

                    /**
                     * 获取热词表：该参数用于提升识别准确率。 单个热词限制："热词|权重"，单个热词不超过30个字符（最多10个汉字），权重[1-11]或者100，如：“腾讯云|5” 或 “ASR|11”； 热词表限制：多个热词用英文逗号分割，最多支持300个热词，如：“腾讯云|10,语音识别|5,ASR|11”；
                     * @return HotWordList 热词表：该参数用于提升识别准确率。 单个热词限制："热词|权重"，单个热词不超过30个字符（最多10个汉字），权重[1-11]或者100，如：“腾讯云|5” 或 “ASR|11”； 热词表限制：多个热词用英文逗号分割，最多支持300个热词，如：“腾讯云|10,语音识别|5,ASR|11”；
                     * 
                     */
                    std::string GetHotWordList() const;

                    /**
                     * 设置热词表：该参数用于提升识别准确率。 单个热词限制："热词|权重"，单个热词不超过30个字符（最多10个汉字），权重[1-11]或者100，如：“腾讯云|5” 或 “ASR|11”； 热词表限制：多个热词用英文逗号分割，最多支持300个热词，如：“腾讯云|10,语音识别|5,ASR|11”；
                     * @param _hotWordList 热词表：该参数用于提升识别准确率。 单个热词限制："热词|权重"，单个热词不超过30个字符（最多10个汉字），权重[1-11]或者100，如：“腾讯云|5” 或 “ASR|11”； 热词表限制：多个热词用英文逗号分割，最多支持300个热词，如：“腾讯云|10,语音识别|5,ASR|11”；
                     * 
                     */
                    void SetHotWordList(const std::string& _hotWordList);

                    /**
                     * 判断参数 HotWordList 是否已赋值
                     * @return HotWordList 是否已赋值
                     * 
                     */
                    bool HotWordListHasBeenSet() const;

                    /**
                     * 获取语音识别vad的时间，范围为240-2000，默认为1000，单位为ms。更小的值会让语音识别分句更快。
                     * @return VadSilenceTime 语音识别vad的时间，范围为240-2000，默认为1000，单位为ms。更小的值会让语音识别分句更快。
                     * 
                     */
                    uint64_t GetVadSilenceTime() const;

                    /**
                     * 设置语音识别vad的时间，范围为240-2000，默认为1000，单位为ms。更小的值会让语音识别分句更快。
                     * @param _vadSilenceTime 语音识别vad的时间，范围为240-2000，默认为1000，单位为ms。更小的值会让语音识别分句更快。
                     * 
                     */
                    void SetVadSilenceTime(const uint64_t& _vadSilenceTime);

                    /**
                     * 判断参数 VadSilenceTime 是否已赋值
                     * @return VadSilenceTime 是否已赋值
                     * 
                     */
                    bool VadSilenceTimeHasBeenSet() const;

                private:

                    /**
                     * 
语音转文字支持识别的语言，默认是"zh" 中文

可通过购买「AI智能识别时长包」解锁或领取包月套餐体验版解锁不同语言. 详细说明参考：[AI智能识别计费说明](https://cloud.tencent.com/document/product/647/111976)

语音转文本不同套餐版本支持的语言如下：

**基础版**：
- "zh": 中文（简体）
- "zh-TW": 中文（繁体）
- "en": 英语
- "16k_zh_edu"：中文教育
- "16k_zh_medical"：中文医疗
- "16k_zh_court"：中文法庭

**标准版：**
- "8k_zh_large": 普方大模型引擎. 当前模型同时支持中文等语言的识别，模型参数量极大，语言模型性能增强，针对电话音频中各类场景、各类中文方言的识别准确率极大提升.
- "16k_zh_large": 普方英大模型引擎. 当前模型同时支持中文、英文、多种中文方言等语言的识别，模型参数量极大，语言模型性能增强，针对噪声大、回音大、人声小、人声远等低质量音频的识别准确率极大提升.
- "16k_multi_lang": 多语种大模型引擎. 当前模型同时支持英语、日语、韩语、阿拉伯语、菲律宾语、法语、印地语、印尼语、马来语、葡萄牙语、西班牙语、泰语、土耳其语、越南语、德语的识别，可实现15个语种的自动识别(句子/段落级别).
- "16k_zh_en": 中英大模型引擎. 当前模型同时支持中文、英语识别，模型参数量极大，语言模型性能增强，针对噪声大、回音大、人声小、人声远等低质量音频的识别准确率极大提升.

**高级版：**
- "zh-dialect": 中国方言
- "zh-yue": 中国粤语
- "vi": 越南语
- "ja": 日语
- "ko": 韩语
- "id": 印度尼西亚语
- "th": 泰语
- "pt": 葡萄牙语
- "tr": 土耳其语
- "ar": 阿拉伯语
- "es": 西班牙语
- "hi": 印地语
- "fr": 法语
- "ms": 马来语
- "fil": 菲律宾语
- "de": 德语
- "it": 意大利语
- "ru": 俄语
- "sv": 瑞典语
- "da": 丹麦语
- "no": 挪威语

**注意：**
如果缺少满足您需求的语言，请联系我们技术人员。
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * **发起模糊识别为高级版能力,默认按照高级版收费,仅支持填写基础版和高级版语言.**
注意：不支持填写"zh-dialect"
                     */
                    std::vector<std::string> m_alternativeLanguage;
                    bool m_alternativeLanguageHasBeenSet;

                    /**
                     * 目前已不支持
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 填写则翻译，目前支持的语言：
中文: zh
英语: en
越南语: vi
日语: ja
韩语: ko
印度尼西亚语: id
泰语: th
葡萄牙语: pt
土耳其语: tr
阿拉伯语: ar
西班牙语: es
印地语: hi
法语: fr
马来语: ms
菲律宾语: fil
德语: de
意大利语: it
俄语: ru
瑞典语: sv
挪威语: no
丹麦语: da
                     */
                    std::string m_translationLanguage;
                    bool m_translationLanguageHasBeenSet;

                    /**
                     * 热词表：该参数用于提升识别准确率。 单个热词限制："热词|权重"，单个热词不超过30个字符（最多10个汉字），权重[1-11]或者100，如：“腾讯云|5” 或 “ASR|11”； 热词表限制：多个热词用英文逗号分割，最多支持300个热词，如：“腾讯云|10,语音识别|5,ASR|11”；
                     */
                    std::string m_hotWordList;
                    bool m_hotWordListHasBeenSet;

                    /**
                     * 语音识别vad的时间，范围为240-2000，默认为1000，单位为ms。更小的值会让语音识别分句更快。
                     */
                    uint64_t m_vadSilenceTime;
                    bool m_vadSilenceTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_RECOGNIZECONFIG_H_

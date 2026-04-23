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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_ASRPARAM_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_ASRPARAM_H_

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
                * 语音识别使用的参数
                */
                class AsrParam : public AbstractModel
                {
                public:
                    AsrParam();
                    ~AsrParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转录服务使用的模型类型。示例值"16k_zh_en"。语音转文本不同套餐版本支持的语言如下：

基础语言引擎：
- "zh": 8k 采样率中文识别模型，主要用于电话音频。

标准语言引擎：
- "8k_zh_large": 8k 中文大模型引擎，针对电话音频支持较好。
- "16k_zh_large": 16k 大模型引擎，同时支持中文、英文、多种中文方言口音等语言的识别。
- "16k_zh_en": 最新 16k 中英大模型引擎，同时支持中文、英语、多种中文方言口音的识别，对中英混说场景识别更优。

高级语言引擎：
- "zh-yue": 中文粤语
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

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
                     * @return Lang 转录服务使用的模型类型。示例值"16k_zh_en"。语音转文本不同套餐版本支持的语言如下：

基础语言引擎：
- "zh": 8k 采样率中文识别模型，主要用于电话音频。

标准语言引擎：
- "8k_zh_large": 8k 中文大模型引擎，针对电话音频支持较好。
- "16k_zh_large": 16k 大模型引擎，同时支持中文、英文、多种中文方言口音等语言的识别。
- "16k_zh_en": 最新 16k 中英大模型引擎，同时支持中文、英语、多种中文方言口音的识别，对中英混说场景识别更优。

高级语言引擎：
- "zh-yue": 中文粤语
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

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
                     * 
                     */
                    std::string GetLang() const;

                    /**
                     * 设置转录服务使用的模型类型。示例值"16k_zh_en"。语音转文本不同套餐版本支持的语言如下：

基础语言引擎：
- "zh": 8k 采样率中文识别模型，主要用于电话音频。

标准语言引擎：
- "8k_zh_large": 8k 中文大模型引擎，针对电话音频支持较好。
- "16k_zh_large": 16k 大模型引擎，同时支持中文、英文、多种中文方言口音等语言的识别。
- "16k_zh_en": 最新 16k 中英大模型引擎，同时支持中文、英语、多种中文方言口音的识别，对中英混说场景识别更优。

高级语言引擎：
- "zh-yue": 中文粤语
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

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
                     * @param _lang 转录服务使用的模型类型。示例值"16k_zh_en"。语音转文本不同套餐版本支持的语言如下：

基础语言引擎：
- "zh": 8k 采样率中文识别模型，主要用于电话音频。

标准语言引擎：
- "8k_zh_large": 8k 中文大模型引擎，针对电话音频支持较好。
- "16k_zh_large": 16k 大模型引擎，同时支持中文、英文、多种中文方言口音等语言的识别。
- "16k_zh_en": 最新 16k 中英大模型引擎，同时支持中文、英语、多种中文方言口音的识别，对中英混说场景识别更优。

高级语言引擎：
- "zh-yue": 中文粤语
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

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
                     * 
                     */
                    void SetLang(const std::string& _lang);

                    /**
                     * 判断参数 Lang 是否已赋值
                     * @return Lang 是否已赋值
                     * 
                     */
                    bool LangHasBeenSet() const;

                    /**
                     * 获取语音识别vad的时间，范围为240-2000，默认为1000，单位为ms。更小的值会让语音识别分句更快。
示例值：1000
                     * @return VadSilenceTime 语音识别vad的时间，范围为240-2000，默认为1000，单位为ms。更小的值会让语音识别分句更快。
示例值：1000
                     * 
                     */
                    uint64_t GetVadSilenceTime() const;

                    /**
                     * 设置语音识别vad的时间，范围为240-2000，默认为1000，单位为ms。更小的值会让语音识别分句更快。
示例值：1000
                     * @param _vadSilenceTime 语音识别vad的时间，范围为240-2000，默认为1000，单位为ms。更小的值会让语音识别分句更快。
示例值：1000
                     * 
                     */
                    void SetVadSilenceTime(const uint64_t& _vadSilenceTime);

                    /**
                     * 判断参数 VadSilenceTime 是否已赋值
                     * @return VadSilenceTime 是否已赋值
                     * 
                     */
                    bool VadSilenceTimeHasBeenSet() const;

                    /**
                     * 获取临时热词表：该参数用于提升识别准确率。
- 单个热词限制："热词|权重"，单个热词不超过30个字符（最多10个汉字），权重[1-11]或者100，如："腾讯云|5" 或 "ASR|11"。
- 临时热词表限制：多个热词用英文逗号分割，最多支持128个热词，如："腾讯云|10,语音识别|5,ASR|11"。
注意：
热词权重设置为11时，当前热词将升级为超级热词，建议仅将重要且必须生效的热词设置到11，设置过多权重为11的热词将影响整体字准率。
热词权重设置为100时，当前热词开启热词增强同音同调替换功能，举例：热词配置"蜜制|100"时，与"蜜制"同拼音（mizhi）的"秘制"的识别结果会被强制替换成"蜜制"。因此建议客户根据自己的实际情况开启该功能。建议仅将重要且必须生效的热词设置到100，设置过多权重为100的热词将影响整体字准率。
热词不能包含空格，如：ASR 腾讯云
示例值：语音助理|10
                     * @return HotWordList 临时热词表：该参数用于提升识别准确率。
- 单个热词限制："热词|权重"，单个热词不超过30个字符（最多10个汉字），权重[1-11]或者100，如："腾讯云|5" 或 "ASR|11"。
- 临时热词表限制：多个热词用英文逗号分割，最多支持128个热词，如："腾讯云|10,语音识别|5,ASR|11"。
注意：
热词权重设置为11时，当前热词将升级为超级热词，建议仅将重要且必须生效的热词设置到11，设置过多权重为11的热词将影响整体字准率。
热词权重设置为100时，当前热词开启热词增强同音同调替换功能，举例：热词配置"蜜制|100"时，与"蜜制"同拼音（mizhi）的"秘制"的识别结果会被强制替换成"蜜制"。因此建议客户根据自己的实际情况开启该功能。建议仅将重要且必须生效的热词设置到100，设置过多权重为100的热词将影响整体字准率。
热词不能包含空格，如：ASR 腾讯云
示例值：语音助理|10
                     * 
                     */
                    std::string GetHotWordList() const;

                    /**
                     * 设置临时热词表：该参数用于提升识别准确率。
- 单个热词限制："热词|权重"，单个热词不超过30个字符（最多10个汉字），权重[1-11]或者100，如："腾讯云|5" 或 "ASR|11"。
- 临时热词表限制：多个热词用英文逗号分割，最多支持128个热词，如："腾讯云|10,语音识别|5,ASR|11"。
注意：
热词权重设置为11时，当前热词将升级为超级热词，建议仅将重要且必须生效的热词设置到11，设置过多权重为11的热词将影响整体字准率。
热词权重设置为100时，当前热词开启热词增强同音同调替换功能，举例：热词配置"蜜制|100"时，与"蜜制"同拼音（mizhi）的"秘制"的识别结果会被强制替换成"蜜制"。因此建议客户根据自己的实际情况开启该功能。建议仅将重要且必须生效的热词设置到100，设置过多权重为100的热词将影响整体字准率。
热词不能包含空格，如：ASR 腾讯云
示例值：语音助理|10
                     * @param _hotWordList 临时热词表：该参数用于提升识别准确率。
- 单个热词限制："热词|权重"，单个热词不超过30个字符（最多10个汉字），权重[1-11]或者100，如："腾讯云|5" 或 "ASR|11"。
- 临时热词表限制：多个热词用英文逗号分割，最多支持128个热词，如："腾讯云|10,语音识别|5,ASR|11"。
注意：
热词权重设置为11时，当前热词将升级为超级热词，建议仅将重要且必须生效的热词设置到11，设置过多权重为11的热词将影响整体字准率。
热词权重设置为100时，当前热词开启热词增强同音同调替换功能，举例：热词配置"蜜制|100"时，与"蜜制"同拼音（mizhi）的"秘制"的识别结果会被强制替换成"蜜制"。因此建议客户根据自己的实际情况开启该功能。建议仅将重要且必须生效的热词设置到100，设置过多权重为100的热词将影响整体字准率。
热词不能包含空格，如：ASR 腾讯云
示例值：语音助理|10
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
                     * 获取发起模糊识别为高级版能力,默认按照高级版收费,仅支持填写除"zh-dialect"和"zh-yue"以外的高级版语言。注意：最多只能填写4种语言。

                     * @return AlternativeLanguage 发起模糊识别为高级版能力,默认按照高级版收费,仅支持填写除"zh-dialect"和"zh-yue"以外的高级版语言。注意：最多只能填写4种语言。

                     * 
                     */
                    std::vector<std::string> GetAlternativeLanguage() const;

                    /**
                     * 设置发起模糊识别为高级版能力,默认按照高级版收费,仅支持填写除"zh-dialect"和"zh-yue"以外的高级版语言。注意：最多只能填写4种语言。

                     * @param _alternativeLanguage 发起模糊识别为高级版能力,默认按照高级版收费,仅支持填写除"zh-dialect"和"zh-yue"以外的高级版语言。注意：最多只能填写4种语言。

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
                     * 获取vad的远场人声抑制能力（不会对asr识别效果造成影响），范围为[0, 3]，默认为0。推荐设置为2，有较好的远场人声抑制能力。
                     * @return VadLevel vad的远场人声抑制能力（不会对asr识别效果造成影响），范围为[0, 3]，默认为0。推荐设置为2，有较好的远场人声抑制能力。
                     * 
                     */
                    uint64_t GetVadLevel() const;

                    /**
                     * 设置vad的远场人声抑制能力（不会对asr识别效果造成影响），范围为[0, 3]，默认为0。推荐设置为2，有较好的远场人声抑制能力。
                     * @param _vadLevel vad的远场人声抑制能力（不会对asr识别效果造成影响），范围为[0, 3]，默认为0。推荐设置为2，有较好的远场人声抑制能力。
                     * 
                     */
                    void SetVadLevel(const uint64_t& _vadLevel);

                    /**
                     * 判断参数 VadLevel 是否已赋值
                     * @return VadLevel 是否已赋值
                     * 
                     */
                    bool VadLevelHasBeenSet() const;

                    /**
                     * 获取是否过滤脏词（目前仅支持填写基础语言引擎和标准语言引擎），范围为[0, 2]，默认值为 0。
0：不过滤脏词；1：过滤脏词；2：将脏词替换为 " * "。
                     * @return FilterDirty 是否过滤脏词（目前仅支持填写基础语言引擎和标准语言引擎），范围为[0, 2]，默认值为 0。
0：不过滤脏词；1：过滤脏词；2：将脏词替换为 " * "。
                     * 
                     */
                    uint64_t GetFilterDirty() const;

                    /**
                     * 设置是否过滤脏词（目前仅支持填写基础语言引擎和标准语言引擎），范围为[0, 2]，默认值为 0。
0：不过滤脏词；1：过滤脏词；2：将脏词替换为 " * "。
                     * @param _filterDirty 是否过滤脏词（目前仅支持填写基础语言引擎和标准语言引擎），范围为[0, 2]，默认值为 0。
0：不过滤脏词；1：过滤脏词；2：将脏词替换为 " * "。
                     * 
                     */
                    void SetFilterDirty(const uint64_t& _filterDirty);

                    /**
                     * 判断参数 FilterDirty 是否已赋值
                     * @return FilterDirty 是否已赋值
                     * 
                     */
                    bool FilterDirtyHasBeenSet() const;

                    /**
                     * 获取是否过滤语气词（目前仅支持填写基础语言引擎和标准语言引擎），范围为[0, 2]，默认值为 0。
0：不过滤语气词；1：部分过滤；2：严格过滤。
                     * @return FilterModal 是否过滤语气词（目前仅支持填写基础语言引擎和标准语言引擎），范围为[0, 2]，默认值为 0。
0：不过滤语气词；1：部分过滤；2：严格过滤。
                     * 
                     */
                    uint64_t GetFilterModal() const;

                    /**
                     * 设置是否过滤语气词（目前仅支持填写基础语言引擎和标准语言引擎），范围为[0, 2]，默认值为 0。
0：不过滤语气词；1：部分过滤；2：严格过滤。
                     * @param _filterModal 是否过滤语气词（目前仅支持填写基础语言引擎和标准语言引擎），范围为[0, 2]，默认值为 0。
0：不过滤语气词；1：部分过滤；2：严格过滤。
                     * 
                     */
                    void SetFilterModal(const uint64_t& _filterModal);

                    /**
                     * 判断参数 FilterModal 是否已赋值
                     * @return FilterModal 是否已赋值
                     * 
                     */
                    bool FilterModalHasBeenSet() const;

                    /**
                     * 获取是否过滤句末的句号（目前仅支持填写基础语言引擎和标准语言引擎），范围为[0, 1]，默认值为 0。
0：不过滤句末的句号；1：过滤句末的句号。
                     * @return FilterPunc 是否过滤句末的句号（目前仅支持填写基础语言引擎和标准语言引擎），范围为[0, 1]，默认值为 0。
0：不过滤句末的句号；1：过滤句末的句号。
                     * 
                     */
                    uint64_t GetFilterPunc() const;

                    /**
                     * 设置是否过滤句末的句号（目前仅支持填写基础语言引擎和标准语言引擎），范围为[0, 1]，默认值为 0。
0：不过滤句末的句号；1：过滤句末的句号。
                     * @param _filterPunc 是否过滤句末的句号（目前仅支持填写基础语言引擎和标准语言引擎），范围为[0, 1]，默认值为 0。
0：不过滤句末的句号；1：过滤句末的句号。
                     * 
                     */
                    void SetFilterPunc(const uint64_t& _filterPunc);

                    /**
                     * 判断参数 FilterPunc 是否已赋值
                     * @return FilterPunc 是否已赋值
                     * 
                     */
                    bool FilterPuncHasBeenSet() const;

                private:

                    /**
                     * 转录服务使用的模型类型。示例值"16k_zh_en"。语音转文本不同套餐版本支持的语言如下：

基础语言引擎：
- "zh": 8k 采样率中文识别模型，主要用于电话音频。

标准语言引擎：
- "8k_zh_large": 8k 中文大模型引擎，针对电话音频支持较好。
- "16k_zh_large": 16k 大模型引擎，同时支持中文、英文、多种中文方言口音等语言的识别。
- "16k_zh_en": 最新 16k 中英大模型引擎，同时支持中文、英语、多种中文方言口音的识别，对中英混说场景识别更优。

高级语言引擎：
- "zh-yue": 中文粤语
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

注意：
如果缺少满足您需求的语言，请联系我们技术人员。
                     */
                    std::string m_lang;
                    bool m_langHasBeenSet;

                    /**
                     * 语音识别vad的时间，范围为240-2000，默认为1000，单位为ms。更小的值会让语音识别分句更快。
示例值：1000
                     */
                    uint64_t m_vadSilenceTime;
                    bool m_vadSilenceTimeHasBeenSet;

                    /**
                     * 临时热词表：该参数用于提升识别准确率。
- 单个热词限制："热词|权重"，单个热词不超过30个字符（最多10个汉字），权重[1-11]或者100，如："腾讯云|5" 或 "ASR|11"。
- 临时热词表限制：多个热词用英文逗号分割，最多支持128个热词，如："腾讯云|10,语音识别|5,ASR|11"。
注意：
热词权重设置为11时，当前热词将升级为超级热词，建议仅将重要且必须生效的热词设置到11，设置过多权重为11的热词将影响整体字准率。
热词权重设置为100时，当前热词开启热词增强同音同调替换功能，举例：热词配置"蜜制|100"时，与"蜜制"同拼音（mizhi）的"秘制"的识别结果会被强制替换成"蜜制"。因此建议客户根据自己的实际情况开启该功能。建议仅将重要且必须生效的热词设置到100，设置过多权重为100的热词将影响整体字准率。
热词不能包含空格，如：ASR 腾讯云
示例值：语音助理|10
                     */
                    std::string m_hotWordList;
                    bool m_hotWordListHasBeenSet;

                    /**
                     * 发起模糊识别为高级版能力,默认按照高级版收费,仅支持填写除"zh-dialect"和"zh-yue"以外的高级版语言。注意：最多只能填写4种语言。

                     */
                    std::vector<std::string> m_alternativeLanguage;
                    bool m_alternativeLanguageHasBeenSet;

                    /**
                     * vad的远场人声抑制能力（不会对asr识别效果造成影响），范围为[0, 3]，默认为0。推荐设置为2，有较好的远场人声抑制能力。
                     */
                    uint64_t m_vadLevel;
                    bool m_vadLevelHasBeenSet;

                    /**
                     * 是否过滤脏词（目前仅支持填写基础语言引擎和标准语言引擎），范围为[0, 2]，默认值为 0。
0：不过滤脏词；1：过滤脏词；2：将脏词替换为 " * "。
                     */
                    uint64_t m_filterDirty;
                    bool m_filterDirtyHasBeenSet;

                    /**
                     * 是否过滤语气词（目前仅支持填写基础语言引擎和标准语言引擎），范围为[0, 2]，默认值为 0。
0：不过滤语气词；1：部分过滤；2：严格过滤。
                     */
                    uint64_t m_filterModal;
                    bool m_filterModalHasBeenSet;

                    /**
                     * 是否过滤句末的句号（目前仅支持填写基础语言引擎和标准语言引擎），范围为[0, 1]，默认值为 0。
0：不过滤句末的句号；1：过滤句末的句号。
                     */
                    uint64_t m_filterPunc;
                    bool m_filterPuncHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_ASRPARAM_H_

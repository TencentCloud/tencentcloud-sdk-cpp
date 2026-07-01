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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TEXTTOSPEECHSSEREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TEXTTOSPEECHSSEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/Voice.h>
#include <tencentcloud/trtc/v20190722/model/AudioFormat.h>
#include <tencentcloud/trtc/v20190722/model/PronunciationDict.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * TextToSpeechSSE请求参数结构体
                */
                class TextToSpeechSSERequest : public AbstractModel
                {
                public:
                    TextToSpeechSSERequest();
                    ~TextToSpeechSSERequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>需要转语音的文字内容，最大支持20000字符</p>
                     * @return Text <p>需要转语音的文字内容，最大支持20000字符</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>需要转语音的文字内容，最大支持20000字符</p>
                     * @param _text <p>需要转语音的文字内容，最大支持20000字符</p>
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取<p>文本转语音的声音配置</p>
                     * @return Voice <p>文本转语音的声音配置</p>
                     * 
                     */
                    Voice GetVoice() const;

                    /**
                     * 设置<p>文本转语音的声音配置</p>
                     * @param _voice <p>文本转语音的声音配置</p>
                     * 
                     */
                    void SetVoice(const Voice& _voice);

                    /**
                     * 判断参数 Voice 是否已赋值
                     * @return Voice 是否已赋值
                     * 
                     */
                    bool VoiceHasBeenSet() const;

                    /**
                     * 获取<p>TRTC的SdkAppId</p>
                     * @return SdkAppId <p>TRTC的SdkAppId</p>
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置<p>TRTC的SdkAppId</p>
                     * @param _sdkAppId <p>TRTC的SdkAppId</p>
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取<p>文本转语音的输出音频的格式</p>
                     * @return AudioFormat <p>文本转语音的输出音频的格式</p>
                     * 
                     */
                    AudioFormat GetAudioFormat() const;

                    /**
                     * 设置<p>文本转语音的输出音频的格式</p>
                     * @param _audioFormat <p>文本转语音的输出音频的格式</p>
                     * 
                     */
                    void SetAudioFormat(const AudioFormat& _audioFormat);

                    /**
                     * 判断参数 AudioFormat 是否已赋值
                     * @return AudioFormat 是否已赋值
                     * 
                     */
                    bool AudioFormatHasBeenSet() const;

                    /**
                     * 获取<p>TTS的API密钥</p>
                     * @return APIKey <p>TTS的API密钥</p>
                     * @deprecated
                     */
                    std::string GetAPIKey() const;

                    /**
                     * 设置<p>TTS的API密钥</p>
                     * @param _aPIKey <p>TTS的API密钥</p>
                     * @deprecated
                     */
                    void SetAPIKey(const std::string& _aPIKey);

                    /**
                     * 判断参数 APIKey 是否已赋值
                     * @return APIKey 是否已赋值
                     * @deprecated
                     */
                    bool APIKeyHasBeenSet() const;

                    /**
                     * 获取<p>TTS的模型，支持flow_02_turbo，flow_01_ex，默认为flow_02_turbo</p><p>枚举值：</p><ul><li>flow_02_turbo： 高性价比模型，兼顾效果和成本</li><li>flow_01_ex： 高天花板模型，能力全面，在音色克隆上表现更优</li></ul>
                     * @return Model <p>TTS的模型，支持flow_02_turbo，flow_01_ex，默认为flow_02_turbo</p><p>枚举值：</p><ul><li>flow_02_turbo： 高性价比模型，兼顾效果和成本</li><li>flow_01_ex： 高天花板模型，能力全面，在音色克隆上表现更优</li></ul>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>TTS的模型，支持flow_02_turbo，flow_01_ex，默认为flow_02_turbo</p><p>枚举值：</p><ul><li>flow_02_turbo： 高性价比模型，兼顾效果和成本</li><li>flow_01_ex： 高天花板模型，能力全面，在音色克隆上表现更优</li></ul>
                     * @param _model <p>TTS的模型，支持flow_02_turbo，flow_01_ex，默认为flow_02_turbo</p><p>枚举值：</p><ul><li>flow_02_turbo： 高性价比模型，兼顾效果和成本</li><li>flow_01_ex： 高天花板模型，能力全面，在音色克隆上表现更优</li></ul>
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
                     * 获取<p>需要合成的语言，默认为空，表示自动识别</p><p>flow_02_turbo支持以下语言：</p><ul><li>zh：中文</li><li>en：英文</li><li>ja：日语</li><li>ko：韩语</li><li>yue：粤语</li><li>ms：马来语</li><li>ar：阿拉伯语</li><li>id：印尼语</li><li>th：泰语</li><li>vi：越南语</li></ul><p>flow_01_ex支持以下语言：</p><ul><li>zh：中文（简体） (Chinese Simplified)</li><li>zh-tw：中文（繁体） (Chinese Traditional)</li><li>en：英语 (English)</li><li>ja：日语 (Japanese)</li><li>ko：韩语 (Korean)</li><li>ms：马来语 (Malay)</li><li>yue：粤语 (Cantonese)</li><li>ar：阿拉伯语 (Arabic)</li><li>ru：俄语 (Russian)</li><li>es：西班牙语 (Spanish)</li><li>fr：法语 (French)</li><li>pt：葡萄牙语 (Portuguese)</li><li>de：德语 (German)</li><li>tr：土耳其语 (Turkish)</li><li>nl：荷兰语 (Dutch)</li><li>uk：乌克兰语 (Ukrainian)</li><li>vi：越南语 (Vietnamese)</li><li>id：印尼语 (Indonesian)</li><li>it：意大利语 (Italian)</li><li>th：泰语 (Thai)</li><li>pl：波兰语 (Polish)</li><li>ro：罗马尼亚语 (Romanian)</li><li>el：希腊语 (Greek)</li><li>cs：捷克语 (Czech)</li><li>fi：芬兰语 (Finnish)</li><li>hi：印地语 (Hindi)</li><li>bg：保加利亚语 (Bulgarian)</li><li>da：丹麦语 (Danish)</li><li>he：希伯来语 (Hebrew)</li><li>fa：波斯语（法尔西语） (Persian)</li><li>sk：斯洛伐克语 (Slovak)</li><li>sv：瑞典语 (Swedish)</li><li>hr：克罗地亚语 (Croatian)</li><li>tl：菲律宾语（他加禄语） (Filipino)</li><li>hu：匈牙利语 (Hungarian)</li><li>no：挪威语 (Norwegian)</li><li>sl：斯洛文尼亚语 (Slovenian)</li><li>ca：加泰罗尼亚语 (Catalan)</li><li>nn：新挪威语 (Nynorsk)</li><li>ta：泰米尔语 (Tamil)</li><li>af：南非荷兰语 (Afrikaans)</li></ul>
                     * @return Language <p>需要合成的语言，默认为空，表示自动识别</p><p>flow_02_turbo支持以下语言：</p><ul><li>zh：中文</li><li>en：英文</li><li>ja：日语</li><li>ko：韩语</li><li>yue：粤语</li><li>ms：马来语</li><li>ar：阿拉伯语</li><li>id：印尼语</li><li>th：泰语</li><li>vi：越南语</li></ul><p>flow_01_ex支持以下语言：</p><ul><li>zh：中文（简体） (Chinese Simplified)</li><li>zh-tw：中文（繁体） (Chinese Traditional)</li><li>en：英语 (English)</li><li>ja：日语 (Japanese)</li><li>ko：韩语 (Korean)</li><li>ms：马来语 (Malay)</li><li>yue：粤语 (Cantonese)</li><li>ar：阿拉伯语 (Arabic)</li><li>ru：俄语 (Russian)</li><li>es：西班牙语 (Spanish)</li><li>fr：法语 (French)</li><li>pt：葡萄牙语 (Portuguese)</li><li>de：德语 (German)</li><li>tr：土耳其语 (Turkish)</li><li>nl：荷兰语 (Dutch)</li><li>uk：乌克兰语 (Ukrainian)</li><li>vi：越南语 (Vietnamese)</li><li>id：印尼语 (Indonesian)</li><li>it：意大利语 (Italian)</li><li>th：泰语 (Thai)</li><li>pl：波兰语 (Polish)</li><li>ro：罗马尼亚语 (Romanian)</li><li>el：希腊语 (Greek)</li><li>cs：捷克语 (Czech)</li><li>fi：芬兰语 (Finnish)</li><li>hi：印地语 (Hindi)</li><li>bg：保加利亚语 (Bulgarian)</li><li>da：丹麦语 (Danish)</li><li>he：希伯来语 (Hebrew)</li><li>fa：波斯语（法尔西语） (Persian)</li><li>sk：斯洛伐克语 (Slovak)</li><li>sv：瑞典语 (Swedish)</li><li>hr：克罗地亚语 (Croatian)</li><li>tl：菲律宾语（他加禄语） (Filipino)</li><li>hu：匈牙利语 (Hungarian)</li><li>no：挪威语 (Norwegian)</li><li>sl：斯洛文尼亚语 (Slovenian)</li><li>ca：加泰罗尼亚语 (Catalan)</li><li>nn：新挪威语 (Nynorsk)</li><li>ta：泰米尔语 (Tamil)</li><li>af：南非荷兰语 (Afrikaans)</li></ul>
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置<p>需要合成的语言，默认为空，表示自动识别</p><p>flow_02_turbo支持以下语言：</p><ul><li>zh：中文</li><li>en：英文</li><li>ja：日语</li><li>ko：韩语</li><li>yue：粤语</li><li>ms：马来语</li><li>ar：阿拉伯语</li><li>id：印尼语</li><li>th：泰语</li><li>vi：越南语</li></ul><p>flow_01_ex支持以下语言：</p><ul><li>zh：中文（简体） (Chinese Simplified)</li><li>zh-tw：中文（繁体） (Chinese Traditional)</li><li>en：英语 (English)</li><li>ja：日语 (Japanese)</li><li>ko：韩语 (Korean)</li><li>ms：马来语 (Malay)</li><li>yue：粤语 (Cantonese)</li><li>ar：阿拉伯语 (Arabic)</li><li>ru：俄语 (Russian)</li><li>es：西班牙语 (Spanish)</li><li>fr：法语 (French)</li><li>pt：葡萄牙语 (Portuguese)</li><li>de：德语 (German)</li><li>tr：土耳其语 (Turkish)</li><li>nl：荷兰语 (Dutch)</li><li>uk：乌克兰语 (Ukrainian)</li><li>vi：越南语 (Vietnamese)</li><li>id：印尼语 (Indonesian)</li><li>it：意大利语 (Italian)</li><li>th：泰语 (Thai)</li><li>pl：波兰语 (Polish)</li><li>ro：罗马尼亚语 (Romanian)</li><li>el：希腊语 (Greek)</li><li>cs：捷克语 (Czech)</li><li>fi：芬兰语 (Finnish)</li><li>hi：印地语 (Hindi)</li><li>bg：保加利亚语 (Bulgarian)</li><li>da：丹麦语 (Danish)</li><li>he：希伯来语 (Hebrew)</li><li>fa：波斯语（法尔西语） (Persian)</li><li>sk：斯洛伐克语 (Slovak)</li><li>sv：瑞典语 (Swedish)</li><li>hr：克罗地亚语 (Croatian)</li><li>tl：菲律宾语（他加禄语） (Filipino)</li><li>hu：匈牙利语 (Hungarian)</li><li>no：挪威语 (Norwegian)</li><li>sl：斯洛文尼亚语 (Slovenian)</li><li>ca：加泰罗尼亚语 (Catalan)</li><li>nn：新挪威语 (Nynorsk)</li><li>ta：泰米尔语 (Tamil)</li><li>af：南非荷兰语 (Afrikaans)</li></ul>
                     * @param _language <p>需要合成的语言，默认为空，表示自动识别</p><p>flow_02_turbo支持以下语言：</p><ul><li>zh：中文</li><li>en：英文</li><li>ja：日语</li><li>ko：韩语</li><li>yue：粤语</li><li>ms：马来语</li><li>ar：阿拉伯语</li><li>id：印尼语</li><li>th：泰语</li><li>vi：越南语</li></ul><p>flow_01_ex支持以下语言：</p><ul><li>zh：中文（简体） (Chinese Simplified)</li><li>zh-tw：中文（繁体） (Chinese Traditional)</li><li>en：英语 (English)</li><li>ja：日语 (Japanese)</li><li>ko：韩语 (Korean)</li><li>ms：马来语 (Malay)</li><li>yue：粤语 (Cantonese)</li><li>ar：阿拉伯语 (Arabic)</li><li>ru：俄语 (Russian)</li><li>es：西班牙语 (Spanish)</li><li>fr：法语 (French)</li><li>pt：葡萄牙语 (Portuguese)</li><li>de：德语 (German)</li><li>tr：土耳其语 (Turkish)</li><li>nl：荷兰语 (Dutch)</li><li>uk：乌克兰语 (Ukrainian)</li><li>vi：越南语 (Vietnamese)</li><li>id：印尼语 (Indonesian)</li><li>it：意大利语 (Italian)</li><li>th：泰语 (Thai)</li><li>pl：波兰语 (Polish)</li><li>ro：罗马尼亚语 (Romanian)</li><li>el：希腊语 (Greek)</li><li>cs：捷克语 (Czech)</li><li>fi：芬兰语 (Finnish)</li><li>hi：印地语 (Hindi)</li><li>bg：保加利亚语 (Bulgarian)</li><li>da：丹麦语 (Danish)</li><li>he：希伯来语 (Hebrew)</li><li>fa：波斯语（法尔西语） (Persian)</li><li>sk：斯洛伐克语 (Slovak)</li><li>sv：瑞典语 (Swedish)</li><li>hr：克罗地亚语 (Croatian)</li><li>tl：菲律宾语（他加禄语） (Filipino)</li><li>hu：匈牙利语 (Hungarian)</li><li>no：挪威语 (Norwegian)</li><li>sl：斯洛文尼亚语 (Slovenian)</li><li>ca：加泰罗尼亚语 (Catalan)</li><li>nn：新挪威语 (Nynorsk)</li><li>ta：泰米尔语 (Tamil)</li><li>af：南非荷兰语 (Afrikaans)</li></ul>
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
                     * 获取<p>多音字/生僻字发音纠正词典条目。指定特定词语在本次请求中使用的发音。</p>
                     * @return PronunciationDict <p>多音字/生僻字发音纠正词典条目。指定特定词语在本次请求中使用的发音。</p>
                     * 
                     */
                    std::vector<PronunciationDict> GetPronunciationDict() const;

                    /**
                     * 设置<p>多音字/生僻字发音纠正词典条目。指定特定词语在本次请求中使用的发音。</p>
                     * @param _pronunciationDict <p>多音字/生僻字发音纠正词典条目。指定特定词语在本次请求中使用的发音。</p>
                     * 
                     */
                    void SetPronunciationDict(const std::vector<PronunciationDict>& _pronunciationDict);

                    /**
                     * 判断参数 PronunciationDict 是否已赋值
                     * @return PronunciationDict 是否已赋值
                     * 
                     */
                    bool PronunciationDictHasBeenSet() const;

                    /**
                     * 获取<p>字幕级别</p><p>枚举值：</p><ul><li>0： 无字幕</li><li>1： 句子级别字幕</li><li>2： 词级别字幕，目前只有flow_01_ex支持</li></ul><p>默认值：0</p>
                     * @return AlignmentMode <p>字幕级别</p><p>枚举值：</p><ul><li>0： 无字幕</li><li>1： 句子级别字幕</li><li>2： 词级别字幕，目前只有flow_01_ex支持</li></ul><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetAlignmentMode() const;

                    /**
                     * 设置<p>字幕级别</p><p>枚举值：</p><ul><li>0： 无字幕</li><li>1： 句子级别字幕</li><li>2： 词级别字幕，目前只有flow_01_ex支持</li></ul><p>默认值：0</p>
                     * @param _alignmentMode <p>字幕级别</p><p>枚举值：</p><ul><li>0： 无字幕</li><li>1： 句子级别字幕</li><li>2： 词级别字幕，目前只有flow_01_ex支持</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetAlignmentMode(const uint64_t& _alignmentMode);

                    /**
                     * 判断参数 AlignmentMode 是否已赋值
                     * @return AlignmentMode 是否已赋值
                     * 
                     */
                    bool AlignmentModeHasBeenSet() const;

                    /**
                     * 获取<p>json字符串，用于拓展用法</p>
                     * @return ExtraParams <p>json字符串，用于拓展用法</p>
                     * 
                     */
                    std::string GetExtraParams() const;

                    /**
                     * 设置<p>json字符串，用于拓展用法</p>
                     * @param _extraParams <p>json字符串，用于拓展用法</p>
                     * 
                     */
                    void SetExtraParams(const std::string& _extraParams);

                    /**
                     * 判断参数 ExtraParams 是否已赋值
                     * @return ExtraParams 是否已赋值
                     * 
                     */
                    bool ExtraParamsHasBeenSet() const;

                private:

                    /**
                     * <p>需要转语音的文字内容，最大支持20000字符</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>文本转语音的声音配置</p>
                     */
                    Voice m_voice;
                    bool m_voiceHasBeenSet;

                    /**
                     * <p>TRTC的SdkAppId</p>
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>文本转语音的输出音频的格式</p>
                     */
                    AudioFormat m_audioFormat;
                    bool m_audioFormatHasBeenSet;

                    /**
                     * <p>TTS的API密钥</p>
                     */
                    std::string m_aPIKey;
                    bool m_aPIKeyHasBeenSet;

                    /**
                     * <p>TTS的模型，支持flow_02_turbo，flow_01_ex，默认为flow_02_turbo</p><p>枚举值：</p><ul><li>flow_02_turbo： 高性价比模型，兼顾效果和成本</li><li>flow_01_ex： 高天花板模型，能力全面，在音色克隆上表现更优</li></ul>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>需要合成的语言，默认为空，表示自动识别</p><p>flow_02_turbo支持以下语言：</p><ul><li>zh：中文</li><li>en：英文</li><li>ja：日语</li><li>ko：韩语</li><li>yue：粤语</li><li>ms：马来语</li><li>ar：阿拉伯语</li><li>id：印尼语</li><li>th：泰语</li><li>vi：越南语</li></ul><p>flow_01_ex支持以下语言：</p><ul><li>zh：中文（简体） (Chinese Simplified)</li><li>zh-tw：中文（繁体） (Chinese Traditional)</li><li>en：英语 (English)</li><li>ja：日语 (Japanese)</li><li>ko：韩语 (Korean)</li><li>ms：马来语 (Malay)</li><li>yue：粤语 (Cantonese)</li><li>ar：阿拉伯语 (Arabic)</li><li>ru：俄语 (Russian)</li><li>es：西班牙语 (Spanish)</li><li>fr：法语 (French)</li><li>pt：葡萄牙语 (Portuguese)</li><li>de：德语 (German)</li><li>tr：土耳其语 (Turkish)</li><li>nl：荷兰语 (Dutch)</li><li>uk：乌克兰语 (Ukrainian)</li><li>vi：越南语 (Vietnamese)</li><li>id：印尼语 (Indonesian)</li><li>it：意大利语 (Italian)</li><li>th：泰语 (Thai)</li><li>pl：波兰语 (Polish)</li><li>ro：罗马尼亚语 (Romanian)</li><li>el：希腊语 (Greek)</li><li>cs：捷克语 (Czech)</li><li>fi：芬兰语 (Finnish)</li><li>hi：印地语 (Hindi)</li><li>bg：保加利亚语 (Bulgarian)</li><li>da：丹麦语 (Danish)</li><li>he：希伯来语 (Hebrew)</li><li>fa：波斯语（法尔西语） (Persian)</li><li>sk：斯洛伐克语 (Slovak)</li><li>sv：瑞典语 (Swedish)</li><li>hr：克罗地亚语 (Croatian)</li><li>tl：菲律宾语（他加禄语） (Filipino)</li><li>hu：匈牙利语 (Hungarian)</li><li>no：挪威语 (Norwegian)</li><li>sl：斯洛文尼亚语 (Slovenian)</li><li>ca：加泰罗尼亚语 (Catalan)</li><li>nn：新挪威语 (Nynorsk)</li><li>ta：泰米尔语 (Tamil)</li><li>af：南非荷兰语 (Afrikaans)</li></ul>
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * <p>多音字/生僻字发音纠正词典条目。指定特定词语在本次请求中使用的发音。</p>
                     */
                    std::vector<PronunciationDict> m_pronunciationDict;
                    bool m_pronunciationDictHasBeenSet;

                    /**
                     * <p>字幕级别</p><p>枚举值：</p><ul><li>0： 无字幕</li><li>1： 句子级别字幕</li><li>2： 词级别字幕，目前只有flow_01_ex支持</li></ul><p>默认值：0</p>
                     */
                    uint64_t m_alignmentMode;
                    bool m_alignmentModeHasBeenSet;

                    /**
                     * <p>json字符串，用于拓展用法</p>
                     */
                    std::string m_extraParams;
                    bool m_extraParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TEXTTOSPEECHSSEREQUEST_H_

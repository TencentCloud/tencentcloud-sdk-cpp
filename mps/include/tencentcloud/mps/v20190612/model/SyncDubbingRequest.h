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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SYNCDUBBINGREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SYNCDUBBINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * SyncDubbing请求参数结构体
                */
                class SyncDubbingRequest : public AbstractModel
                {
                public:
                    SyncDubbingRequest();
                    ~SyncDubbingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取合成文本，语音合成时必填，文本长度不超过2000字符
                     * @return Text 合成文本，语音合成时必填，文本长度不超过2000字符
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置合成文本，语音合成时必填，文本长度不超过2000字符
                     * @param _text 合成文本，语音合成时必填，文本长度不超过2000字符
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
                     * 获取文本语言，不填默认中文。
当前支持语言：
zh	中文 (Chinese)
en	英语 (English)
ja	日语 (Japanese)
de	德语 (German)
fr	法语 (French)
ko	韩语 (Korean)
ru	俄语 (Russian)
uk	乌克兰语 (Ukrainian)
pt	葡萄牙语 (Portuguese)
it	意大利语 (Italian)
es	西班牙语 (Spanish)
id	印度尼西亚语 (Indonesian)
nl	荷兰语 (Dutch)
tr	土耳其语 (Turkish)
fil	菲律宾语 (Filipino)
ms	马来语 (Malay)
el	希腊语 (Greek)
fi	芬兰语 (Finnish)
hr	克罗地亚语 (Croatian)
sk	斯洛伐克语 (Slovak)
pl	波兰语 (Polish)
sv	瑞典语 (Swedish)
hi	印地语 (Hindi)
bg	保加利亚语 (Bulgarian)
ro	罗马尼亚语 (Romanian)
ar	阿拉伯语 (Arabic)
cs	捷克语 (Czech)
da	丹麦语 (Danish)
ta	泰米尔语 (Tamil)
hun	匈牙利语（Hungarian）
vi	越南语（Vietnamese）
no	挪威语（Norwegian）
yue	粤语（Cantonese）
th	泰语（Thai）
he	希伯来语（Hebrew）
ca	加泰罗尼亚语（Catalan）
nn	尼诺斯克语（Nynorsk）
af	阿非利卡语（Afrikaans）
fa	波斯语（Persian）
sl	斯洛文尼亚语（Slovenian）

                     * @return TextLang 文本语言，不填默认中文。
当前支持语言：
zh	中文 (Chinese)
en	英语 (English)
ja	日语 (Japanese)
de	德语 (German)
fr	法语 (French)
ko	韩语 (Korean)
ru	俄语 (Russian)
uk	乌克兰语 (Ukrainian)
pt	葡萄牙语 (Portuguese)
it	意大利语 (Italian)
es	西班牙语 (Spanish)
id	印度尼西亚语 (Indonesian)
nl	荷兰语 (Dutch)
tr	土耳其语 (Turkish)
fil	菲律宾语 (Filipino)
ms	马来语 (Malay)
el	希腊语 (Greek)
fi	芬兰语 (Finnish)
hr	克罗地亚语 (Croatian)
sk	斯洛伐克语 (Slovak)
pl	波兰语 (Polish)
sv	瑞典语 (Swedish)
hi	印地语 (Hindi)
bg	保加利亚语 (Bulgarian)
ro	罗马尼亚语 (Romanian)
ar	阿拉伯语 (Arabic)
cs	捷克语 (Czech)
da	丹麦语 (Danish)
ta	泰米尔语 (Tamil)
hun	匈牙利语（Hungarian）
vi	越南语（Vietnamese）
no	挪威语（Norwegian）
yue	粤语（Cantonese）
th	泰语（Thai）
he	希伯来语（Hebrew）
ca	加泰罗尼亚语（Catalan）
nn	尼诺斯克语（Nynorsk）
af	阿非利卡语（Afrikaans）
fa	波斯语（Persian）
sl	斯洛文尼亚语（Slovenian）

                     * 
                     */
                    std::string GetTextLang() const;

                    /**
                     * 设置文本语言，不填默认中文。
当前支持语言：
zh	中文 (Chinese)
en	英语 (English)
ja	日语 (Japanese)
de	德语 (German)
fr	法语 (French)
ko	韩语 (Korean)
ru	俄语 (Russian)
uk	乌克兰语 (Ukrainian)
pt	葡萄牙语 (Portuguese)
it	意大利语 (Italian)
es	西班牙语 (Spanish)
id	印度尼西亚语 (Indonesian)
nl	荷兰语 (Dutch)
tr	土耳其语 (Turkish)
fil	菲律宾语 (Filipino)
ms	马来语 (Malay)
el	希腊语 (Greek)
fi	芬兰语 (Finnish)
hr	克罗地亚语 (Croatian)
sk	斯洛伐克语 (Slovak)
pl	波兰语 (Polish)
sv	瑞典语 (Swedish)
hi	印地语 (Hindi)
bg	保加利亚语 (Bulgarian)
ro	罗马尼亚语 (Romanian)
ar	阿拉伯语 (Arabic)
cs	捷克语 (Czech)
da	丹麦语 (Danish)
ta	泰米尔语 (Tamil)
hun	匈牙利语（Hungarian）
vi	越南语（Vietnamese）
no	挪威语（Norwegian）
yue	粤语（Cantonese）
th	泰语（Thai）
he	希伯来语（Hebrew）
ca	加泰罗尼亚语（Catalan）
nn	尼诺斯克语（Nynorsk）
af	阿非利卡语（Afrikaans）
fa	波斯语（Persian）
sl	斯洛文尼亚语（Slovenian）

                     * @param _textLang 文本语言，不填默认中文。
当前支持语言：
zh	中文 (Chinese)
en	英语 (English)
ja	日语 (Japanese)
de	德语 (German)
fr	法语 (French)
ko	韩语 (Korean)
ru	俄语 (Russian)
uk	乌克兰语 (Ukrainian)
pt	葡萄牙语 (Portuguese)
it	意大利语 (Italian)
es	西班牙语 (Spanish)
id	印度尼西亚语 (Indonesian)
nl	荷兰语 (Dutch)
tr	土耳其语 (Turkish)
fil	菲律宾语 (Filipino)
ms	马来语 (Malay)
el	希腊语 (Greek)
fi	芬兰语 (Finnish)
hr	克罗地亚语 (Croatian)
sk	斯洛伐克语 (Slovak)
pl	波兰语 (Polish)
sv	瑞典语 (Swedish)
hi	印地语 (Hindi)
bg	保加利亚语 (Bulgarian)
ro	罗马尼亚语 (Romanian)
ar	阿拉伯语 (Arabic)
cs	捷克语 (Czech)
da	丹麦语 (Danish)
ta	泰米尔语 (Tamil)
hun	匈牙利语（Hungarian）
vi	越南语（Vietnamese）
no	挪威语（Norwegian）
yue	粤语（Cantonese）
th	泰语（Thai）
he	希伯来语（Hebrew）
ca	加泰罗尼亚语（Catalan）
nn	尼诺斯克语（Nynorsk）
af	阿非利卡语（Afrikaans）
fa	波斯语（Persian）
sl	斯洛文尼亚语（Slovenian）

                     * 
                     */
                    void SetTextLang(const std::string& _textLang);

                    /**
                     * 判断参数 TextLang 是否已赋值
                     * @return TextLang 是否已赋值
                     * 
                     */
                    bool TextLangHasBeenSet() const;

                    /**
                     * 获取音色Id，指定音色合成时填写，支持系统音色和克隆音色。
                     * @return VoiceId 音色Id，指定音色合成时填写，支持系统音色和克隆音色。
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置音色Id，指定音色合成时填写，支持系统音色和克隆音色。
                     * @param _voiceId 音色Id，指定音色合成时填写，支持系统音色和克隆音色。
                     * 
                     */
                    void SetVoiceId(const std::string& _voiceId);

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                    /**
                     * 获取克隆音频base64编码。
                     * @return AudioData 克隆音频base64编码。
                     * 
                     */
                    std::string GetAudioData() const;

                    /**
                     * 设置克隆音频base64编码。
                     * @param _audioData 克隆音频base64编码。
                     * 
                     */
                    void SetAudioData(const std::string& _audioData);

                    /**
                     * 判断参数 AudioData 是否已赋值
                     * @return AudioData 是否已赋值
                     * 
                     */
                    bool AudioDataHasBeenSet() const;

                    /**
                     * 获取克隆音频语言，默认中文。
当前支持语言同TextLang
                     * @return AudioLang 克隆音频语言，默认中文。
当前支持语言同TextLang
                     * 
                     */
                    std::string GetAudioLang() const;

                    /**
                     * 设置克隆音频语言，默认中文。
当前支持语言同TextLang
                     * @param _audioLang 克隆音频语言，默认中文。
当前支持语言同TextLang
                     * 
                     */
                    void SetAudioLang(const std::string& _audioLang);

                    /**
                     * 判断参数 AudioLang 是否已赋值
                     * @return AudioLang 是否已赋值
                     * 
                     */
                    bool AudioLangHasBeenSet() const;

                    /**
                     * 获取扩展参数，json字符串
                     * @return ExtParam 扩展参数，json字符串
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置扩展参数，json字符串
                     * @param _extParam 扩展参数，json字符串
                     * 
                     */
                    void SetExtParam(const std::string& _extParam);

                    /**
                     * 判断参数 ExtParam 是否已赋值
                     * @return ExtParam 是否已赋值
                     * 
                     */
                    bool ExtParamHasBeenSet() const;

                private:

                    /**
                     * 合成文本，语音合成时必填，文本长度不超过2000字符
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 文本语言，不填默认中文。
当前支持语言：
zh	中文 (Chinese)
en	英语 (English)
ja	日语 (Japanese)
de	德语 (German)
fr	法语 (French)
ko	韩语 (Korean)
ru	俄语 (Russian)
uk	乌克兰语 (Ukrainian)
pt	葡萄牙语 (Portuguese)
it	意大利语 (Italian)
es	西班牙语 (Spanish)
id	印度尼西亚语 (Indonesian)
nl	荷兰语 (Dutch)
tr	土耳其语 (Turkish)
fil	菲律宾语 (Filipino)
ms	马来语 (Malay)
el	希腊语 (Greek)
fi	芬兰语 (Finnish)
hr	克罗地亚语 (Croatian)
sk	斯洛伐克语 (Slovak)
pl	波兰语 (Polish)
sv	瑞典语 (Swedish)
hi	印地语 (Hindi)
bg	保加利亚语 (Bulgarian)
ro	罗马尼亚语 (Romanian)
ar	阿拉伯语 (Arabic)
cs	捷克语 (Czech)
da	丹麦语 (Danish)
ta	泰米尔语 (Tamil)
hun	匈牙利语（Hungarian）
vi	越南语（Vietnamese）
no	挪威语（Norwegian）
yue	粤语（Cantonese）
th	泰语（Thai）
he	希伯来语（Hebrew）
ca	加泰罗尼亚语（Catalan）
nn	尼诺斯克语（Nynorsk）
af	阿非利卡语（Afrikaans）
fa	波斯语（Persian）
sl	斯洛文尼亚语（Slovenian）

                     */
                    std::string m_textLang;
                    bool m_textLangHasBeenSet;

                    /**
                     * 音色Id，指定音色合成时填写，支持系统音色和克隆音色。
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * 克隆音频base64编码。
                     */
                    std::string m_audioData;
                    bool m_audioDataHasBeenSet;

                    /**
                     * 克隆音频语言，默认中文。
当前支持语言同TextLang
                     */
                    std::string m_audioLang;
                    bool m_audioLangHasBeenSet;

                    /**
                     * 扩展参数，json字符串
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SYNCDUBBINGREQUEST_H_

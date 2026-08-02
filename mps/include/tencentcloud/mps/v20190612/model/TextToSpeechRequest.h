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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TEXTTOSPEECHREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TEXTTOSPEECHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SyncDubbingOutputOption.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * TextToSpeech请求参数结构体
                */
                class TextToSpeechRequest : public AbstractModel
                {
                public:
                    TextToSpeechRequest();
                    ~TextToSpeechRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>语音合成文本</p>
                     * @return Text <p>语音合成文本</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>语音合成文本</p>
                     * @param _text <p>语音合成文本</p>
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
                     * 获取<p>音色ID</p>
                     * @return VoiceId <p>音色ID</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>音色ID</p>
                     * @param _voiceId <p>音色ID</p>
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
                     * 获取<p>文本语言。不填默认自动识别<br>当前支持语言：<br>zh 中文 (Chinese)<br>en 英语 (English)<br>ja 日语 (Japanese)<br>de 德语 (German)<br>fr 法语 (French)<br>ko 韩语 (Korean)<br>ru 俄语 (Russian)<br>uk 乌克兰语 (Ukrainian)<br>pt 葡萄牙语 (Portuguese)<br>it 意大利语 (Italian)<br>es 西班牙语 (Spanish)<br>id 印度尼西亚语 (Indonesian)<br>nl 荷兰语 (Dutch)<br>tr 土耳其语 (Turkish)<br>fil 菲律宾语 (Filipino)<br>ms 马来语 (Malay)<br>el 希腊语 (Greek)<br>fi 芬兰语 (Finnish)<br>hr 克罗地亚语 (Croatian)<br>sk 斯洛伐克语 (Slovak)<br>pl 波兰语 (Polish)<br>sv 瑞典语 (Swedish)<br>hi 印地语 (Hindi)<br>bg 保加利亚语 (Bulgarian)<br>ro 罗马尼亚语 (Romanian)<br>ar 阿拉伯语 (Arabic)<br>cs 捷克语 (Czech)<br>da 丹麦语 (Danish)<br>ta 泰米尔语 (Tamil)<br>hun 匈牙利语（Hungarian）<br>vi 越南语（Vietnamese）<br>no 挪威语（Norwegian）<br>yue 粤语（Cantonese）<br>th 泰语（Thai）<br>he 希伯来语（Hebrew）<br>ca 加泰罗尼亚语（Catalan）<br>nn 尼诺斯克语（Nynorsk）<br>af 阿非利卡语（Afrikaans）<br>fa 波斯语（Persian）<br>sl 斯洛文尼亚语（Slovenian）</p>
                     * @return TextLang <p>文本语言。不填默认自动识别<br>当前支持语言：<br>zh 中文 (Chinese)<br>en 英语 (English)<br>ja 日语 (Japanese)<br>de 德语 (German)<br>fr 法语 (French)<br>ko 韩语 (Korean)<br>ru 俄语 (Russian)<br>uk 乌克兰语 (Ukrainian)<br>pt 葡萄牙语 (Portuguese)<br>it 意大利语 (Italian)<br>es 西班牙语 (Spanish)<br>id 印度尼西亚语 (Indonesian)<br>nl 荷兰语 (Dutch)<br>tr 土耳其语 (Turkish)<br>fil 菲律宾语 (Filipino)<br>ms 马来语 (Malay)<br>el 希腊语 (Greek)<br>fi 芬兰语 (Finnish)<br>hr 克罗地亚语 (Croatian)<br>sk 斯洛伐克语 (Slovak)<br>pl 波兰语 (Polish)<br>sv 瑞典语 (Swedish)<br>hi 印地语 (Hindi)<br>bg 保加利亚语 (Bulgarian)<br>ro 罗马尼亚语 (Romanian)<br>ar 阿拉伯语 (Arabic)<br>cs 捷克语 (Czech)<br>da 丹麦语 (Danish)<br>ta 泰米尔语 (Tamil)<br>hun 匈牙利语（Hungarian）<br>vi 越南语（Vietnamese）<br>no 挪威语（Norwegian）<br>yue 粤语（Cantonese）<br>th 泰语（Thai）<br>he 希伯来语（Hebrew）<br>ca 加泰罗尼亚语（Catalan）<br>nn 尼诺斯克语（Nynorsk）<br>af 阿非利卡语（Afrikaans）<br>fa 波斯语（Persian）<br>sl 斯洛文尼亚语（Slovenian）</p>
                     * 
                     */
                    std::string GetTextLang() const;

                    /**
                     * 设置<p>文本语言。不填默认自动识别<br>当前支持语言：<br>zh 中文 (Chinese)<br>en 英语 (English)<br>ja 日语 (Japanese)<br>de 德语 (German)<br>fr 法语 (French)<br>ko 韩语 (Korean)<br>ru 俄语 (Russian)<br>uk 乌克兰语 (Ukrainian)<br>pt 葡萄牙语 (Portuguese)<br>it 意大利语 (Italian)<br>es 西班牙语 (Spanish)<br>id 印度尼西亚语 (Indonesian)<br>nl 荷兰语 (Dutch)<br>tr 土耳其语 (Turkish)<br>fil 菲律宾语 (Filipino)<br>ms 马来语 (Malay)<br>el 希腊语 (Greek)<br>fi 芬兰语 (Finnish)<br>hr 克罗地亚语 (Croatian)<br>sk 斯洛伐克语 (Slovak)<br>pl 波兰语 (Polish)<br>sv 瑞典语 (Swedish)<br>hi 印地语 (Hindi)<br>bg 保加利亚语 (Bulgarian)<br>ro 罗马尼亚语 (Romanian)<br>ar 阿拉伯语 (Arabic)<br>cs 捷克语 (Czech)<br>da 丹麦语 (Danish)<br>ta 泰米尔语 (Tamil)<br>hun 匈牙利语（Hungarian）<br>vi 越南语（Vietnamese）<br>no 挪威语（Norwegian）<br>yue 粤语（Cantonese）<br>th 泰语（Thai）<br>he 希伯来语（Hebrew）<br>ca 加泰罗尼亚语（Catalan）<br>nn 尼诺斯克语（Nynorsk）<br>af 阿非利卡语（Afrikaans）<br>fa 波斯语（Persian）<br>sl 斯洛文尼亚语（Slovenian）</p>
                     * @param _textLang <p>文本语言。不填默认自动识别<br>当前支持语言：<br>zh 中文 (Chinese)<br>en 英语 (English)<br>ja 日语 (Japanese)<br>de 德语 (German)<br>fr 法语 (French)<br>ko 韩语 (Korean)<br>ru 俄语 (Russian)<br>uk 乌克兰语 (Ukrainian)<br>pt 葡萄牙语 (Portuguese)<br>it 意大利语 (Italian)<br>es 西班牙语 (Spanish)<br>id 印度尼西亚语 (Indonesian)<br>nl 荷兰语 (Dutch)<br>tr 土耳其语 (Turkish)<br>fil 菲律宾语 (Filipino)<br>ms 马来语 (Malay)<br>el 希腊语 (Greek)<br>fi 芬兰语 (Finnish)<br>hr 克罗地亚语 (Croatian)<br>sk 斯洛伐克语 (Slovak)<br>pl 波兰语 (Polish)<br>sv 瑞典语 (Swedish)<br>hi 印地语 (Hindi)<br>bg 保加利亚语 (Bulgarian)<br>ro 罗马尼亚语 (Romanian)<br>ar 阿拉伯语 (Arabic)<br>cs 捷克语 (Czech)<br>da 丹麦语 (Danish)<br>ta 泰米尔语 (Tamil)<br>hun 匈牙利语（Hungarian）<br>vi 越南语（Vietnamese）<br>no 挪威语（Norwegian）<br>yue 粤语（Cantonese）<br>th 泰语（Thai）<br>he 希伯来语（Hebrew）<br>ca 加泰罗尼亚语（Catalan）<br>nn 尼诺斯克语（Nynorsk）<br>af 阿非利卡语（Afrikaans）<br>fa 波斯语（Persian）<br>sl 斯洛文尼亚语（Slovenian）</p>
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
                     * 获取<p>输出相关参数</p>
                     * @return Output <p>输出相关参数</p>
                     * 
                     */
                    SyncDubbingOutputOption GetOutput() const;

                    /**
                     * 设置<p>输出相关参数</p>
                     * @param _output <p>输出相关参数</p>
                     * 
                     */
                    void SetOutput(const SyncDubbingOutputOption& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取<p>扩展参数，json字符串</p><p><strong>synExt</strong> Object 语音合成扩展参数<br>   <strong>duration</strong> Float 合成音频时长（单位秒），默认不控制时长。示例：5.2<br>   <strong>format</strong> String 输出音频格式，默认wav，支持wav、mp3<br>   <strong>sampleRate</strong> Integer 合成音频采样率，默认16000，支持[8000,16000,22050,24000,32000,44100]</p>
                     * @return ExtParam <p>扩展参数，json字符串</p><p><strong>synExt</strong> Object 语音合成扩展参数<br>   <strong>duration</strong> Float 合成音频时长（单位秒），默认不控制时长。示例：5.2<br>   <strong>format</strong> String 输出音频格式，默认wav，支持wav、mp3<br>   <strong>sampleRate</strong> Integer 合成音频采样率，默认16000，支持[8000,16000,22050,24000,32000,44100]</p>
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置<p>扩展参数，json字符串</p><p><strong>synExt</strong> Object 语音合成扩展参数<br>   <strong>duration</strong> Float 合成音频时长（单位秒），默认不控制时长。示例：5.2<br>   <strong>format</strong> String 输出音频格式，默认wav，支持wav、mp3<br>   <strong>sampleRate</strong> Integer 合成音频采样率，默认16000，支持[8000,16000,22050,24000,32000,44100]</p>
                     * @param _extParam <p>扩展参数，json字符串</p><p><strong>synExt</strong> Object 语音合成扩展参数<br>   <strong>duration</strong> Float 合成音频时长（单位秒），默认不控制时长。示例：5.2<br>   <strong>format</strong> String 输出音频格式，默认wav，支持wav、mp3<br>   <strong>sampleRate</strong> Integer 合成音频采样率，默认16000，支持[8000,16000,22050,24000,32000,44100]</p>
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
                     * <p>语音合成文本</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>音色ID</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>文本语言。不填默认自动识别<br>当前支持语言：<br>zh 中文 (Chinese)<br>en 英语 (English)<br>ja 日语 (Japanese)<br>de 德语 (German)<br>fr 法语 (French)<br>ko 韩语 (Korean)<br>ru 俄语 (Russian)<br>uk 乌克兰语 (Ukrainian)<br>pt 葡萄牙语 (Portuguese)<br>it 意大利语 (Italian)<br>es 西班牙语 (Spanish)<br>id 印度尼西亚语 (Indonesian)<br>nl 荷兰语 (Dutch)<br>tr 土耳其语 (Turkish)<br>fil 菲律宾语 (Filipino)<br>ms 马来语 (Malay)<br>el 希腊语 (Greek)<br>fi 芬兰语 (Finnish)<br>hr 克罗地亚语 (Croatian)<br>sk 斯洛伐克语 (Slovak)<br>pl 波兰语 (Polish)<br>sv 瑞典语 (Swedish)<br>hi 印地语 (Hindi)<br>bg 保加利亚语 (Bulgarian)<br>ro 罗马尼亚语 (Romanian)<br>ar 阿拉伯语 (Arabic)<br>cs 捷克语 (Czech)<br>da 丹麦语 (Danish)<br>ta 泰米尔语 (Tamil)<br>hun 匈牙利语（Hungarian）<br>vi 越南语（Vietnamese）<br>no 挪威语（Norwegian）<br>yue 粤语（Cantonese）<br>th 泰语（Thai）<br>he 希伯来语（Hebrew）<br>ca 加泰罗尼亚语（Catalan）<br>nn 尼诺斯克语（Nynorsk）<br>af 阿非利卡语（Afrikaans）<br>fa 波斯语（Persian）<br>sl 斯洛文尼亚语（Slovenian）</p>
                     */
                    std::string m_textLang;
                    bool m_textLangHasBeenSet;

                    /**
                     * <p>输出相关参数</p>
                     */
                    SyncDubbingOutputOption m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * <p>扩展参数，json字符串</p><p><strong>synExt</strong> Object 语音合成扩展参数<br>   <strong>duration</strong> Float 合成音频时长（单位秒），默认不控制时长。示例：5.2<br>   <strong>format</strong> String 输出音频格式，默认wav，支持wav、mp3<br>   <strong>sampleRate</strong> Integer 合成音频采样率，默认16000，支持[8000,16000,22050,24000,32000,44100]</p>
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TEXTTOSPEECHREQUEST_H_

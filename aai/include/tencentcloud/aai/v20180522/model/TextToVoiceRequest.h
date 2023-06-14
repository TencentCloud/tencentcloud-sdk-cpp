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

#ifndef TENCENTCLOUD_AAI_V20180522_MODEL_TEXTTOVOICEREQUEST_H_
#define TENCENTCLOUD_AAI_V20180522_MODEL_TEXTTOVOICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aai
    {
        namespace V20180522
        {
            namespace Model
            {
                /**
                * TextToVoice请求参数结构体
                */
                class TextToVoiceRequest : public AbstractModel
                {
                public:
                    TextToVoiceRequest();
                    ~TextToVoiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取合成语音的源文本，按UTF-8编码统一计算。
中文最大支持100个汉字（全角标点符号算一个汉字）；英文最大支持400个字母（半角标点符号算一个字母）。包含空格等字符时需要url encode再传输。
                     * @return Text 合成语音的源文本，按UTF-8编码统一计算。
中文最大支持100个汉字（全角标点符号算一个汉字）；英文最大支持400个字母（半角标点符号算一个字母）。包含空格等字符时需要url encode再传输。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置合成语音的源文本，按UTF-8编码统一计算。
中文最大支持100个汉字（全角标点符号算一个汉字）；英文最大支持400个字母（半角标点符号算一个字母）。包含空格等字符时需要url encode再传输。
                     * @param _text 合成语音的源文本，按UTF-8编码统一计算。
中文最大支持100个汉字（全角标点符号算一个汉字）；英文最大支持400个字母（半角标点符号算一个字母）。包含空格等字符时需要url encode再传输。
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
                     * 获取一次请求对应一个SessionId，会原样返回，建议传入类似于uuid的字符串防止重复。
                     * @return SessionId 一次请求对应一个SessionId，会原样返回，建议传入类似于uuid的字符串防止重复。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置一次请求对应一个SessionId，会原样返回，建议传入类似于uuid的字符串防止重复。
                     * @param _sessionId 一次请求对应一个SessionId，会原样返回，建议传入类似于uuid的字符串防止重复。
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取模型类型，1-默认模型。
                     * @return ModelType 模型类型，1-默认模型。
                     * 
                     */
                    int64_t GetModelType() const;

                    /**
                     * 设置模型类型，1-默认模型。
                     * @param _modelType 模型类型，1-默认模型。
                     * 
                     */
                    void SetModelType(const int64_t& _modelType);

                    /**
                     * 判断参数 ModelType 是否已赋值
                     * @return ModelType 是否已赋值
                     * 
                     */
                    bool ModelTypeHasBeenSet() const;

                    /**
                     * 获取音量大小，范围：[0，10]，分别对应11个等级的音量，默认为0，代表正常音量。没有静音选项。
输入除以上整数之外的其他参数不生效，按默认值处理。
                     * @return Volume 音量大小，范围：[0，10]，分别对应11个等级的音量，默认为0，代表正常音量。没有静音选项。
输入除以上整数之外的其他参数不生效，按默认值处理。
                     * 
                     */
                    double GetVolume() const;

                    /**
                     * 设置音量大小，范围：[0，10]，分别对应11个等级的音量，默认为0，代表正常音量。没有静音选项。
输入除以上整数之外的其他参数不生效，按默认值处理。
                     * @param _volume 音量大小，范围：[0，10]，分别对应11个等级的音量，默认为0，代表正常音量。没有静音选项。
输入除以上整数之外的其他参数不生效，按默认值处理。
                     * 
                     */
                    void SetVolume(const double& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取语速，范围：[-2，2]，分别对应不同语速：<li>-2代表0.6倍</li><li>-1代表0.8倍</li><li>0代表1.0倍（默认）</li><li>1代表1.2倍</li><li>2代表1.5倍</li>输入除以上整数之外的其他参数不生效，按默认值处理。
                     * @return Speed 语速，范围：[-2，2]，分别对应不同语速：<li>-2代表0.6倍</li><li>-1代表0.8倍</li><li>0代表1.0倍（默认）</li><li>1代表1.2倍</li><li>2代表1.5倍</li>输入除以上整数之外的其他参数不生效，按默认值处理。
                     * 
                     */
                    double GetSpeed() const;

                    /**
                     * 设置语速，范围：[-2，2]，分别对应不同语速：<li>-2代表0.6倍</li><li>-1代表0.8倍</li><li>0代表1.0倍（默认）</li><li>1代表1.2倍</li><li>2代表1.5倍</li>输入除以上整数之外的其他参数不生效，按默认值处理。
                     * @param _speed 语速，范围：[-2，2]，分别对应不同语速：<li>-2代表0.6倍</li><li>-1代表0.8倍</li><li>0代表1.0倍（默认）</li><li>1代表1.2倍</li><li>2代表1.5倍</li>输入除以上整数之外的其他参数不生效，按默认值处理。
                     * 
                     */
                    void SetSpeed(const double& _speed);

                    /**
                     * 判断参数 Speed 是否已赋值
                     * @return Speed 是否已赋值
                     * 
                     */
                    bool SpeedHasBeenSet() const;

                    /**
                     * 获取项目id，用户自定义，默认为0。
                     * @return ProjectId 项目id，用户自定义，默认为0。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目id，用户自定义，默认为0。
                     * @param _projectId 项目id，用户自定义，默认为0。
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取音色<li>0-亲和女声(默认)</li><li>1-亲和男声</li><li>2-成熟男声</li><li>3-活力男声</li><li>4-温暖女声</li><li>5-情感女声</li><li>6-情感男声</li>
                     * @return VoiceType 音色<li>0-亲和女声(默认)</li><li>1-亲和男声</li><li>2-成熟男声</li><li>3-活力男声</li><li>4-温暖女声</li><li>5-情感女声</li><li>6-情感男声</li>
                     * 
                     */
                    int64_t GetVoiceType() const;

                    /**
                     * 设置音色<li>0-亲和女声(默认)</li><li>1-亲和男声</li><li>2-成熟男声</li><li>3-活力男声</li><li>4-温暖女声</li><li>5-情感女声</li><li>6-情感男声</li>
                     * @param _voiceType 音色<li>0-亲和女声(默认)</li><li>1-亲和男声</li><li>2-成熟男声</li><li>3-活力男声</li><li>4-温暖女声</li><li>5-情感女声</li><li>6-情感男声</li>
                     * 
                     */
                    void SetVoiceType(const int64_t& _voiceType);

                    /**
                     * 判断参数 VoiceType 是否已赋值
                     * @return VoiceType 是否已赋值
                     * 
                     */
                    bool VoiceTypeHasBeenSet() const;

                    /**
                     * 获取主语言类型：<li>1-中文（默认）</li><li>2-英文</li>
                     * @return PrimaryLanguage 主语言类型：<li>1-中文（默认）</li><li>2-英文</li>
                     * 
                     */
                    uint64_t GetPrimaryLanguage() const;

                    /**
                     * 设置主语言类型：<li>1-中文（默认）</li><li>2-英文</li>
                     * @param _primaryLanguage 主语言类型：<li>1-中文（默认）</li><li>2-英文</li>
                     * 
                     */
                    void SetPrimaryLanguage(const uint64_t& _primaryLanguage);

                    /**
                     * 判断参数 PrimaryLanguage 是否已赋值
                     * @return PrimaryLanguage 是否已赋值
                     * 
                     */
                    bool PrimaryLanguageHasBeenSet() const;

                    /**
                     * 获取音频采样率：<li>16000：16k（默认）</li><li>8000：8k</li>
                     * @return SampleRate 音频采样率：<li>16000：16k（默认）</li><li>8000：8k</li>
                     * 
                     */
                    uint64_t GetSampleRate() const;

                    /**
                     * 设置音频采样率：<li>16000：16k（默认）</li><li>8000：8k</li>
                     * @param _sampleRate 音频采样率：<li>16000：16k（默认）</li><li>8000：8k</li>
                     * 
                     */
                    void SetSampleRate(const uint64_t& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     * 
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取返回音频格式，可取值：wav（默认），mp3
                     * @return Codec 返回音频格式，可取值：wav（默认），mp3
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置返回音频格式，可取值：wav（默认），mp3
                     * @param _codec 返回音频格式，可取值：wav（默认），mp3
                     * 
                     */
                    void SetCodec(const std::string& _codec);

                    /**
                     * 判断参数 Codec 是否已赋值
                     * @return Codec 是否已赋值
                     * 
                     */
                    bool CodecHasBeenSet() const;

                private:

                    /**
                     * 合成语音的源文本，按UTF-8编码统一计算。
中文最大支持100个汉字（全角标点符号算一个汉字）；英文最大支持400个字母（半角标点符号算一个字母）。包含空格等字符时需要url encode再传输。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 一次请求对应一个SessionId，会原样返回，建议传入类似于uuid的字符串防止重复。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 模型类型，1-默认模型。
                     */
                    int64_t m_modelType;
                    bool m_modelTypeHasBeenSet;

                    /**
                     * 音量大小，范围：[0，10]，分别对应11个等级的音量，默认为0，代表正常音量。没有静音选项。
输入除以上整数之外的其他参数不生效，按默认值处理。
                     */
                    double m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * 语速，范围：[-2，2]，分别对应不同语速：<li>-2代表0.6倍</li><li>-1代表0.8倍</li><li>0代表1.0倍（默认）</li><li>1代表1.2倍</li><li>2代表1.5倍</li>输入除以上整数之外的其他参数不生效，按默认值处理。
                     */
                    double m_speed;
                    bool m_speedHasBeenSet;

                    /**
                     * 项目id，用户自定义，默认为0。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 音色<li>0-亲和女声(默认)</li><li>1-亲和男声</li><li>2-成熟男声</li><li>3-活力男声</li><li>4-温暖女声</li><li>5-情感女声</li><li>6-情感男声</li>
                     */
                    int64_t m_voiceType;
                    bool m_voiceTypeHasBeenSet;

                    /**
                     * 主语言类型：<li>1-中文（默认）</li><li>2-英文</li>
                     */
                    uint64_t m_primaryLanguage;
                    bool m_primaryLanguageHasBeenSet;

                    /**
                     * 音频采样率：<li>16000：16k（默认）</li><li>8000：8k</li>
                     */
                    uint64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 返回音频格式，可取值：wav（默认），mp3
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AAI_V20180522_MODEL_TEXTTOVOICEREQUEST_H_

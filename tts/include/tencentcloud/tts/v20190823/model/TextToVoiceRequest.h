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

#ifndef TENCENTCLOUD_TTS_V20190823_MODEL_TEXTTOVOICEREQUEST_H_
#define TENCENTCLOUD_TTS_V20190823_MODEL_TEXTTOVOICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tts
    {
        namespace V20190823
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
中文最大支持150个汉字（全角标点符号算一个汉字）；英文最大支持500个字母（半角标点符号算一个字母）。
                     * @return Text 合成语音的源文本，按UTF-8编码统一计算。
中文最大支持150个汉字（全角标点符号算一个汉字）；英文最大支持500个字母（半角标点符号算一个字母）。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置合成语音的源文本，按UTF-8编码统一计算。
中文最大支持150个汉字（全角标点符号算一个汉字）；英文最大支持500个字母（半角标点符号算一个字母）。
                     * @param _text 合成语音的源文本，按UTF-8编码统一计算。
中文最大支持150个汉字（全角标点符号算一个汉字）；英文最大支持500个字母（半角标点符号算一个字母）。
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
                     * 获取音量大小，范围[-10，10]，对应音量大小。默认为0，代表正常音量，值越大音量越高。
                     * @return Volume 音量大小，范围[-10，10]，对应音量大小。默认为0，代表正常音量，值越大音量越高。
                     * 
                     */
                    double GetVolume() const;

                    /**
                     * 设置音量大小，范围[-10，10]，对应音量大小。默认为0，代表正常音量，值越大音量越高。
                     * @param _volume 音量大小，范围[-10，10]，对应音量大小。默认为0，代表正常音量，值越大音量越高。
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
                     * 获取语速，范围：[-2，6]，分别对应不同语速：<li>-2代表0.6倍</li><li>-1代表0.8倍</li><li>0代表1.0倍（默认）</li><li>1代表1.2倍</li><li>2代表1.5倍</li><li>6代表2.5倍</li>如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。<br>参数值与实际语速转换，可参考[代码示例](https://sdk-1300466766.cos.ap-shanghai.myqcloud.com/sample/speed_sample.tar.gz)
                     * @return Speed 语速，范围：[-2，6]，分别对应不同语速：<li>-2代表0.6倍</li><li>-1代表0.8倍</li><li>0代表1.0倍（默认）</li><li>1代表1.2倍</li><li>2代表1.5倍</li><li>6代表2.5倍</li>如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。<br>参数值与实际语速转换，可参考[代码示例](https://sdk-1300466766.cos.ap-shanghai.myqcloud.com/sample/speed_sample.tar.gz)
                     * 
                     */
                    double GetSpeed() const;

                    /**
                     * 设置语速，范围：[-2，6]，分别对应不同语速：<li>-2代表0.6倍</li><li>-1代表0.8倍</li><li>0代表1.0倍（默认）</li><li>1代表1.2倍</li><li>2代表1.5倍</li><li>6代表2.5倍</li>如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。<br>参数值与实际语速转换，可参考[代码示例](https://sdk-1300466766.cos.ap-shanghai.myqcloud.com/sample/speed_sample.tar.gz)
                     * @param _speed 语速，范围：[-2，6]，分别对应不同语速：<li>-2代表0.6倍</li><li>-1代表0.8倍</li><li>0代表1.0倍（默认）</li><li>1代表1.2倍</li><li>2代表1.5倍</li><li>6代表2.5倍</li>如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。<br>参数值与实际语速转换，可参考[代码示例](https://sdk-1300466766.cos.ap-shanghai.myqcloud.com/sample/speed_sample.tar.gz)
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
                     * 获取音色 ID，包括标准音色、精品音色、大模型音色与基础版复刻音色。不同音色价格有差异，详情请参见[购买指南](https://cloud.tencent.com/document/product/1073/34112)。完整的音色 ID 列表请参见[音色列表](https://cloud.tencent.com/document/product/1073/92668)。

                     * @return VoiceType 音色 ID，包括标准音色、精品音色、大模型音色与基础版复刻音色。不同音色价格有差异，详情请参见[购买指南](https://cloud.tencent.com/document/product/1073/34112)。完整的音色 ID 列表请参见[音色列表](https://cloud.tencent.com/document/product/1073/92668)。

                     * 
                     */
                    int64_t GetVoiceType() const;

                    /**
                     * 设置音色 ID，包括标准音色、精品音色、大模型音色与基础版复刻音色。不同音色价格有差异，详情请参见[购买指南](https://cloud.tencent.com/document/product/1073/34112)。完整的音色 ID 列表请参见[音色列表](https://cloud.tencent.com/document/product/1073/92668)。

                     * @param _voiceType 音色 ID，包括标准音色、精品音色、大模型音色与基础版复刻音色。不同音色价格有差异，详情请参见[购买指南](https://cloud.tencent.com/document/product/1073/34112)。完整的音色 ID 列表请参见[音色列表](https://cloud.tencent.com/document/product/1073/92668)。

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
                     * 获取一句话版声音复刻音色ID，使用一句话版声音复刻音色时需填写。【已废弃】
                     * @return FastVoiceType 一句话版声音复刻音色ID，使用一句话版声音复刻音色时需填写。【已废弃】
                     * 
                     */
                    std::string GetFastVoiceType() const;

                    /**
                     * 设置一句话版声音复刻音色ID，使用一句话版声音复刻音色时需填写。【已废弃】
                     * @param _fastVoiceType 一句话版声音复刻音色ID，使用一句话版声音复刻音色时需填写。【已废弃】
                     * 
                     */
                    void SetFastVoiceType(const std::string& _fastVoiceType);

                    /**
                     * 判断参数 FastVoiceType 是否已赋值
                     * @return FastVoiceType 是否已赋值
                     * 
                     */
                    bool FastVoiceTypeHasBeenSet() const;

                    /**
                     * 获取主语言类型：<li>1-中文（默认）</li><li>2-英文</li><li>3-日文</li>
                     * @return PrimaryLanguage 主语言类型：<li>1-中文（默认）</li><li>2-英文</li><li>3-日文</li>
                     * 
                     */
                    int64_t GetPrimaryLanguage() const;

                    /**
                     * 设置主语言类型：<li>1-中文（默认）</li><li>2-英文</li><li>3-日文</li>
                     * @param _primaryLanguage 主语言类型：<li>1-中文（默认）</li><li>2-英文</li><li>3-日文</li>
                     * 
                     */
                    void SetPrimaryLanguage(const int64_t& _primaryLanguage);

                    /**
                     * 判断参数 PrimaryLanguage 是否已赋值
                     * @return PrimaryLanguage 是否已赋值
                     * 
                     */
                    bool PrimaryLanguageHasBeenSet() const;

                    /**
                     * 获取音频采样率：
<li>24000：24k（部分音色支持，请参见[音色列表](https://cloud.tencent.com/document/product/1073/92668)）</li>
<li>16000：16k（默认）</li>
<li>8000：8k</li>
                     * @return SampleRate 音频采样率：
<li>24000：24k（部分音色支持，请参见[音色列表](https://cloud.tencent.com/document/product/1073/92668)）</li>
<li>16000：16k（默认）</li>
<li>8000：8k</li>
                     * 
                     */
                    uint64_t GetSampleRate() const;

                    /**
                     * 设置音频采样率：
<li>24000：24k（部分音色支持，请参见[音色列表](https://cloud.tencent.com/document/product/1073/92668)）</li>
<li>16000：16k（默认）</li>
<li>8000：8k</li>
                     * @param _sampleRate 音频采样率：
<li>24000：24k（部分音色支持，请参见[音色列表](https://cloud.tencent.com/document/product/1073/92668)）</li>
<li>16000：16k（默认）</li>
<li>8000：8k</li>
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
                     * 获取返回音频格式，可取值：wav（默认），mp3，pcm
                     * @return Codec 返回音频格式，可取值：wav（默认），mp3，pcm
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置返回音频格式，可取值：wav（默认），mp3，pcm
                     * @param _codec 返回音频格式，可取值：wav（默认），mp3，pcm
                     * 
                     */
                    void SetCodec(const std::string& _codec);

                    /**
                     * 判断参数 Codec 是否已赋值
                     * @return Codec 是否已赋值
                     * 
                     */
                    bool CodecHasBeenSet() const;

                    /**
                     * 获取是否开启时间戳功能，默认为false。
                     * @return EnableSubtitle 是否开启时间戳功能，默认为false。
                     * 
                     */
                    bool GetEnableSubtitle() const;

                    /**
                     * 设置是否开启时间戳功能，默认为false。
                     * @param _enableSubtitle 是否开启时间戳功能，默认为false。
                     * 
                     */
                    void SetEnableSubtitle(const bool& _enableSubtitle);

                    /**
                     * 判断参数 EnableSubtitle 是否已赋值
                     * @return EnableSubtitle 是否已赋值
                     * 
                     */
                    bool EnableSubtitleHasBeenSet() const;

                    /**
                     * 获取断句敏感阈值，默认值为：0，取值范围：[0,1,2]。该值越大越不容易断句，模型会更倾向于仅按照标点符号断句。此参数建议不要随意调整，可能会影响合成效果。
                     * @return SegmentRate 断句敏感阈值，默认值为：0，取值范围：[0,1,2]。该值越大越不容易断句，模型会更倾向于仅按照标点符号断句。此参数建议不要随意调整，可能会影响合成效果。
                     * 
                     */
                    uint64_t GetSegmentRate() const;

                    /**
                     * 设置断句敏感阈值，默认值为：0，取值范围：[0,1,2]。该值越大越不容易断句，模型会更倾向于仅按照标点符号断句。此参数建议不要随意调整，可能会影响合成效果。
                     * @param _segmentRate 断句敏感阈值，默认值为：0，取值范围：[0,1,2]。该值越大越不容易断句，模型会更倾向于仅按照标点符号断句。此参数建议不要随意调整，可能会影响合成效果。
                     * 
                     */
                    void SetSegmentRate(const uint64_t& _segmentRate);

                    /**
                     * 判断参数 SegmentRate 是否已赋值
                     * @return SegmentRate 是否已赋值
                     * 
                     */
                    bool SegmentRateHasBeenSet() const;

                    /**
                     * 获取控制合成音频的情感，仅支持多情感音色使用。取值: neutral(中性)、sad(悲伤)、happy(高兴)、angry(生气)、fear(恐惧)、news(新闻)、story(故事)、radio(广播)、poetry(诗歌)、call(客服)、sajiao(撒娇)、disgusted(厌恶)、amaze(震惊)、peaceful(平静)、exciting(兴奋)、aojiao(傲娇)、jieshuo(解说)
示例值：neutral
                     * @return EmotionCategory 控制合成音频的情感，仅支持多情感音色使用。取值: neutral(中性)、sad(悲伤)、happy(高兴)、angry(生气)、fear(恐惧)、news(新闻)、story(故事)、radio(广播)、poetry(诗歌)、call(客服)、sajiao(撒娇)、disgusted(厌恶)、amaze(震惊)、peaceful(平静)、exciting(兴奋)、aojiao(傲娇)、jieshuo(解说)
示例值：neutral
                     * 
                     */
                    std::string GetEmotionCategory() const;

                    /**
                     * 设置控制合成音频的情感，仅支持多情感音色使用。取值: neutral(中性)、sad(悲伤)、happy(高兴)、angry(生气)、fear(恐惧)、news(新闻)、story(故事)、radio(广播)、poetry(诗歌)、call(客服)、sajiao(撒娇)、disgusted(厌恶)、amaze(震惊)、peaceful(平静)、exciting(兴奋)、aojiao(傲娇)、jieshuo(解说)
示例值：neutral
                     * @param _emotionCategory 控制合成音频的情感，仅支持多情感音色使用。取值: neutral(中性)、sad(悲伤)、happy(高兴)、angry(生气)、fear(恐惧)、news(新闻)、story(故事)、radio(广播)、poetry(诗歌)、call(客服)、sajiao(撒娇)、disgusted(厌恶)、amaze(震惊)、peaceful(平静)、exciting(兴奋)、aojiao(傲娇)、jieshuo(解说)
示例值：neutral
                     * 
                     */
                    void SetEmotionCategory(const std::string& _emotionCategory);

                    /**
                     * 判断参数 EmotionCategory 是否已赋值
                     * @return EmotionCategory 是否已赋值
                     * 
                     */
                    bool EmotionCategoryHasBeenSet() const;

                    /**
                     * 获取控制合成音频情感程度，取值范围为[50,200],默认为100；只有EmotionCategory不为空时生效；
                     * @return EmotionIntensity 控制合成音频情感程度，取值范围为[50,200],默认为100；只有EmotionCategory不为空时生效；
                     * 
                     */
                    int64_t GetEmotionIntensity() const;

                    /**
                     * 设置控制合成音频情感程度，取值范围为[50,200],默认为100；只有EmotionCategory不为空时生效；
                     * @param _emotionIntensity 控制合成音频情感程度，取值范围为[50,200],默认为100；只有EmotionCategory不为空时生效；
                     * 
                     */
                    void SetEmotionIntensity(const int64_t& _emotionIntensity);

                    /**
                     * 判断参数 EmotionIntensity 是否已赋值
                     * @return EmotionIntensity 是否已赋值
                     * 
                     */
                    bool EmotionIntensityHasBeenSet() const;

                private:

                    /**
                     * 合成语音的源文本，按UTF-8编码统一计算。
中文最大支持150个汉字（全角标点符号算一个汉字）；英文最大支持500个字母（半角标点符号算一个字母）。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 一次请求对应一个SessionId，会原样返回，建议传入类似于uuid的字符串防止重复。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 音量大小，范围[-10，10]，对应音量大小。默认为0，代表正常音量，值越大音量越高。
                     */
                    double m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * 语速，范围：[-2，6]，分别对应不同语速：<li>-2代表0.6倍</li><li>-1代表0.8倍</li><li>0代表1.0倍（默认）</li><li>1代表1.2倍</li><li>2代表1.5倍</li><li>6代表2.5倍</li>如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。<br>参数值与实际语速转换，可参考[代码示例](https://sdk-1300466766.cos.ap-shanghai.myqcloud.com/sample/speed_sample.tar.gz)
                     */
                    double m_speed;
                    bool m_speedHasBeenSet;

                    /**
                     * 项目id，用户自定义，默认为0。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 模型类型，1-默认模型。
                     */
                    int64_t m_modelType;
                    bool m_modelTypeHasBeenSet;

                    /**
                     * 音色 ID，包括标准音色、精品音色、大模型音色与基础版复刻音色。不同音色价格有差异，详情请参见[购买指南](https://cloud.tencent.com/document/product/1073/34112)。完整的音色 ID 列表请参见[音色列表](https://cloud.tencent.com/document/product/1073/92668)。

                     */
                    int64_t m_voiceType;
                    bool m_voiceTypeHasBeenSet;

                    /**
                     * 一句话版声音复刻音色ID，使用一句话版声音复刻音色时需填写。【已废弃】
                     */
                    std::string m_fastVoiceType;
                    bool m_fastVoiceTypeHasBeenSet;

                    /**
                     * 主语言类型：<li>1-中文（默认）</li><li>2-英文</li><li>3-日文</li>
                     */
                    int64_t m_primaryLanguage;
                    bool m_primaryLanguageHasBeenSet;

                    /**
                     * 音频采样率：
<li>24000：24k（部分音色支持，请参见[音色列表](https://cloud.tencent.com/document/product/1073/92668)）</li>
<li>16000：16k（默认）</li>
<li>8000：8k</li>
                     */
                    uint64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 返回音频格式，可取值：wav（默认），mp3，pcm
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * 是否开启时间戳功能，默认为false。
                     */
                    bool m_enableSubtitle;
                    bool m_enableSubtitleHasBeenSet;

                    /**
                     * 断句敏感阈值，默认值为：0，取值范围：[0,1,2]。该值越大越不容易断句，模型会更倾向于仅按照标点符号断句。此参数建议不要随意调整，可能会影响合成效果。
                     */
                    uint64_t m_segmentRate;
                    bool m_segmentRateHasBeenSet;

                    /**
                     * 控制合成音频的情感，仅支持多情感音色使用。取值: neutral(中性)、sad(悲伤)、happy(高兴)、angry(生气)、fear(恐惧)、news(新闻)、story(故事)、radio(广播)、poetry(诗歌)、call(客服)、sajiao(撒娇)、disgusted(厌恶)、amaze(震惊)、peaceful(平静)、exciting(兴奋)、aojiao(傲娇)、jieshuo(解说)
示例值：neutral
                     */
                    std::string m_emotionCategory;
                    bool m_emotionCategoryHasBeenSet;

                    /**
                     * 控制合成音频情感程度，取值范围为[50,200],默认为100；只有EmotionCategory不为空时生效；
                     */
                    int64_t m_emotionIntensity;
                    bool m_emotionIntensityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TTS_V20190823_MODEL_TEXTTOVOICEREQUEST_H_

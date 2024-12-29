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

#ifndef TENCENTCLOUD_TTS_V20190823_MODEL_CREATETTSTASKREQUEST_H_
#define TENCENTCLOUD_TTS_V20190823_MODEL_CREATETTSTASKREQUEST_H_

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
                * CreateTtsTask请求参数结构体
                */
                class CreateTtsTaskRequest : public AbstractModel
                {
                public:
                    CreateTtsTaskRequest();
                    ~CreateTtsTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取合成语音的源文本，按UTF-8编码统一计算，最多支持10万字符
                     * @return Text 合成语音的源文本，按UTF-8编码统一计算，最多支持10万字符
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置合成语音的源文本，按UTF-8编码统一计算，最多支持10万字符
                     * @param _text 合成语音的源文本，按UTF-8编码统一计算，最多支持10万字符
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
                     * 获取音色 ID，包括标准音色与精品音色，精品音色拟真度更高，价格不同于标准音色，请参见[购买指南](https://cloud.tencent.com/document/product/1073/34112)。完整的音色 ID 列表请参见[音色列表](https://cloud.tencent.com/document/product/1073/92668)。
                     * @return VoiceType 音色 ID，包括标准音色与精品音色，精品音色拟真度更高，价格不同于标准音色，请参见[购买指南](https://cloud.tencent.com/document/product/1073/34112)。完整的音色 ID 列表请参见[音色列表](https://cloud.tencent.com/document/product/1073/92668)。
                     * 
                     */
                    int64_t GetVoiceType() const;

                    /**
                     * 设置音色 ID，包括标准音色与精品音色，精品音色拟真度更高，价格不同于标准音色，请参见[购买指南](https://cloud.tencent.com/document/product/1073/34112)。完整的音色 ID 列表请参见[音色列表](https://cloud.tencent.com/document/product/1073/92668)。
                     * @param _voiceType 音色 ID，包括标准音色与精品音色，精品音色拟真度更高，价格不同于标准音色，请参见[购买指南](https://cloud.tencent.com/document/product/1073/34112)。完整的音色 ID 列表请参见[音色列表](https://cloud.tencent.com/document/product/1073/92668)。
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
                     * 获取返回音频格式，可取值：mp3（默认），wav，pcm
                     * @return Codec 返回音频格式，可取值：mp3（默认），wav，pcm
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置返回音频格式，可取值：mp3（默认），wav，pcm
                     * @param _codec 返回音频格式，可取值：mp3（默认），wav，pcm
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
                     * 获取回调 URL，用户自行搭建的用于接收识别结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。[回调说明](https://cloud.tencent.com/document/product/1073/55746)
                     * @return CallbackUrl 回调 URL，用户自行搭建的用于接收识别结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。[回调说明](https://cloud.tencent.com/document/product/1073/55746)
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调 URL，用户自行搭建的用于接收识别结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。[回调说明](https://cloud.tencent.com/document/product/1073/55746)
                     * @param _callbackUrl 回调 URL，用户自行搭建的用于接收识别结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。[回调说明](https://cloud.tencent.com/document/product/1073/55746)
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

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
                     * 获取旁白与对白文本解析，分别合成相应风格（仅适用于旁对白音色10510000、100510000），默认 false
                     * @return VoiceoverDialogueSplit 旁白与对白文本解析，分别合成相应风格（仅适用于旁对白音色10510000、100510000），默认 false
                     * 
                     */
                    bool GetVoiceoverDialogueSplit() const;

                    /**
                     * 设置旁白与对白文本解析，分别合成相应风格（仅适用于旁对白音色10510000、100510000），默认 false
                     * @param _voiceoverDialogueSplit 旁白与对白文本解析，分别合成相应风格（仅适用于旁对白音色10510000、100510000），默认 false
                     * 
                     */
                    void SetVoiceoverDialogueSplit(const bool& _voiceoverDialogueSplit);

                    /**
                     * 判断参数 VoiceoverDialogueSplit 是否已赋值
                     * @return VoiceoverDialogueSplit 是否已赋值
                     * 
                     */
                    bool VoiceoverDialogueSplitHasBeenSet() const;

                    /**
                     * 获取控制合成音频的情感，仅支持多情感音色使用。取值: neutral(中性)、sad(悲伤)、happy(高兴)、angry(生气)、fear(恐惧)、news(新闻)、story(故事)、radio(广播)、poetry(诗歌)、call(客服)、sajiao(撒娇)、disgusted(厌恶)、amaze(震惊)、peaceful(平静)、exciting(兴奋)、aojiao(傲娇)、jieshuo(解说)
                     * @return EmotionCategory 控制合成音频的情感，仅支持多情感音色使用。取值: neutral(中性)、sad(悲伤)、happy(高兴)、angry(生气)、fear(恐惧)、news(新闻)、story(故事)、radio(广播)、poetry(诗歌)、call(客服)、sajiao(撒娇)、disgusted(厌恶)、amaze(震惊)、peaceful(平静)、exciting(兴奋)、aojiao(傲娇)、jieshuo(解说)
                     * 
                     */
                    std::string GetEmotionCategory() const;

                    /**
                     * 设置控制合成音频的情感，仅支持多情感音色使用。取值: neutral(中性)、sad(悲伤)、happy(高兴)、angry(生气)、fear(恐惧)、news(新闻)、story(故事)、radio(广播)、poetry(诗歌)、call(客服)、sajiao(撒娇)、disgusted(厌恶)、amaze(震惊)、peaceful(平静)、exciting(兴奋)、aojiao(傲娇)、jieshuo(解说)
                     * @param _emotionCategory 控制合成音频的情感，仅支持多情感音色使用。取值: neutral(中性)、sad(悲伤)、happy(高兴)、angry(生气)、fear(恐惧)、news(新闻)、story(故事)、radio(广播)、poetry(诗歌)、call(客服)、sajiao(撒娇)、disgusted(厌恶)、amaze(震惊)、peaceful(平静)、exciting(兴奋)、aojiao(傲娇)、jieshuo(解说)
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
                     * 获取控制合成音频情感程度，取值范围为[50,200],默认为100；只有EmotionCategory不为空时生效。
                     * @return EmotionIntensity 控制合成音频情感程度，取值范围为[50,200],默认为100；只有EmotionCategory不为空时生效。
                     * 
                     */
                    int64_t GetEmotionIntensity() const;

                    /**
                     * 设置控制合成音频情感程度，取值范围为[50,200],默认为100；只有EmotionCategory不为空时生效。
                     * @param _emotionIntensity 控制合成音频情感程度，取值范围为[50,200],默认为100；只有EmotionCategory不为空时生效。
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
                     * 合成语音的源文本，按UTF-8编码统一计算，最多支持10万字符
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

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
                     * 音色 ID，包括标准音色与精品音色，精品音色拟真度更高，价格不同于标准音色，请参见[购买指南](https://cloud.tencent.com/document/product/1073/34112)。完整的音色 ID 列表请参见[音色列表](https://cloud.tencent.com/document/product/1073/92668)。
                     */
                    int64_t m_voiceType;
                    bool m_voiceTypeHasBeenSet;

                    /**
                     * 主语言类型：<li>1-中文（默认）</li><li>2-英文</li><li>3-日文</li>
                     */
                    int64_t m_primaryLanguage;
                    bool m_primaryLanguageHasBeenSet;

                    /**
                     * 音频采样率：<li>16000：16k（默认）</li><li>8000：8k</li>
                     */
                    uint64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 返回音频格式，可取值：mp3（默认），wav，pcm
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * 回调 URL，用户自行搭建的用于接收识别结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。[回调说明](https://cloud.tencent.com/document/product/1073/55746)
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 是否开启时间戳功能，默认为false。
                     */
                    bool m_enableSubtitle;
                    bool m_enableSubtitleHasBeenSet;

                    /**
                     * 旁白与对白文本解析，分别合成相应风格（仅适用于旁对白音色10510000、100510000），默认 false
                     */
                    bool m_voiceoverDialogueSplit;
                    bool m_voiceoverDialogueSplitHasBeenSet;

                    /**
                     * 控制合成音频的情感，仅支持多情感音色使用。取值: neutral(中性)、sad(悲伤)、happy(高兴)、angry(生气)、fear(恐惧)、news(新闻)、story(故事)、radio(广播)、poetry(诗歌)、call(客服)、sajiao(撒娇)、disgusted(厌恶)、amaze(震惊)、peaceful(平静)、exciting(兴奋)、aojiao(傲娇)、jieshuo(解说)
                     */
                    std::string m_emotionCategory;
                    bool m_emotionCategoryHasBeenSet;

                    /**
                     * 控制合成音频情感程度，取值范围为[50,200],默认为100；只有EmotionCategory不为空时生效。
                     */
                    int64_t m_emotionIntensity;
                    bool m_emotionIntensityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TTS_V20190823_MODEL_CREATETTSTASKREQUEST_H_

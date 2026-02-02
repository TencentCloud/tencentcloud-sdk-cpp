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
                     * 获取<p>合成语音的源文本，按UTF-8编码统一计算，最多支持10万字符</p>
                     * @return Text <p>合成语音的源文本，按UTF-8编码统一计算，最多支持10万字符</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>合成语音的源文本，按UTF-8编码统一计算，最多支持10万字符</p>
                     * @param _text <p>合成语音的源文本，按UTF-8编码统一计算，最多支持10万字符</p>
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
                     * 获取<p>音量大小，范围[-10，10]，对应音量大小。默认为0，代表正常音量，值越大音量越高。</p>
                     * @return Volume <p>音量大小，范围[-10，10]，对应音量大小。默认为0，代表正常音量，值越大音量越高。</p>
                     * 
                     */
                    double GetVolume() const;

                    /**
                     * 设置<p>音量大小，范围[-10，10]，对应音量大小。默认为0，代表正常音量，值越大音量越高。</p>
                     * @param _volume <p>音量大小，范围[-10，10]，对应音量大小。默认为0，代表正常音量，值越大音量越高。</p>
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
                     * 获取<p>语速，范围：[-2，6]，分别对应不同语速：<li>-2代表0.6倍</li><li>-1代表0.8倍</li><li>0代表1.0倍（默认）</li><li>1代表1.2倍</li><li>2代表1.5倍</li><li>6代表2.5倍</li>如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。<br>参数值与实际语速转换，可参考<a href="https://sdk-1300466766.cos.ap-shanghai.myqcloud.com/sample/speed_sample.tar.gz">代码示例</a></p>
                     * @return Speed <p>语速，范围：[-2，6]，分别对应不同语速：<li>-2代表0.6倍</li><li>-1代表0.8倍</li><li>0代表1.0倍（默认）</li><li>1代表1.2倍</li><li>2代表1.5倍</li><li>6代表2.5倍</li>如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。<br>参数值与实际语速转换，可参考<a href="https://sdk-1300466766.cos.ap-shanghai.myqcloud.com/sample/speed_sample.tar.gz">代码示例</a></p>
                     * 
                     */
                    double GetSpeed() const;

                    /**
                     * 设置<p>语速，范围：[-2，6]，分别对应不同语速：<li>-2代表0.6倍</li><li>-1代表0.8倍</li><li>0代表1.0倍（默认）</li><li>1代表1.2倍</li><li>2代表1.5倍</li><li>6代表2.5倍</li>如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。<br>参数值与实际语速转换，可参考<a href="https://sdk-1300466766.cos.ap-shanghai.myqcloud.com/sample/speed_sample.tar.gz">代码示例</a></p>
                     * @param _speed <p>语速，范围：[-2，6]，分别对应不同语速：<li>-2代表0.6倍</li><li>-1代表0.8倍</li><li>0代表1.0倍（默认）</li><li>1代表1.2倍</li><li>2代表1.5倍</li><li>6代表2.5倍</li>如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。<br>参数值与实际语速转换，可参考<a href="https://sdk-1300466766.cos.ap-shanghai.myqcloud.com/sample/speed_sample.tar.gz">代码示例</a></p>
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
                     * 获取<p>项目id，用户自定义，默认为0。</p>
                     * @return ProjectId <p>项目id，用户自定义，默认为0。</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目id，用户自定义，默认为0。</p>
                     * @param _projectId <p>项目id，用户自定义，默认为0。</p>
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
                     * 获取<p>模型类型，1-默认模型。</p>
                     * @return ModelType <p>模型类型，1-默认模型。</p>
                     * 
                     */
                    int64_t GetModelType() const;

                    /**
                     * 设置<p>模型类型，1-默认模型。</p>
                     * @param _modelType <p>模型类型，1-默认模型。</p>
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
                     * 获取<p>音色 ID，价格请参见<a href="https://cloud.tencent.com/document/product/1073/34112">购买指南</a>。完整的音色 ID 列表请参见<a href="https://cloud.tencent.com/document/product/1073/92668">音色列表</a>。</p>
                     * @return VoiceType <p>音色 ID，价格请参见<a href="https://cloud.tencent.com/document/product/1073/34112">购买指南</a>。完整的音色 ID 列表请参见<a href="https://cloud.tencent.com/document/product/1073/92668">音色列表</a>。</p>
                     * 
                     */
                    int64_t GetVoiceType() const;

                    /**
                     * 设置<p>音色 ID，价格请参见<a href="https://cloud.tencent.com/document/product/1073/34112">购买指南</a>。完整的音色 ID 列表请参见<a href="https://cloud.tencent.com/document/product/1073/92668">音色列表</a>。</p>
                     * @param _voiceType <p>音色 ID，价格请参见<a href="https://cloud.tencent.com/document/product/1073/34112">购买指南</a>。完整的音色 ID 列表请参见<a href="https://cloud.tencent.com/document/product/1073/92668">音色列表</a>。</p>
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
                     * 获取<p>主语言类型：<li>1-中文（默认）</li><li>2-英文</li></p>
                     * @return PrimaryLanguage <p>主语言类型：<li>1-中文（默认）</li><li>2-英文</li></p>
                     * 
                     */
                    int64_t GetPrimaryLanguage() const;

                    /**
                     * 设置<p>主语言类型：<li>1-中文（默认）</li><li>2-英文</li></p>
                     * @param _primaryLanguage <p>主语言类型：<li>1-中文（默认）</li><li>2-英文</li></p>
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
                     * 获取<p>音频采样率：<li>16000：16k（默认）</li><li>8000：8k</li></p>
                     * @return SampleRate <p>音频采样率：<li>16000：16k（默认）</li><li>8000：8k</li></p>
                     * 
                     */
                    uint64_t GetSampleRate() const;

                    /**
                     * 设置<p>音频采样率：<li>16000：16k（默认）</li><li>8000：8k</li></p>
                     * @param _sampleRate <p>音频采样率：<li>16000：16k（默认）</li><li>8000：8k</li></p>
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
                     * 获取<p>返回音频格式，可取值：mp3（默认），wav，pcm</p>
                     * @return Codec <p>返回音频格式，可取值：mp3（默认），wav，pcm</p>
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置<p>返回音频格式，可取值：mp3（默认），wav，pcm</p>
                     * @param _codec <p>返回音频格式，可取值：mp3（默认），wav，pcm</p>
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
                     * 获取<p>回调 URL，用户自行搭建的用于接收识别结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。<a href="https://cloud.tencent.com/document/product/1073/55746">回调说明</a></p>
                     * @return CallbackUrl <p>回调 URL，用户自行搭建的用于接收识别结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。<a href="https://cloud.tencent.com/document/product/1073/55746">回调说明</a></p>
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置<p>回调 URL，用户自行搭建的用于接收识别结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。<a href="https://cloud.tencent.com/document/product/1073/55746">回调说明</a></p>
                     * @param _callbackUrl <p>回调 URL，用户自行搭建的用于接收识别结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。<a href="https://cloud.tencent.com/document/product/1073/55746">回调说明</a></p>
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
                     * 获取<p>是否开启时间戳功能，默认为false。</p>
                     * @return EnableSubtitle <p>是否开启时间戳功能，默认为false。</p>
                     * 
                     */
                    bool GetEnableSubtitle() const;

                    /**
                     * 设置<p>是否开启时间戳功能，默认为false。</p>
                     * @param _enableSubtitle <p>是否开启时间戳功能，默认为false。</p>
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
                     * 获取<p>旁白与对白文本解析，分别合成相应风格（仅适用于旁对白音色10510000、100510000），默认 false</p>
                     * @return VoiceoverDialogueSplit <p>旁白与对白文本解析，分别合成相应风格（仅适用于旁对白音色10510000、100510000），默认 false</p>
                     * 
                     */
                    bool GetVoiceoverDialogueSplit() const;

                    /**
                     * 设置<p>旁白与对白文本解析，分别合成相应风格（仅适用于旁对白音色10510000、100510000），默认 false</p>
                     * @param _voiceoverDialogueSplit <p>旁白与对白文本解析，分别合成相应风格（仅适用于旁对白音色10510000、100510000），默认 false</p>
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
                     * 获取<p>控制合成音频的情感，仅支持多情感音色使用。取值: neutral(中性)、sad(悲伤)、happy(高兴)、angry(生气)、fear(恐惧)、news(新闻)、story(故事)、radio(广播)、poetry(诗歌)、call(客服)、sajiao(撒娇)、disgusted(厌恶)、amaze(震惊)、peaceful(平静)、exciting(兴奋)、aojiao(傲娇)、jieshuo(解说)</p>
                     * @return EmotionCategory <p>控制合成音频的情感，仅支持多情感音色使用。取值: neutral(中性)、sad(悲伤)、happy(高兴)、angry(生气)、fear(恐惧)、news(新闻)、story(故事)、radio(广播)、poetry(诗歌)、call(客服)、sajiao(撒娇)、disgusted(厌恶)、amaze(震惊)、peaceful(平静)、exciting(兴奋)、aojiao(傲娇)、jieshuo(解说)</p>
                     * 
                     */
                    std::string GetEmotionCategory() const;

                    /**
                     * 设置<p>控制合成音频的情感，仅支持多情感音色使用。取值: neutral(中性)、sad(悲伤)、happy(高兴)、angry(生气)、fear(恐惧)、news(新闻)、story(故事)、radio(广播)、poetry(诗歌)、call(客服)、sajiao(撒娇)、disgusted(厌恶)、amaze(震惊)、peaceful(平静)、exciting(兴奋)、aojiao(傲娇)、jieshuo(解说)</p>
                     * @param _emotionCategory <p>控制合成音频的情感，仅支持多情感音色使用。取值: neutral(中性)、sad(悲伤)、happy(高兴)、angry(生气)、fear(恐惧)、news(新闻)、story(故事)、radio(广播)、poetry(诗歌)、call(客服)、sajiao(撒娇)、disgusted(厌恶)、amaze(震惊)、peaceful(平静)、exciting(兴奋)、aojiao(傲娇)、jieshuo(解说)</p>
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
                     * 获取<p>控制合成音频情感程度，取值范围为[50,200],默认为100；只有EmotionCategory不为空时生效。</p>
                     * @return EmotionIntensity <p>控制合成音频情感程度，取值范围为[50,200],默认为100；只有EmotionCategory不为空时生效。</p>
                     * 
                     */
                    int64_t GetEmotionIntensity() const;

                    /**
                     * 设置<p>控制合成音频情感程度，取值范围为[50,200],默认为100；只有EmotionCategory不为空时生效。</p>
                     * @param _emotionIntensity <p>控制合成音频情感程度，取值范围为[50,200],默认为100；只有EmotionCategory不为空时生效。</p>
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
                     * <p>合成语音的源文本，按UTF-8编码统一计算，最多支持10万字符</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>音量大小，范围[-10，10]，对应音量大小。默认为0，代表正常音量，值越大音量越高。</p>
                     */
                    double m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * <p>语速，范围：[-2，6]，分别对应不同语速：<li>-2代表0.6倍</li><li>-1代表0.8倍</li><li>0代表1.0倍（默认）</li><li>1代表1.2倍</li><li>2代表1.5倍</li><li>6代表2.5倍</li>如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。<br>参数值与实际语速转换，可参考<a href="https://sdk-1300466766.cos.ap-shanghai.myqcloud.com/sample/speed_sample.tar.gz">代码示例</a></p>
                     */
                    double m_speed;
                    bool m_speedHasBeenSet;

                    /**
                     * <p>项目id，用户自定义，默认为0。</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>模型类型，1-默认模型。</p>
                     */
                    int64_t m_modelType;
                    bool m_modelTypeHasBeenSet;

                    /**
                     * <p>音色 ID，价格请参见<a href="https://cloud.tencent.com/document/product/1073/34112">购买指南</a>。完整的音色 ID 列表请参见<a href="https://cloud.tencent.com/document/product/1073/92668">音色列表</a>。</p>
                     */
                    int64_t m_voiceType;
                    bool m_voiceTypeHasBeenSet;

                    /**
                     * <p>主语言类型：<li>1-中文（默认）</li><li>2-英文</li></p>
                     */
                    int64_t m_primaryLanguage;
                    bool m_primaryLanguageHasBeenSet;

                    /**
                     * <p>音频采样率：<li>16000：16k（默认）</li><li>8000：8k</li></p>
                     */
                    uint64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * <p>返回音频格式，可取值：mp3（默认），wav，pcm</p>
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * <p>回调 URL，用户自行搭建的用于接收识别结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。<a href="https://cloud.tencent.com/document/product/1073/55746">回调说明</a></p>
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * <p>是否开启时间戳功能，默认为false。</p>
                     */
                    bool m_enableSubtitle;
                    bool m_enableSubtitleHasBeenSet;

                    /**
                     * <p>旁白与对白文本解析，分别合成相应风格（仅适用于旁对白音色10510000、100510000），默认 false</p>
                     */
                    bool m_voiceoverDialogueSplit;
                    bool m_voiceoverDialogueSplitHasBeenSet;

                    /**
                     * <p>控制合成音频的情感，仅支持多情感音色使用。取值: neutral(中性)、sad(悲伤)、happy(高兴)、angry(生气)、fear(恐惧)、news(新闻)、story(故事)、radio(广播)、poetry(诗歌)、call(客服)、sajiao(撒娇)、disgusted(厌恶)、amaze(震惊)、peaceful(平静)、exciting(兴奋)、aojiao(傲娇)、jieshuo(解说)</p>
                     */
                    std::string m_emotionCategory;
                    bool m_emotionCategoryHasBeenSet;

                    /**
                     * <p>控制合成音频情感程度，取值范围为[50,200],默认为100；只有EmotionCategory不为空时生效。</p>
                     */
                    int64_t m_emotionIntensity;
                    bool m_emotionIntensityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TTS_V20190823_MODEL_CREATETTSTASKREQUEST_H_

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
                     */
                    std::string GetText() const;

                    /**
                     * 设置合成语音的源文本，按UTF-8编码统一计算，最多支持10万字符
                     * @param Text 合成语音的源文本，按UTF-8编码统一计算，最多支持10万字符
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取模型类型，1-默认模型。
                     * @return ModelType 模型类型，1-默认模型。
                     */
                    int64_t GetModelType() const;

                    /**
                     * 设置模型类型，1-默认模型。
                     * @param ModelType 模型类型，1-默认模型。
                     */
                    void SetModelType(const int64_t& _modelType);

                    /**
                     * 判断参数 ModelType 是否已赋值
                     * @return ModelType 是否已赋值
                     */
                    bool ModelTypeHasBeenSet() const;

                    /**
                     * 获取音量大小，范围：[0，10]，分别对应11个等级的音量，默认为0，代表正常音量。没有静音选项。
输入除以上整数之外的其他参数不生效，按默认值处理。
                     * @return Volume 音量大小，范围：[0，10]，分别对应11个等级的音量，默认为0，代表正常音量。没有静音选项。
输入除以上整数之外的其他参数不生效，按默认值处理。
                     */
                    double GetVolume() const;

                    /**
                     * 设置音量大小，范围：[0，10]，分别对应11个等级的音量，默认为0，代表正常音量。没有静音选项。
输入除以上整数之外的其他参数不生效，按默认值处理。
                     * @param Volume 音量大小，范围：[0，10]，分别对应11个等级的音量，默认为0，代表正常音量。没有静音选项。
输入除以上整数之外的其他参数不生效，按默认值处理。
                     */
                    void SetVolume(const double& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取语速，范围：[-2，2]，分别对应不同语速：<li>-2代表0.6倍</li><li>-1代表0.8倍</li><li>0代表1.0倍（默认）</li><li>1代表1.2倍</li><li>2代表1.5倍</li>如果需要更细化的语速，可以保留小数点后一位，例如0.5 1.1 1.8等。<br>
                     * @return Speed 语速，范围：[-2，2]，分别对应不同语速：<li>-2代表0.6倍</li><li>-1代表0.8倍</li><li>0代表1.0倍（默认）</li><li>1代表1.2倍</li><li>2代表1.5倍</li>如果需要更细化的语速，可以保留小数点后一位，例如0.5 1.1 1.8等。<br>
                     */
                    double GetSpeed() const;

                    /**
                     * 设置语速，范围：[-2，2]，分别对应不同语速：<li>-2代表0.6倍</li><li>-1代表0.8倍</li><li>0代表1.0倍（默认）</li><li>1代表1.2倍</li><li>2代表1.5倍</li>如果需要更细化的语速，可以保留小数点后一位，例如0.5 1.1 1.8等。<br>
                     * @param Speed 语速，范围：[-2，2]，分别对应不同语速：<li>-2代表0.6倍</li><li>-1代表0.8倍</li><li>0代表1.0倍（默认）</li><li>1代表1.2倍</li><li>2代表1.5倍</li>如果需要更细化的语速，可以保留小数点后一位，例如0.5 1.1 1.8等。<br>
                     */
                    void SetSpeed(const double& _speed);

                    /**
                     * 判断参数 Speed 是否已赋值
                     * @return Speed 是否已赋值
                     */
                    bool SpeedHasBeenSet() const;

                    /**
                     * 获取项目id，用户自定义，默认为0。
                     * @return ProjectId 项目id，用户自定义，默认为0。
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目id，用户自定义，默认为0。
                     * @param ProjectId 项目id，用户自定义，默认为0。
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取标准音色<li>1001-智瑜，情感女声(默认)</li><li>1002-智聆，通用女声</li><li>1003-智美，客服女声</li><li>1006-智云，通用男声</li><li>1050-WeJack，英文男声</li><li>1051-WeRose，英文女声</li>精品音色<br>精品音色拟真度更高，价格不同于普通音色，查看[购买指南](https://cloud.tencent.com/product/tts/pricing)<br><li>100510000-智逍遥，旁对白阅读风格</li><li>101001-智瑜，情感女声（精品）</li><li>101002-智聆，通用女声（精品）</li><li>101003-智美，客服女声（精品）</li><li>101004-智云，通用男声</li><li>101005-智莉，通用女声</li><li>101006-智言，助手女声</li><li>101007-智娜，客服女声</li><li>101008-智琪，客服女声</li><li>101009-智芸，知性女声</li><li>101010-智华，通用男声</li><li>101011-智燕，新闻女声</li><li>101012-智丹，新闻女声</li><li>101013-智辉，新闻男声</li><li>101014-智宁，新闻男声</li><li>101015-智萌，男童声</li><li>101016-智甜，女童声</li><li>101017-智蓉，情感女声</li><li>101018-智靖，情感男声</li><li>101019-智彤，粤语女声</li><li>101050-WeJack，英文男声（精品）</li><li>101051-WeRose，英文女声（精品）</li>
                     * @return VoiceType 标准音色<li>1001-智瑜，情感女声(默认)</li><li>1002-智聆，通用女声</li><li>1003-智美，客服女声</li><li>1006-智云，通用男声</li><li>1050-WeJack，英文男声</li><li>1051-WeRose，英文女声</li>精品音色<br>精品音色拟真度更高，价格不同于普通音色，查看[购买指南](https://cloud.tencent.com/product/tts/pricing)<br><li>100510000-智逍遥，旁对白阅读风格</li><li>101001-智瑜，情感女声（精品）</li><li>101002-智聆，通用女声（精品）</li><li>101003-智美，客服女声（精品）</li><li>101004-智云，通用男声</li><li>101005-智莉，通用女声</li><li>101006-智言，助手女声</li><li>101007-智娜，客服女声</li><li>101008-智琪，客服女声</li><li>101009-智芸，知性女声</li><li>101010-智华，通用男声</li><li>101011-智燕，新闻女声</li><li>101012-智丹，新闻女声</li><li>101013-智辉，新闻男声</li><li>101014-智宁，新闻男声</li><li>101015-智萌，男童声</li><li>101016-智甜，女童声</li><li>101017-智蓉，情感女声</li><li>101018-智靖，情感男声</li><li>101019-智彤，粤语女声</li><li>101050-WeJack，英文男声（精品）</li><li>101051-WeRose，英文女声（精品）</li>
                     */
                    int64_t GetVoiceType() const;

                    /**
                     * 设置标准音色<li>1001-智瑜，情感女声(默认)</li><li>1002-智聆，通用女声</li><li>1003-智美，客服女声</li><li>1006-智云，通用男声</li><li>1050-WeJack，英文男声</li><li>1051-WeRose，英文女声</li>精品音色<br>精品音色拟真度更高，价格不同于普通音色，查看[购买指南](https://cloud.tencent.com/product/tts/pricing)<br><li>100510000-智逍遥，旁对白阅读风格</li><li>101001-智瑜，情感女声（精品）</li><li>101002-智聆，通用女声（精品）</li><li>101003-智美，客服女声（精品）</li><li>101004-智云，通用男声</li><li>101005-智莉，通用女声</li><li>101006-智言，助手女声</li><li>101007-智娜，客服女声</li><li>101008-智琪，客服女声</li><li>101009-智芸，知性女声</li><li>101010-智华，通用男声</li><li>101011-智燕，新闻女声</li><li>101012-智丹，新闻女声</li><li>101013-智辉，新闻男声</li><li>101014-智宁，新闻男声</li><li>101015-智萌，男童声</li><li>101016-智甜，女童声</li><li>101017-智蓉，情感女声</li><li>101018-智靖，情感男声</li><li>101019-智彤，粤语女声</li><li>101050-WeJack，英文男声（精品）</li><li>101051-WeRose，英文女声（精品）</li>
                     * @param VoiceType 标准音色<li>1001-智瑜，情感女声(默认)</li><li>1002-智聆，通用女声</li><li>1003-智美，客服女声</li><li>1006-智云，通用男声</li><li>1050-WeJack，英文男声</li><li>1051-WeRose，英文女声</li>精品音色<br>精品音色拟真度更高，价格不同于普通音色，查看[购买指南](https://cloud.tencent.com/product/tts/pricing)<br><li>100510000-智逍遥，旁对白阅读风格</li><li>101001-智瑜，情感女声（精品）</li><li>101002-智聆，通用女声（精品）</li><li>101003-智美，客服女声（精品）</li><li>101004-智云，通用男声</li><li>101005-智莉，通用女声</li><li>101006-智言，助手女声</li><li>101007-智娜，客服女声</li><li>101008-智琪，客服女声</li><li>101009-智芸，知性女声</li><li>101010-智华，通用男声</li><li>101011-智燕，新闻女声</li><li>101012-智丹，新闻女声</li><li>101013-智辉，新闻男声</li><li>101014-智宁，新闻男声</li><li>101015-智萌，男童声</li><li>101016-智甜，女童声</li><li>101017-智蓉，情感女声</li><li>101018-智靖，情感男声</li><li>101019-智彤，粤语女声</li><li>101050-WeJack，英文男声（精品）</li><li>101051-WeRose，英文女声（精品）</li>
                     */
                    void SetVoiceType(const int64_t& _voiceType);

                    /**
                     * 判断参数 VoiceType 是否已赋值
                     * @return VoiceType 是否已赋值
                     */
                    bool VoiceTypeHasBeenSet() const;

                    /**
                     * 获取主语言类型：<li>1-中文（默认）</li><li>2-英文</li>
                     * @return PrimaryLanguage 主语言类型：<li>1-中文（默认）</li><li>2-英文</li>
                     */
                    int64_t GetPrimaryLanguage() const;

                    /**
                     * 设置主语言类型：<li>1-中文（默认）</li><li>2-英文</li>
                     * @param PrimaryLanguage 主语言类型：<li>1-中文（默认）</li><li>2-英文</li>
                     */
                    void SetPrimaryLanguage(const int64_t& _primaryLanguage);

                    /**
                     * 判断参数 PrimaryLanguage 是否已赋值
                     * @return PrimaryLanguage 是否已赋值
                     */
                    bool PrimaryLanguageHasBeenSet() const;

                    /**
                     * 获取音频采样率：<li>16000：16k（默认）</li><li>8000：8k</li>
                     * @return SampleRate 音频采样率：<li>16000：16k（默认）</li><li>8000：8k</li>
                     */
                    uint64_t GetSampleRate() const;

                    /**
                     * 设置音频采样率：<li>16000：16k（默认）</li><li>8000：8k</li>
                     * @param SampleRate 音频采样率：<li>16000：16k（默认）</li><li>8000：8k</li>
                     */
                    void SetSampleRate(const uint64_t& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取返回音频格式，可取值：mp3（默认），wav，pcm
                     * @return Codec 返回音频格式，可取值：mp3（默认），wav，pcm
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置返回音频格式，可取值：mp3（默认），wav，pcm
                     * @param Codec 返回音频格式，可取值：mp3（默认），wav，pcm
                     */
                    void SetCodec(const std::string& _codec);

                    /**
                     * 判断参数 Codec 是否已赋值
                     * @return Codec 是否已赋值
                     */
                    bool CodecHasBeenSet() const;

                    /**
                     * 获取回调 URL，用户自行搭建的用于接收识别结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。[回调说明](https://cloud.tencent.com/document/product/1073/55746)
                     * @return CallbackUrl 回调 URL，用户自行搭建的用于接收识别结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。[回调说明](https://cloud.tencent.com/document/product/1073/55746)
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调 URL，用户自行搭建的用于接收识别结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。[回调说明](https://cloud.tencent.com/document/product/1073/55746)
                     * @param CallbackUrl 回调 URL，用户自行搭建的用于接收识别结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。[回调说明](https://cloud.tencent.com/document/product/1073/55746)
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取旁白与对白文本解析，分别合成相应风格（仅适用于旁对白音色），默认 false
                     * @return VoiceoverDialogueSplit 旁白与对白文本解析，分别合成相应风格（仅适用于旁对白音色），默认 false
                     */
                    bool GetVoiceoverDialogueSplit() const;

                    /**
                     * 设置旁白与对白文本解析，分别合成相应风格（仅适用于旁对白音色），默认 false
                     * @param VoiceoverDialogueSplit 旁白与对白文本解析，分别合成相应风格（仅适用于旁对白音色），默认 false
                     */
                    void SetVoiceoverDialogueSplit(const bool& _voiceoverDialogueSplit);

                    /**
                     * 判断参数 VoiceoverDialogueSplit 是否已赋值
                     * @return VoiceoverDialogueSplit 是否已赋值
                     */
                    bool VoiceoverDialogueSplitHasBeenSet() const;

                private:

                    /**
                     * 合成语音的源文本，按UTF-8编码统一计算，最多支持10万字符
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

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
                     * 语速，范围：[-2，2]，分别对应不同语速：<li>-2代表0.6倍</li><li>-1代表0.8倍</li><li>0代表1.0倍（默认）</li><li>1代表1.2倍</li><li>2代表1.5倍</li>如果需要更细化的语速，可以保留小数点后一位，例如0.5 1.1 1.8等。<br>
                     */
                    double m_speed;
                    bool m_speedHasBeenSet;

                    /**
                     * 项目id，用户自定义，默认为0。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 标准音色<li>1001-智瑜，情感女声(默认)</li><li>1002-智聆，通用女声</li><li>1003-智美，客服女声</li><li>1006-智云，通用男声</li><li>1050-WeJack，英文男声</li><li>1051-WeRose，英文女声</li>精品音色<br>精品音色拟真度更高，价格不同于普通音色，查看[购买指南](https://cloud.tencent.com/product/tts/pricing)<br><li>100510000-智逍遥，旁对白阅读风格</li><li>101001-智瑜，情感女声（精品）</li><li>101002-智聆，通用女声（精品）</li><li>101003-智美，客服女声（精品）</li><li>101004-智云，通用男声</li><li>101005-智莉，通用女声</li><li>101006-智言，助手女声</li><li>101007-智娜，客服女声</li><li>101008-智琪，客服女声</li><li>101009-智芸，知性女声</li><li>101010-智华，通用男声</li><li>101011-智燕，新闻女声</li><li>101012-智丹，新闻女声</li><li>101013-智辉，新闻男声</li><li>101014-智宁，新闻男声</li><li>101015-智萌，男童声</li><li>101016-智甜，女童声</li><li>101017-智蓉，情感女声</li><li>101018-智靖，情感男声</li><li>101019-智彤，粤语女声</li><li>101050-WeJack，英文男声（精品）</li><li>101051-WeRose，英文女声（精品）</li>
                     */
                    int64_t m_voiceType;
                    bool m_voiceTypeHasBeenSet;

                    /**
                     * 主语言类型：<li>1-中文（默认）</li><li>2-英文</li>
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
                     * 旁白与对白文本解析，分别合成相应风格（仅适用于旁对白音色），默认 false
                     */
                    bool m_voiceoverDialogueSplit;
                    bool m_voiceoverDialogueSplitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TTS_V20190823_MODEL_CREATETTSTASKREQUEST_H_

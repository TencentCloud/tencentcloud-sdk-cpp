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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_AUDIOFORMAT_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_AUDIOFORMAT_H_

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
                * TTS音频输出的格式
                */
                class AudioFormat : public AbstractModel
                {
                public:
                    AudioFormat();
                    ~AudioFormat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>生成的音频格式，注意opus格式是ogg/opus编码</p><ul><li><p>TextToSpeechSSE 流式接口</p><p>支持 pcm,mp3,opus 默认: pcm</p></li><li><p>TextToSpeech 非流式接口</p><p>支持 pcm,wav,mp3,opus  默认: pcm</p></li><li><p>AsyncTextToSpeech<br>支持pcm,mp3,opus 默认: mp3</p></li></ul>
                     * @return Format <p>生成的音频格式，注意opus格式是ogg/opus编码</p><ul><li><p>TextToSpeechSSE 流式接口</p><p>支持 pcm,mp3,opus 默认: pcm</p></li><li><p>TextToSpeech 非流式接口</p><p>支持 pcm,wav,mp3,opus  默认: pcm</p></li><li><p>AsyncTextToSpeech<br>支持pcm,mp3,opus 默认: mp3</p></li></ul>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置<p>生成的音频格式，注意opus格式是ogg/opus编码</p><ul><li><p>TextToSpeechSSE 流式接口</p><p>支持 pcm,mp3,opus 默认: pcm</p></li><li><p>TextToSpeech 非流式接口</p><p>支持 pcm,wav,mp3,opus  默认: pcm</p></li><li><p>AsyncTextToSpeech<br>支持pcm,mp3,opus 默认: mp3</p></li></ul>
                     * @param _format <p>生成的音频格式，注意opus格式是ogg/opus编码</p><ul><li><p>TextToSpeechSSE 流式接口</p><p>支持 pcm,mp3,opus 默认: pcm</p></li><li><p>TextToSpeech 非流式接口</p><p>支持 pcm,wav,mp3,opus  默认: pcm</p></li><li><p>AsyncTextToSpeech<br>支持pcm,mp3,opus 默认: mp3</p></li></ul>
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取<p>生成的音频采样率，默认24000<br>可选</p><ul><li>16000</li><li>24000</li></ul>
                     * @return SampleRate <p>生成的音频采样率，默认24000<br>可选</p><ul><li>16000</li><li>24000</li></ul>
                     * 
                     */
                    uint64_t GetSampleRate() const;

                    /**
                     * 设置<p>生成的音频采样率，默认24000<br>可选</p><ul><li>16000</li><li>24000</li></ul>
                     * @param _sampleRate <p>生成的音频采样率，默认24000<br>可选</p><ul><li>16000</li><li>24000</li></ul>
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
                     * 获取<p>MP3 比特率 (kbps)，仅对 MP3 格式生效, 可以选： <code>64</code>, <code>128</code>, <code>192</code>, <code>256</code> ,  默认： <code>128</code></p>
                     * @return Bitrate <p>MP3 比特率 (kbps)，仅对 MP3 格式生效, 可以选： <code>64</code>, <code>128</code>, <code>192</code>, <code>256</code> ,  默认： <code>128</code></p>
                     * 
                     */
                    uint64_t GetBitrate() const;

                    /**
                     * 设置<p>MP3 比特率 (kbps)，仅对 MP3 格式生效, 可以选： <code>64</code>, <code>128</code>, <code>192</code>, <code>256</code> ,  默认： <code>128</code></p>
                     * @param _bitrate <p>MP3 比特率 (kbps)，仅对 MP3 格式生效, 可以选： <code>64</code>, <code>128</code>, <code>192</code>, <code>256</code> ,  默认： <code>128</code></p>
                     * 
                     */
                    void SetBitrate(const uint64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                private:

                    /**
                     * <p>生成的音频格式，注意opus格式是ogg/opus编码</p><ul><li><p>TextToSpeechSSE 流式接口</p><p>支持 pcm,mp3,opus 默认: pcm</p></li><li><p>TextToSpeech 非流式接口</p><p>支持 pcm,wav,mp3,opus  默认: pcm</p></li><li><p>AsyncTextToSpeech<br>支持pcm,mp3,opus 默认: mp3</p></li></ul>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * <p>生成的音频采样率，默认24000<br>可选</p><ul><li>16000</li><li>24000</li></ul>
                     */
                    uint64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * <p>MP3 比特率 (kbps)，仅对 MP3 格式生效, 可以选： <code>64</code>, <code>128</code>, <code>192</code>, <code>256</code> ,  默认： <code>128</code></p>
                     */
                    uint64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_AUDIOFORMAT_H_

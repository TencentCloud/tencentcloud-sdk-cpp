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

#ifndef TENCENTCLOUD_TSI_V20210325_MODEL_TTS_H_
#define TENCENTCLOUD_TSI_V20210325_MODEL_TTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsi
    {
        namespace V20210325
        {
            namespace Model
            {
                /**
                * 同传TTS请求参数
                */
                class TTS : public AbstractModel
                {
                public:
                    TTS();
                    ~TTS() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取返回音频格式，可取值：wav，mp3，pcm
                     * @return Codec 返回音频格式，可取值：wav，mp3，pcm
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置返回音频格式，可取值：wav，mp3，pcm
                     * @param _codec 返回音频格式，可取值：wav，mp3，pcm
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
                     * 获取音色 ID，只包括标准音色（注，日文只有一个固定音色）。
完整的音色 ID 列表请参见[音色列表](https://cloud.tencent.com/document/product/1073/92668)。
                     * @return VoiceType 音色 ID，只包括标准音色（注，日文只有一个固定音色）。
完整的音色 ID 列表请参见[音色列表](https://cloud.tencent.com/document/product/1073/92668)。
                     * 
                     */
                    uint64_t GetVoiceType() const;

                    /**
                     * 设置音色 ID，只包括标准音色（注，日文只有一个固定音色）。
完整的音色 ID 列表请参见[音色列表](https://cloud.tencent.com/document/product/1073/92668)。
                     * @param _voiceType 音色 ID，只包括标准音色（注，日文只有一个固定音色）。
完整的音色 ID 列表请参见[音色列表](https://cloud.tencent.com/document/product/1073/92668)。
                     * 
                     */
                    void SetVoiceType(const uint64_t& _voiceType);

                    /**
                     * 判断参数 VoiceType 是否已赋值
                     * @return VoiceType 是否已赋值
                     * 
                     */
                    bool VoiceTypeHasBeenSet() const;

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
                     * 获取语速，范围：[-2，6]，分别对应不同语速：

- -2代表0.6倍
- -1代表0.8倍
- 0代表1.0倍（默认）
- 1代表1.2倍
- 2代表1.5倍
- 6代表2.5倍

如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。
参数值与实际语速转换，可参考[代码示例](https://sdk-1300466766.cos.ap-shanghai.myqcloud.com/sample/speed_sample.tar.gz)
                     * @return Speed 语速，范围：[-2，6]，分别对应不同语速：

- -2代表0.6倍
- -1代表0.8倍
- 0代表1.0倍（默认）
- 1代表1.2倍
- 2代表1.5倍
- 6代表2.5倍

如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。
参数值与实际语速转换，可参考[代码示例](https://sdk-1300466766.cos.ap-shanghai.myqcloud.com/sample/speed_sample.tar.gz)
                     * 
                     */
                    double GetSpeed() const;

                    /**
                     * 设置语速，范围：[-2，6]，分别对应不同语速：

- -2代表0.6倍
- -1代表0.8倍
- 0代表1.0倍（默认）
- 1代表1.2倍
- 2代表1.5倍
- 6代表2.5倍

如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。
参数值与实际语速转换，可参考[代码示例](https://sdk-1300466766.cos.ap-shanghai.myqcloud.com/sample/speed_sample.tar.gz)
                     * @param _speed 语速，范围：[-2，6]，分别对应不同语速：

- -2代表0.6倍
- -1代表0.8倍
- 0代表1.0倍（默认）
- 1代表1.2倍
- 2代表1.5倍
- 6代表2.5倍

如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。
参数值与实际语速转换，可参考[代码示例](https://sdk-1300466766.cos.ap-shanghai.myqcloud.com/sample/speed_sample.tar.gz)
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
                     * 获取音频采样率：

- 16000：16k（默认）
- 8000：8k
                     * @return SampleRate 音频采样率：

- 16000：16k（默认）
- 8000：8k
                     * 
                     */
                    uint64_t GetSampleRate() const;

                    /**
                     * 设置音频采样率：

- 16000：16k（默认）
- 8000：8k
                     * @param _sampleRate 音频采样率：

- 16000：16k（默认）
- 8000：8k
                     * 
                     */
                    void SetSampleRate(const uint64_t& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     * 
                     */
                    bool SampleRateHasBeenSet() const;

                private:

                    /**
                     * 返回音频格式，可取值：wav，mp3，pcm
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * 音色 ID，只包括标准音色（注，日文只有一个固定音色）。
完整的音色 ID 列表请参见[音色列表](https://cloud.tencent.com/document/product/1073/92668)。
                     */
                    uint64_t m_voiceType;
                    bool m_voiceTypeHasBeenSet;

                    /**
                     * 音量大小，范围[-10，10]，对应音量大小。默认为0，代表正常音量，值越大音量越高。
                     */
                    double m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * 语速，范围：[-2，6]，分别对应不同语速：

- -2代表0.6倍
- -1代表0.8倍
- 0代表1.0倍（默认）
- 1代表1.2倍
- 2代表1.5倍
- 6代表2.5倍

如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。
参数值与实际语速转换，可参考[代码示例](https://sdk-1300466766.cos.ap-shanghai.myqcloud.com/sample/speed_sample.tar.gz)
                     */
                    double m_speed;
                    bool m_speedHasBeenSet;

                    /**
                     * 音频采样率：

- 16000：16k（默认）
- 8000：8k
                     */
                    uint64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSI_V20210325_MODEL_TTS_H_

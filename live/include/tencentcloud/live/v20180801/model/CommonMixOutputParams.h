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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXOUTPUTPARAMS_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXOUTPUTPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 通用混流输出参数。
                */
                class CommonMixOutputParams : public AbstractModel
                {
                public:
                    CommonMixOutputParams();
                    ~CommonMixOutputParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输出流名称。
                     * @return OutputStreamName 输出流名称。
                     * 
                     */
                    std::string GetOutputStreamName() const;

                    /**
                     * 设置输出流名称。
                     * @param _outputStreamName 输出流名称。
                     * 
                     */
                    void SetOutputStreamName(const std::string& _outputStreamName);

                    /**
                     * 判断参数 OutputStreamName 是否已赋值
                     * @return OutputStreamName 是否已赋值
                     * 
                     */
                    bool OutputStreamNameHasBeenSet() const;

                    /**
                     * 获取输出流类型，取值范围[0,1]。
不填默认为0。
当输出流为输入流 list 中的一条时，填写0。
当期望生成的混流结果成为一条新流时，该值填为1。
该值为1时，output_stream_id 不能出现在 input_stram_list 中，且直播后台中，不能存在相同 ID 的流。
                     * @return OutputStreamType 输出流类型，取值范围[0,1]。
不填默认为0。
当输出流为输入流 list 中的一条时，填写0。
当期望生成的混流结果成为一条新流时，该值填为1。
该值为1时，output_stream_id 不能出现在 input_stram_list 中，且直播后台中，不能存在相同 ID 的流。
                     * 
                     */
                    int64_t GetOutputStreamType() const;

                    /**
                     * 设置输出流类型，取值范围[0,1]。
不填默认为0。
当输出流为输入流 list 中的一条时，填写0。
当期望生成的混流结果成为一条新流时，该值填为1。
该值为1时，output_stream_id 不能出现在 input_stram_list 中，且直播后台中，不能存在相同 ID 的流。
                     * @param _outputStreamType 输出流类型，取值范围[0,1]。
不填默认为0。
当输出流为输入流 list 中的一条时，填写0。
当期望生成的混流结果成为一条新流时，该值填为1。
该值为1时，output_stream_id 不能出现在 input_stram_list 中，且直播后台中，不能存在相同 ID 的流。
                     * 
                     */
                    void SetOutputStreamType(const int64_t& _outputStreamType);

                    /**
                     * 判断参数 OutputStreamType 是否已赋值
                     * @return OutputStreamType 是否已赋值
                     * 
                     */
                    bool OutputStreamTypeHasBeenSet() const;

                    /**
                     * 获取输出流比特率。取值范围[1，10000]。
不填的情况下，系统会自动判断。
                     * @return OutputStreamBitRate 输出流比特率。取值范围[1，10000]。
不填的情况下，系统会自动判断。
                     * 
                     */
                    int64_t GetOutputStreamBitRate() const;

                    /**
                     * 设置输出流比特率。取值范围[1，10000]。
不填的情况下，系统会自动判断。
                     * @param _outputStreamBitRate 输出流比特率。取值范围[1，10000]。
不填的情况下，系统会自动判断。
                     * 
                     */
                    void SetOutputStreamBitRate(const int64_t& _outputStreamBitRate);

                    /**
                     * 判断参数 OutputStreamBitRate 是否已赋值
                     * @return OutputStreamBitRate 是否已赋值
                     * 
                     */
                    bool OutputStreamBitRateHasBeenSet() const;

                    /**
                     * 获取输出流GOP大小。取值范围[1,10]。
不填的情况下，系统会自动判断。
                     * @return OutputStreamGop 输出流GOP大小。取值范围[1,10]。
不填的情况下，系统会自动判断。
                     * 
                     */
                    int64_t GetOutputStreamGop() const;

                    /**
                     * 设置输出流GOP大小。取值范围[1,10]。
不填的情况下，系统会自动判断。
                     * @param _outputStreamGop 输出流GOP大小。取值范围[1,10]。
不填的情况下，系统会自动判断。
                     * 
                     */
                    void SetOutputStreamGop(const int64_t& _outputStreamGop);

                    /**
                     * 判断参数 OutputStreamGop 是否已赋值
                     * @return OutputStreamGop 是否已赋值
                     * 
                     */
                    bool OutputStreamGopHasBeenSet() const;

                    /**
                     * 获取输出流帧率大小。取值范围[1,60]。
不填的情况下，系统会自动判断。
                     * @return OutputStreamFrameRate 输出流帧率大小。取值范围[1,60]。
不填的情况下，系统会自动判断。
                     * 
                     */
                    int64_t GetOutputStreamFrameRate() const;

                    /**
                     * 设置输出流帧率大小。取值范围[1,60]。
不填的情况下，系统会自动判断。
                     * @param _outputStreamFrameRate 输出流帧率大小。取值范围[1,60]。
不填的情况下，系统会自动判断。
                     * 
                     */
                    void SetOutputStreamFrameRate(const int64_t& _outputStreamFrameRate);

                    /**
                     * 判断参数 OutputStreamFrameRate 是否已赋值
                     * @return OutputStreamFrameRate 是否已赋值
                     * 
                     */
                    bool OutputStreamFrameRateHasBeenSet() const;

                    /**
                     * 获取输出流音频比特率。取值范围[1,500]
不填的情况下，系统会自动判断。
                     * @return OutputAudioBitRate 输出流音频比特率。取值范围[1,500]
不填的情况下，系统会自动判断。
                     * 
                     */
                    int64_t GetOutputAudioBitRate() const;

                    /**
                     * 设置输出流音频比特率。取值范围[1,500]
不填的情况下，系统会自动判断。
                     * @param _outputAudioBitRate 输出流音频比特率。取值范围[1,500]
不填的情况下，系统会自动判断。
                     * 
                     */
                    void SetOutputAudioBitRate(const int64_t& _outputAudioBitRate);

                    /**
                     * 判断参数 OutputAudioBitRate 是否已赋值
                     * @return OutputAudioBitRate 是否已赋值
                     * 
                     */
                    bool OutputAudioBitRateHasBeenSet() const;

                    /**
                     * 获取输出流音频采样率。取值范围[96000, 88200, 64000, 48000, 44100, 32000,24000, 22050, 16000, 12000, 11025, 8000]。
不填的情况下，系统会自动判断。
                     * @return OutputAudioSampleRate 输出流音频采样率。取值范围[96000, 88200, 64000, 48000, 44100, 32000,24000, 22050, 16000, 12000, 11025, 8000]。
不填的情况下，系统会自动判断。
                     * 
                     */
                    int64_t GetOutputAudioSampleRate() const;

                    /**
                     * 设置输出流音频采样率。取值范围[96000, 88200, 64000, 48000, 44100, 32000,24000, 22050, 16000, 12000, 11025, 8000]。
不填的情况下，系统会自动判断。
                     * @param _outputAudioSampleRate 输出流音频采样率。取值范围[96000, 88200, 64000, 48000, 44100, 32000,24000, 22050, 16000, 12000, 11025, 8000]。
不填的情况下，系统会自动判断。
                     * 
                     */
                    void SetOutputAudioSampleRate(const int64_t& _outputAudioSampleRate);

                    /**
                     * 判断参数 OutputAudioSampleRate 是否已赋值
                     * @return OutputAudioSampleRate 是否已赋值
                     * 
                     */
                    bool OutputAudioSampleRateHasBeenSet() const;

                    /**
                     * 获取输出流音频声道数。取值范围[1,2]。
不填的情况下，系统会自动判断。
                     * @return OutputAudioChannels 输出流音频声道数。取值范围[1,2]。
不填的情况下，系统会自动判断。
                     * 
                     */
                    int64_t GetOutputAudioChannels() const;

                    /**
                     * 设置输出流音频声道数。取值范围[1,2]。
不填的情况下，系统会自动判断。
                     * @param _outputAudioChannels 输出流音频声道数。取值范围[1,2]。
不填的情况下，系统会自动判断。
                     * 
                     */
                    void SetOutputAudioChannels(const int64_t& _outputAudioChannels);

                    /**
                     * 判断参数 OutputAudioChannels 是否已赋值
                     * @return OutputAudioChannels 是否已赋值
                     * 
                     */
                    bool OutputAudioChannelsHasBeenSet() const;

                    /**
                     * 获取输出流中的sei信息。如果无特殊需要，不填。
                     * @return MixSei 输出流中的sei信息。如果无特殊需要，不填。
                     * 
                     */
                    std::string GetMixSei() const;

                    /**
                     * 设置输出流中的sei信息。如果无特殊需要，不填。
                     * @param _mixSei 输出流中的sei信息。如果无特殊需要，不填。
                     * 
                     */
                    void SetMixSei(const std::string& _mixSei);

                    /**
                     * 判断参数 MixSei 是否已赋值
                     * @return MixSei 是否已赋值
                     * 
                     */
                    bool MixSeiHasBeenSet() const;

                private:

                    /**
                     * 输出流名称。
                     */
                    std::string m_outputStreamName;
                    bool m_outputStreamNameHasBeenSet;

                    /**
                     * 输出流类型，取值范围[0,1]。
不填默认为0。
当输出流为输入流 list 中的一条时，填写0。
当期望生成的混流结果成为一条新流时，该值填为1。
该值为1时，output_stream_id 不能出现在 input_stram_list 中，且直播后台中，不能存在相同 ID 的流。
                     */
                    int64_t m_outputStreamType;
                    bool m_outputStreamTypeHasBeenSet;

                    /**
                     * 输出流比特率。取值范围[1，10000]。
不填的情况下，系统会自动判断。
                     */
                    int64_t m_outputStreamBitRate;
                    bool m_outputStreamBitRateHasBeenSet;

                    /**
                     * 输出流GOP大小。取值范围[1,10]。
不填的情况下，系统会自动判断。
                     */
                    int64_t m_outputStreamGop;
                    bool m_outputStreamGopHasBeenSet;

                    /**
                     * 输出流帧率大小。取值范围[1,60]。
不填的情况下，系统会自动判断。
                     */
                    int64_t m_outputStreamFrameRate;
                    bool m_outputStreamFrameRateHasBeenSet;

                    /**
                     * 输出流音频比特率。取值范围[1,500]
不填的情况下，系统会自动判断。
                     */
                    int64_t m_outputAudioBitRate;
                    bool m_outputAudioBitRateHasBeenSet;

                    /**
                     * 输出流音频采样率。取值范围[96000, 88200, 64000, 48000, 44100, 32000,24000, 22050, 16000, 12000, 11025, 8000]。
不填的情况下，系统会自动判断。
                     */
                    int64_t m_outputAudioSampleRate;
                    bool m_outputAudioSampleRateHasBeenSet;

                    /**
                     * 输出流音频声道数。取值范围[1,2]。
不填的情况下，系统会自动判断。
                     */
                    int64_t m_outputAudioChannels;
                    bool m_outputAudioChannelsHasBeenSet;

                    /**
                     * 输出流中的sei信息。如果无特殊需要，不填。
                     */
                    std::string m_mixSei;
                    bool m_mixSeiHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXOUTPUTPARAMS_H_

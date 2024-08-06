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

#ifndef TENCENTCLOUD_VRS_V20200824_MODEL_DETECTENVANDSOUNDQUALITYREQUEST_H_
#define TENCENTCLOUD_VRS_V20200824_MODEL_DETECTENVANDSOUNDQUALITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vrs
    {
        namespace V20200824
        {
            namespace Model
            {
                /**
                * DetectEnvAndSoundQuality请求参数结构体
                */
                class DetectEnvAndSoundQualityRequest : public AbstractModel
                {
                public:
                    DetectEnvAndSoundQualityRequest();
                    ~DetectEnvAndSoundQualityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取标注文本信息 ID
                     * @return TextId 标注文本信息 ID
                     * 
                     */
                    std::string GetTextId() const;

                    /**
                     * 设置标注文本信息 ID
                     * @param _textId 标注文本信息 ID
                     * 
                     */
                    void SetTextId(const std::string& _textId);

                    /**
                     * 判断参数 TextId 是否已赋值
                     * @return TextId 是否已赋值
                     * 
                     */
                    bool TextIdHasBeenSet() const;

                    /**
                     * 获取语音数据 要使用base64编码(采用python语言时注意读取文件时需要转成base64字符串编码，例如：str(base64.b64encode(open("input.aac", mode="rb").read()), encoding='utf-8') )。
                     * @return AudioData 语音数据 要使用base64编码(采用python语言时注意读取文件时需要转成base64字符串编码，例如：str(base64.b64encode(open("input.aac", mode="rb").read()), encoding='utf-8') )。
                     * 
                     */
                    std::string GetAudioData() const;

                    /**
                     * 设置语音数据 要使用base64编码(采用python语言时注意读取文件时需要转成base64字符串编码，例如：str(base64.b64encode(open("input.aac", mode="rb").read()), encoding='utf-8') )。
                     * @param _audioData 语音数据 要使用base64编码(采用python语言时注意读取文件时需要转成base64字符串编码，例如：str(base64.b64encode(open("input.aac", mode="rb").read()), encoding='utf-8') )。
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
                     * 获取1:环境检测 2:音质检测
                     * @return TypeId 1:环境检测 2:音质检测
                     * 
                     */
                    int64_t GetTypeId() const;

                    /**
                     * 设置1:环境检测 2:音质检测
                     * @param _typeId 1:环境检测 2:音质检测
                     * 
                     */
                    void SetTypeId(const int64_t& _typeId);

                    /**
                     * 判断参数 TypeId 是否已赋值
                     * @return TypeId 是否已赋值
                     * 
                     */
                    bool TypeIdHasBeenSet() const;

                    /**
                     * 获取音频格式，音频类型(wav,mp3,aac,m4a)
                     * @return Codec 音频格式，音频类型(wav,mp3,aac,m4a)
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置音频格式，音频类型(wav,mp3,aac,m4a)
                     * @param _codec 音频格式，音频类型(wav,mp3,aac,m4a)
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
                     * 获取音频采样率。
16000：16k（默认）；
24000：24k（仅一句话声音复刻支持）；
48000：48k（仅一句话声音复刻支持）。
                     * @return SampleRate 音频采样率。
16000：16k（默认）；
24000：24k（仅一句话声音复刻支持）；
48000：48k（仅一句话声音复刻支持）。
                     * 
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置音频采样率。
16000：16k（默认）；
24000：24k（仅一句话声音复刻支持）；
48000：48k（仅一句话声音复刻支持）。
                     * @param _sampleRate 音频采样率。
16000：16k（默认）；
24000：24k（仅一句话声音复刻支持）；
48000：48k（仅一句话声音复刻支持）。
                     * 
                     */
                    void SetSampleRate(const int64_t& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     * 
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取复刻类型。
0 - 轻量版声音复刻（默认）;
5 - 一句话声音复刻。
                     * @return TaskType 复刻类型。
0 - 轻量版声音复刻（默认）;
5 - 一句话声音复刻。
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置复刻类型。
0 - 轻量版声音复刻（默认）;
5 - 一句话声音复刻。
                     * @param _taskType 复刻类型。
0 - 轻量版声音复刻（默认）;
5 - 一句话声音复刻。
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                private:

                    /**
                     * 标注文本信息 ID
                     */
                    std::string m_textId;
                    bool m_textIdHasBeenSet;

                    /**
                     * 语音数据 要使用base64编码(采用python语言时注意读取文件时需要转成base64字符串编码，例如：str(base64.b64encode(open("input.aac", mode="rb").read()), encoding='utf-8') )。
                     */
                    std::string m_audioData;
                    bool m_audioDataHasBeenSet;

                    /**
                     * 1:环境检测 2:音质检测
                     */
                    int64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * 音频格式，音频类型(wav,mp3,aac,m4a)
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * 音频采样率。
16000：16k（默认）；
24000：24k（仅一句话声音复刻支持）；
48000：48k（仅一句话声音复刻支持）。
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 复刻类型。
0 - 轻量版声音复刻（默认）;
5 - 一句话声音复刻。
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VRS_V20200824_MODEL_DETECTENVANDSOUNDQUALITYREQUEST_H_

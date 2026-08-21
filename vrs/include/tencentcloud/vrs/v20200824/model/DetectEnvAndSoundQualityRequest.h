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
                     * 获取<p>标注文本信息 ID</p>
                     * @return TextId <p>标注文本信息 ID</p>
                     * 
                     */
                    std::string GetTextId() const;

                    /**
                     * 设置<p>标注文本信息 ID</p>
                     * @param _textId <p>标注文本信息 ID</p>
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
                     * 获取<p>语音数据 要使用base64编码(采用python语言时注意读取文件时需要转成base64字符串编码，例如：str(base64.b64encode(open(&quot;input.aac&quot;, mode=&quot;rb&quot;).read()), encoding=&#39;utf-8&#39;) )。</p>
                     * @return AudioData <p>语音数据 要使用base64编码(采用python语言时注意读取文件时需要转成base64字符串编码，例如：str(base64.b64encode(open(&quot;input.aac&quot;, mode=&quot;rb&quot;).read()), encoding=&#39;utf-8&#39;) )。</p>
                     * 
                     */
                    std::string GetAudioData() const;

                    /**
                     * 设置<p>语音数据 要使用base64编码(采用python语言时注意读取文件时需要转成base64字符串编码，例如：str(base64.b64encode(open(&quot;input.aac&quot;, mode=&quot;rb&quot;).read()), encoding=&#39;utf-8&#39;) )。</p>
                     * @param _audioData <p>语音数据 要使用base64编码(采用python语言时注意读取文件时需要转成base64字符串编码，例如：str(base64.b64encode(open(&quot;input.aac&quot;, mode=&quot;rb&quot;).read()), encoding=&#39;utf-8&#39;) )。</p>
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
                     * 获取<p>1:环境检测 2:音质检测</p>
                     * @return TypeId <p>1:环境检测 2:音质检测</p>
                     * 
                     */
                    int64_t GetTypeId() const;

                    /**
                     * 设置<p>1:环境检测 2:音质检测</p>
                     * @param _typeId <p>1:环境检测 2:音质检测</p>
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
                     * 获取<p>音频格式，音频类型(wav,mp3,aac,m4a)</p>
                     * @return Codec <p>音频格式，音频类型(wav,mp3,aac,m4a)</p>
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置<p>音频格式，音频类型(wav,mp3,aac,m4a)</p>
                     * @param _codec <p>音频格式，音频类型(wav,mp3,aac,m4a)</p>
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
                     * 获取<p>音频采样率。<br>16000：16k（默认）；<br>24000：24k（仅一句话声音复刻支持）；<br>48000：48k（仅一句话声音复刻支持）。</p>
                     * @return SampleRate <p>音频采样率。<br>16000：16k（默认）；<br>24000：24k（仅一句话声音复刻支持）；<br>48000：48k（仅一句话声音复刻支持）。</p>
                     * 
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置<p>音频采样率。<br>16000：16k（默认）；<br>24000：24k（仅一句话声音复刻支持）；<br>48000：48k（仅一句话声音复刻支持）。</p>
                     * @param _sampleRate <p>音频采样率。<br>16000：16k（默认）；<br>24000：24k（仅一句话声音复刻支持）；<br>48000：48k（仅一句话声音复刻支持）。</p>
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
                     * 获取<p>复刻类型。5 - 一句话声音复刻。</p>
                     * @return TaskType <p>复刻类型。5 - 一句话声音复刻。</p>
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置<p>复刻类型。5 - 一句话声音复刻。</p>
                     * @param _taskType <p>复刻类型。5 - 一句话声音复刻。</p>
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
                     * <p>标注文本信息 ID</p>
                     */
                    std::string m_textId;
                    bool m_textIdHasBeenSet;

                    /**
                     * <p>语音数据 要使用base64编码(采用python语言时注意读取文件时需要转成base64字符串编码，例如：str(base64.b64encode(open(&quot;input.aac&quot;, mode=&quot;rb&quot;).read()), encoding=&#39;utf-8&#39;) )。</p>
                     */
                    std::string m_audioData;
                    bool m_audioDataHasBeenSet;

                    /**
                     * <p>1:环境检测 2:音质检测</p>
                     */
                    int64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * <p>音频格式，音频类型(wav,mp3,aac,m4a)</p>
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * <p>音频采样率。<br>16000：16k（默认）；<br>24000：24k（仅一句话声音复刻支持）；<br>48000：48k（仅一句话声音复刻支持）。</p>
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * <p>复刻类型。5 - 一句话声音复刻。</p>
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VRS_V20200824_MODEL_DETECTENVANDSOUNDQUALITYREQUEST_H_

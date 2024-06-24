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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTGROUPVERIFYREQUEST_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTGROUPVERIFYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * VoicePrintGroupVerify请求参数结构体
                */
                class VoicePrintGroupVerifyRequest : public AbstractModel
                {
                public:
                    VoicePrintGroupVerifyRequest();
                    ~VoicePrintGroupVerifyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取音频格式 0: pcm, 1: wav
                     * @return VoiceFormat 音频格式 0: pcm, 1: wav
                     * 
                     */
                    int64_t GetVoiceFormat() const;

                    /**
                     * 设置音频格式 0: pcm, 1: wav
                     * @param _voiceFormat 音频格式 0: pcm, 1: wav
                     * 
                     */
                    void SetVoiceFormat(const int64_t& _voiceFormat);

                    /**
                     * 判断参数 VoiceFormat 是否已赋值
                     * @return VoiceFormat 是否已赋值
                     * 
                     */
                    bool VoiceFormatHasBeenSet() const;

                    /**
                     * 获取音频采样率，目前支持16000，单位：Hz，必填
                     * @return SampleRate 音频采样率，目前支持16000，单位：Hz，必填
                     * 
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置音频采样率，目前支持16000，单位：Hz，必填
                     * @param _sampleRate 音频采样率，目前支持16000，单位：Hz，必填
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
                     * 获取音频数据, base64 编码, 音频时长不能超过30s，数据大小不超过2M
                     * @return Data 音频数据, base64 编码, 音频时长不能超过30s，数据大小不超过2M
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置音频数据, base64 编码, 音频时长不能超过30s，数据大小不超过2M
                     * @param _data 音频数据, base64 编码, 音频时长不能超过30s，数据大小不超过2M
                     * 
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取分组id, 支持数字，字母，下划线，长度不超过128
                     * @return GroupId 分组id, 支持数字，字母，下划线，长度不超过128
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置分组id, 支持数字，字母，下划线，长度不超过128
                     * @param _groupId 分组id, 支持数字，字母，下划线，长度不超过128
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取返回打分结果降序排列topN, TopN大于0， 小于可创建声纹最大数量
                     * @return TopN 返回打分结果降序排列topN, TopN大于0， 小于可创建声纹最大数量
                     * 
                     */
                    uint64_t GetTopN() const;

                    /**
                     * 设置返回打分结果降序排列topN, TopN大于0， 小于可创建声纹最大数量
                     * @param _topN 返回打分结果降序排列topN, TopN大于0， 小于可创建声纹最大数量
                     * 
                     */
                    void SetTopN(const uint64_t& _topN);

                    /**
                     * 判断参数 TopN 是否已赋值
                     * @return TopN 是否已赋值
                     * 
                     */
                    bool TopNHasBeenSet() const;

                private:

                    /**
                     * 音频格式 0: pcm, 1: wav
                     */
                    int64_t m_voiceFormat;
                    bool m_voiceFormatHasBeenSet;

                    /**
                     * 音频采样率，目前支持16000，单位：Hz，必填
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 音频数据, base64 编码, 音频时长不能超过30s，数据大小不超过2M
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 分组id, 支持数字，字母，下划线，长度不超过128
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 返回打分结果降序排列topN, TopN大于0， 小于可创建声纹最大数量
                     */
                    uint64_t m_topN;
                    bool m_topNHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTGROUPVERIFYREQUEST_H_

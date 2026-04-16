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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEASYNCTEXTTOSPEECHRESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEASYNCTEXTTOSPEECHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeAsyncTextToSpeech返回参数结构体
                */
                class DescribeAsyncTextToSpeechResponse : public AbstractModel
                {
                public:
                    DescribeAsyncTextToSpeechResponse();
                    ~DescribeAsyncTextToSpeechResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务状态
- Processing，处理中
- Success，任务成功
- Failed，任务失败
- Expired，任务过期
                     * @return Status 任务状态
- Processing，处理中
- Success，任务成功
- Failed，任务失败
- Expired，任务过期
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取音频下载url
                     * @return AudioDownloadUrl 音频下载url
                     * 
                     */
                    std::string GetAudioDownloadUrl() const;

                    /**
                     * 判断参数 AudioDownloadUrl 是否已赋值
                     * @return AudioDownloadUrl 是否已赋值
                     * 
                     */
                    bool AudioDownloadUrlHasBeenSet() const;

                    /**
                     * 获取字幕下载url
                     * @return SubtitleDownloadUrl 字幕下载url
                     * 
                     */
                    std::string GetSubtitleDownloadUrl() const;

                    /**
                     * 判断参数 SubtitleDownloadUrl 是否已赋值
                     * @return SubtitleDownloadUrl 是否已赋值
                     * 
                     */
                    bool SubtitleDownloadUrlHasBeenSet() const;

                private:

                    /**
                     * 任务状态
- Processing，处理中
- Success，任务成功
- Failed，任务失败
- Expired，任务过期
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 音频下载url
                     */
                    std::string m_audioDownloadUrl;
                    bool m_audioDownloadUrlHasBeenSet;

                    /**
                     * 字幕下载url
                     */
                    std::string m_subtitleDownloadUrl;
                    bool m_subtitleDownloadUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEASYNCTEXTTOSPEECHRESPONSE_H_

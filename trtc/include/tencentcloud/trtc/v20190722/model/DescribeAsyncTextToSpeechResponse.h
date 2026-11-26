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
#include <tencentcloud/trtc/v20190722/model/AsyncTTSSegmentResult.h>


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
                     * 获取<p>任务状态</p><ul><li>Processing，处理中</li><li>Success，任务成功</li><li>Failed，任务失败</li><li>Expired，任务过期</li></ul>
                     * @return Status <p>任务状态</p><ul><li>Processing，处理中</li><li>Success，任务成功</li><li>Failed，任务失败</li><li>Expired，任务过期</li></ul>
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
                     * 获取<p>音频下载url</p>
                     * @return AudioDownloadUrl <p>音频下载url</p>
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
                     * 获取<p>字幕下载url</p>
                     * @return SubtitleDownloadUrl <p>字幕下载url</p>
                     * 
                     */
                    std::string GetSubtitleDownloadUrl() const;

                    /**
                     * 判断参数 SubtitleDownloadUrl 是否已赋值
                     * @return SubtitleDownloadUrl 是否已赋值
                     * 
                     */
                    bool SubtitleDownloadUrlHasBeenSet() const;

                    /**
                     * 获取<p>音频时长</p>
                     * @return TotalDurationMs <p>音频时长</p>
                     * 
                     */
                    uint64_t GetTotalDurationMs() const;

                    /**
                     * 判断参数 TotalDurationMs 是否已赋值
                     * @return TotalDurationMs 是否已赋值
                     * 
                     */
                    bool TotalDurationMsHasBeenSet() const;

                    /**
                     * 获取<p>分段文本对应的结果</p>
                     * @return SegmentResults <p>分段文本对应的结果</p>
                     * 
                     */
                    std::vector<AsyncTTSSegmentResult> GetSegmentResults() const;

                    /**
                     * 判断参数 SegmentResults 是否已赋值
                     * @return SegmentResults 是否已赋值
                     * 
                     */
                    bool SegmentResultsHasBeenSet() const;

                private:

                    /**
                     * <p>任务状态</p><ul><li>Processing，处理中</li><li>Success，任务成功</li><li>Failed，任务失败</li><li>Expired，任务过期</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>音频下载url</p>
                     */
                    std::string m_audioDownloadUrl;
                    bool m_audioDownloadUrlHasBeenSet;

                    /**
                     * <p>字幕下载url</p>
                     */
                    std::string m_subtitleDownloadUrl;
                    bool m_subtitleDownloadUrlHasBeenSet;

                    /**
                     * <p>音频时长</p>
                     */
                    uint64_t m_totalDurationMs;
                    bool m_totalDurationMsHasBeenSet;

                    /**
                     * <p>分段文本对应的结果</p>
                     */
                    std::vector<AsyncTTSSegmentResult> m_segmentResults;
                    bool m_segmentResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEASYNCTEXTTOSPEECHRESPONSE_H_

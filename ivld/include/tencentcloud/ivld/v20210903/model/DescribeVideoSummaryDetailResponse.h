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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBEVIDEOSUMMARYDETAILRESPONSE_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBEVIDEOSUMMARYDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/AsrResult.h>
#include <tencentcloud/ivld/v20210903/model/ShotInfo.h>
#include <tencentcloud/ivld/v20210903/model/TextSegMatchShotScore.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * DescribeVideoSummaryDetail返回参数结构体
                */
                class DescribeVideoSummaryDetailResponse : public AbstractModel
                {
                public:
                    DescribeVideoSummaryDetailResponse();
                    ~DescribeVideoSummaryDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务的状态
1: 等待处理中
2: 处理中
3: 处理成功
4: 处理失败
                     * @return Status 任务的状态
1: 等待处理中
2: 处理中
3: 处理成功
4: 处理失败
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取如果处理失败，返回失败的原因
                     * @return FailedReason 如果处理失败，返回失败的原因
                     * 
                     */
                    std::string GetFailedReason() const;

                    /**
                     * 判断参数 FailedReason 是否已赋值
                     * @return FailedReason 是否已赋值
                     * 
                     */
                    bool FailedReasonHasBeenSet() const;

                    /**
                     * 获取提取出的视频的 Asr 结果
                     * @return AsrSet 提取出的视频的 Asr 结果
                     * 
                     */
                    std::vector<AsrResult> GetAsrSet() const;

                    /**
                     * 判断参数 AsrSet 是否已赋值
                     * @return AsrSet 是否已赋值
                     * 
                     */
                    bool AsrSetHasBeenSet() const;

                    /**
                     * 获取文本摘要结果
                     * @return TextSummary 文本摘要结果
                     * 
                     */
                    std::string GetTextSummary() const;

                    /**
                     * 判断参数 TextSummary 是否已赋值
                     * @return TextSummary 是否已赋值
                     * 
                     */
                    bool TextSummaryHasBeenSet() const;

                    /**
                     * 获取文本摘要分割结果
                     * @return TextSegSet 文本摘要分割结果
                     * 
                     */
                    std::vector<std::string> GetTextSegSet() const;

                    /**
                     * 判断参数 TextSegSet 是否已赋值
                     * @return TextSegSet 是否已赋值
                     * 
                     */
                    bool TextSegSetHasBeenSet() const;

                    /**
                     * 获取镜头分割结果
                     * @return ShotSegSet 镜头分割结果
                     * 
                     */
                    std::vector<ShotInfo> GetShotSegSet() const;

                    /**
                     * 判断参数 ShotSegSet 是否已赋值
                     * @return ShotSegSet 是否已赋值
                     * 
                     */
                    bool ShotSegSetHasBeenSet() const;

                    /**
                     * 获取数组第 i 个结构 TextSegMatchShotConfidenceSet[i] 表示第 i 个文本摘要分割结果和所有镜头的匹配度。
                     * @return TextSegMatchShotScoreSet 数组第 i 个结构 TextSegMatchShotConfidenceSet[i] 表示第 i 个文本摘要分割结果和所有镜头的匹配度。
                     * 
                     */
                    std::vector<TextSegMatchShotScore> GetTextSegMatchShotScoreSet() const;

                    /**
                     * 判断参数 TextSegMatchShotScoreSet 是否已赋值
                     * @return TextSegMatchShotScoreSet 是否已赋值
                     * 
                     */
                    bool TextSegMatchShotScoreSetHasBeenSet() const;

                    /**
                     * 获取TTS 输出音频下载地址列表
                     * @return TTSResultURLSet TTS 输出音频下载地址列表
                     * 
                     */
                    std::vector<std::string> GetTTSResultURLSet() const;

                    /**
                     * 判断参数 TTSResultURLSet 是否已赋值
                     * @return TTSResultURLSet 是否已赋值
                     * 
                     */
                    bool TTSResultURLSetHasBeenSet() const;

                    /**
                     * 获取合成视频输出下载地址
                     * @return VideoResultURL 合成视频输出下载地址
                     * 
                     */
                    std::string GetVideoResultURL() const;

                    /**
                     * 判断参数 VideoResultURL 是否已赋值
                     * @return VideoResultURL 是否已赋值
                     * 
                     */
                    bool VideoResultURLHasBeenSet() const;

                    /**
                     * 获取合成后的视频横竖屏转换后的视频下载地址
                     * @return VideoRotateResultURL 合成后的视频横竖屏转换后的视频下载地址
                     * 
                     */
                    std::string GetVideoRotateResultURL() const;

                    /**
                     * 判断参数 VideoRotateResultURL 是否已赋值
                     * @return VideoRotateResultURL 是否已赋值
                     * 
                     */
                    bool VideoRotateResultURLHasBeenSet() const;

                private:

                    /**
                     * 任务的状态
1: 等待处理中
2: 处理中
3: 处理成功
4: 处理失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 如果处理失败，返回失败的原因
                     */
                    std::string m_failedReason;
                    bool m_failedReasonHasBeenSet;

                    /**
                     * 提取出的视频的 Asr 结果
                     */
                    std::vector<AsrResult> m_asrSet;
                    bool m_asrSetHasBeenSet;

                    /**
                     * 文本摘要结果
                     */
                    std::string m_textSummary;
                    bool m_textSummaryHasBeenSet;

                    /**
                     * 文本摘要分割结果
                     */
                    std::vector<std::string> m_textSegSet;
                    bool m_textSegSetHasBeenSet;

                    /**
                     * 镜头分割结果
                     */
                    std::vector<ShotInfo> m_shotSegSet;
                    bool m_shotSegSetHasBeenSet;

                    /**
                     * 数组第 i 个结构 TextSegMatchShotConfidenceSet[i] 表示第 i 个文本摘要分割结果和所有镜头的匹配度。
                     */
                    std::vector<TextSegMatchShotScore> m_textSegMatchShotScoreSet;
                    bool m_textSegMatchShotScoreSetHasBeenSet;

                    /**
                     * TTS 输出音频下载地址列表
                     */
                    std::vector<std::string> m_tTSResultURLSet;
                    bool m_tTSResultURLSetHasBeenSet;

                    /**
                     * 合成视频输出下载地址
                     */
                    std::string m_videoResultURL;
                    bool m_videoResultURLHasBeenSet;

                    /**
                     * 合成后的视频横竖屏转换后的视频下载地址
                     */
                    std::string m_videoRotateResultURL;
                    bool m_videoRotateResultURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBEVIDEOSUMMARYDETAILRESPONSE_H_

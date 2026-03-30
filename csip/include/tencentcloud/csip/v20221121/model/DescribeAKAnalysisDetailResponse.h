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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAKANALYSISDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAKANALYSISDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAKAnalysisDetail返回参数结构体
                */
                class DescribeAKAnalysisDetailResponse : public AbstractModel
                {
                public:
                    DescribeAKAnalysisDetailResponse();
                    ~DescribeAKAnalysisDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取告警AI分析状态 -1 分析失败 0 未分析 1 分析中 2 分析成功，真实告警 3 分析成功，可疑告警
                     * @return AIStatus 告警AI分析状态 -1 分析失败 0 未分析 1 分析中 2 分析成功，真实告警 3 分析成功，可疑告警
                     * 
                     */
                    int64_t GetAIStatus() const;

                    /**
                     * 判断参数 AIStatus 是否已赋值
                     * @return AIStatus 是否已赋值
                     * 
                     */
                    bool AIStatusHasBeenSet() const;

                    /**
                     * 获取AI分析任务ID
                     * @return AITaskID AI分析任务ID
                     * 
                     */
                    std::string GetAITaskID() const;

                    /**
                     * 判断参数 AITaskID 是否已赋值
                     * @return AITaskID 是否已赋值
                     * 
                     */
                    bool AITaskIDHasBeenSet() const;

                    /**
                     * 获取告警AI分析结果，base64格式，避免数据被拦截
                     * @return AIResult 告警AI分析结果，base64格式，避免数据被拦截
                     * 
                     */
                    std::string GetAIResult() const;

                    /**
                     * 判断参数 AIResult 是否已赋值
                     * @return AIResult 是否已赋值
                     * 
                     */
                    bool AIResultHasBeenSet() const;

                    /**
                     * 获取反馈建议
                     * @return Feedback 反馈建议
                     * 
                     */
                    std::string GetFeedback() const;

                    /**
                     * 判断参数 Feedback 是否已赋值
                     * @return Feedback 是否已赋值
                     * 
                     */
                    bool FeedbackHasBeenSet() const;

                    /**
                     * 获取反馈状态  0表示没有反馈，1表示认可，2表示不认可
                     * @return FeedbackResult 反馈状态  0表示没有反馈，1表示认可，2表示不认可
                     * 
                     */
                    int64_t GetFeedbackResult() const;

                    /**
                     * 判断参数 FeedbackResult 是否已赋值
                     * @return FeedbackResult 是否已赋值
                     * 
                     */
                    bool FeedbackResultHasBeenSet() const;

                    /**
                     * 获取失败原因
                     * @return FailedReason 失败原因
                     * 
                     */
                    std::string GetFailedReason() const;

                    /**
                     * 判断参数 FailedReason 是否已赋值
                     * @return FailedReason 是否已赋值
                     * 
                     */
                    bool FailedReasonHasBeenSet() const;

                private:

                    /**
                     * 告警AI分析状态 -1 分析失败 0 未分析 1 分析中 2 分析成功，真实告警 3 分析成功，可疑告警
                     */
                    int64_t m_aIStatus;
                    bool m_aIStatusHasBeenSet;

                    /**
                     * AI分析任务ID
                     */
                    std::string m_aITaskID;
                    bool m_aITaskIDHasBeenSet;

                    /**
                     * 告警AI分析结果，base64格式，避免数据被拦截
                     */
                    std::string m_aIResult;
                    bool m_aIResultHasBeenSet;

                    /**
                     * 反馈建议
                     */
                    std::string m_feedback;
                    bool m_feedbackHasBeenSet;

                    /**
                     * 反馈状态  0表示没有反馈，1表示认可，2表示不认可
                     */
                    int64_t m_feedbackResult;
                    bool m_feedbackResultHasBeenSet;

                    /**
                     * 失败原因
                     */
                    std::string m_failedReason;
                    bool m_failedReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAKANALYSISDETAILRESPONSE_H_

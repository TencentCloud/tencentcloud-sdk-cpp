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

#ifndef TENCENTCLOUD_TMS_V20201229_MODEL_GETFINANCIALLLMTASKRESULTRESPONSE_H_
#define TENCENTCLOUD_TMS_V20201229_MODEL_GETFINANCIALLLMTASKRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tms/v20201229/model/FinancialLLMViolationDetail.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * GetFinancialLLMTaskResult返回参数结构体
                */
                class GetFinancialLLMTaskResultResponse : public AbstractModel
                {
                public:
                    GetFinancialLLMTaskResultResponse();
                    ~GetFinancialLLMTaskResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取审校任务状态：

- Success: 成功
- Processing: 处理中，请等待
- Failed: 失败
                     * @return Status 审校任务状态：

- Success: 成功
- Processing: 处理中，请等待
- Failed: 失败
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
                     * 获取大模型审校结果
                     * @return ModerationResult 大模型审校结果
                     * 
                     */
                    std::string GetModerationResult() const;

                    /**
                     * 判断参数 ModerationResult 是否已赋值
                     * @return ModerationResult 是否已赋值
                     * 
                     */
                    bool ModerationResultHasBeenSet() const;

                    /**
                     * 获取审校任务失败原因，仅当任务失败时有值
                     * @return FailureReason 审校任务失败原因，仅当任务失败时有值
                     * 
                     */
                    std::string GetFailureReason() const;

                    /**
                     * 判断参数 FailureReason 是否已赋值
                     * @return FailureReason 是否已赋值
                     * 
                     */
                    bool FailureReasonHasBeenSet() const;

                    /**
                     * 获取审校任务开始时间
                     * @return StartTime 审校任务开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取本次检测的违规点列表
                     * @return ReviewedLabels 本次检测的违规点列表
                     * 
                     */
                    std::vector<std::string> GetReviewedLabels() const;

                    /**
                     * 判断参数 ReviewedLabels 是否已赋值
                     * @return ReviewedLabels 是否已赋值
                     * 
                     */
                    bool ReviewedLabelsHasBeenSet() const;

                    /**
                     * 获取违规明细
                     * @return Details 违规明细
                     * 
                     */
                    std::vector<FinancialLLMViolationDetail> GetDetails() const;

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                private:

                    /**
                     * 审校任务状态：

- Success: 成功
- Processing: 处理中，请等待
- Failed: 失败
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 大模型审校结果
                     */
                    std::string m_moderationResult;
                    bool m_moderationResultHasBeenSet;

                    /**
                     * 审校任务失败原因，仅当任务失败时有值
                     */
                    std::string m_failureReason;
                    bool m_failureReasonHasBeenSet;

                    /**
                     * 审校任务开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 本次检测的违规点列表
                     */
                    std::vector<std::string> m_reviewedLabels;
                    bool m_reviewedLabelsHasBeenSet;

                    /**
                     * 违规明细
                     */
                    std::vector<FinancialLLMViolationDetail> m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_GETFINANCIALLLMTASKRESULTRESPONSE_H_

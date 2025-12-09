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
                     * 获取TaskId对应的任务的状态：
- Success: 任务已完成
- Processing: 任务进行中，建议10秒后再查询
- Failed: 任务失败

                     * @return Status TaskId对应的任务的状态：
- Success: 任务已完成
- Processing: 任务进行中，建议10秒后再查询
- Failed: 任务失败

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
                     * 获取该字段标识服务检测到的违规点，具体内容参阅数据结构[FinancialLLMViolationDetail](https://cloud.tencent.com/document/api/1124/51861#FinancialLLMViolationDetail)
                     * @return Details 该字段标识服务检测到的违规点，具体内容参阅数据结构[FinancialLLMViolationDetail](https://cloud.tencent.com/document/api/1124/51861#FinancialLLMViolationDetail)
                     * 
                     */
                    std::vector<FinancialLLMViolationDetail> GetDetails() const;

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

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
                     * 获取审校任务的开始时间
                     * @return StartTime 审校任务的开始时间
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
                     * 获取若审校任务失败（Status="Failed"），该字段返回失败的具体原因。
                     * @return FailureReason 若审校任务失败（Status="Failed"），该字段返回失败的具体原因。
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
                     * 获取该字段为历史结构字段，不再推荐使用。
                     * @return ModerationResult 该字段为历史结构字段，不再推荐使用。
                     * 
                     */
                    std::string GetModerationResult() const;

                    /**
                     * 判断参数 ModerationResult 是否已赋值
                     * @return ModerationResult 是否已赋值
                     * 
                     */
                    bool ModerationResultHasBeenSet() const;

                private:

                    /**
                     * TaskId对应的任务的状态：
- Success: 任务已完成
- Processing: 任务进行中，建议10秒后再查询
- Failed: 任务失败

                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 该字段标识服务检测到的违规点，具体内容参阅数据结构[FinancialLLMViolationDetail](https://cloud.tencent.com/document/api/1124/51861#FinancialLLMViolationDetail)
                     */
                    std::vector<FinancialLLMViolationDetail> m_details;
                    bool m_detailsHasBeenSet;

                    /**
                     * 本次检测的违规点列表
                     */
                    std::vector<std::string> m_reviewedLabels;
                    bool m_reviewedLabelsHasBeenSet;

                    /**
                     * 审校任务的开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 若审校任务失败（Status="Failed"），该字段返回失败的具体原因。
                     */
                    std::string m_failureReason;
                    bool m_failureReasonHasBeenSet;

                    /**
                     * 该字段为历史结构字段，不再推荐使用。
                     */
                    std::string m_moderationResult;
                    bool m_moderationResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_GETFINANCIALLLMTASKRESULTRESPONSE_H_

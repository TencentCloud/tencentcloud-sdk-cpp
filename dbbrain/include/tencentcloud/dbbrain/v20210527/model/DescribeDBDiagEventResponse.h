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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBDIAGEVENTRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBDIAGEVENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeDBDiagEvent返回参数结构体
                */
                class DescribeDBDiagEventResponse : public AbstractModel
                {
                public:
                    DescribeDBDiagEventResponse();
                    ~DescribeDBDiagEventResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取诊断项。
                     * @return DiagItem 诊断项。
                     * 
                     */
                    std::string GetDiagItem() const;

                    /**
                     * 判断参数 DiagItem 是否已赋值
                     * @return DiagItem 是否已赋值
                     * 
                     */
                    bool DiagItemHasBeenSet() const;

                    /**
                     * 获取诊断类型。
                     * @return DiagType 诊断类型。
                     * 
                     */
                    std::string GetDiagType() const;

                    /**
                     * 判断参数 DiagType 是否已赋值
                     * @return DiagType 是否已赋值
                     * 
                     */
                    bool DiagTypeHasBeenSet() const;

                    /**
                     * 获取事件 ID 。
                     * @return EventId 事件 ID 。
                     * 
                     */
                    int64_t GetEventId() const;

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取诊断事件详情，若无附加解释信息则输出为空。
                     * @return Explanation 诊断事件详情，若无附加解释信息则输出为空。
                     * 
                     */
                    std::string GetExplanation() const;

                    /**
                     * 判断参数 Explanation 是否已赋值
                     * @return Explanation 是否已赋值
                     * 
                     */
                    bool ExplanationHasBeenSet() const;

                    /**
                     * 获取诊断概要。
                     * @return Outline 诊断概要。
                     * 
                     */
                    std::string GetOutline() const;

                    /**
                     * 判断参数 Outline 是否已赋值
                     * @return Outline 是否已赋值
                     * 
                     */
                    bool OutlineHasBeenSet() const;

                    /**
                     * 获取诊断出的问题。
                     * @return Problem 诊断出的问题。
                     * 
                     */
                    std::string GetProblem() const;

                    /**
                     * 判断参数 Problem 是否已赋值
                     * @return Problem 是否已赋值
                     * 
                     */
                    bool ProblemHasBeenSet() const;

                    /**
                     * 获取严重程度。严重程度分为5级，按影响程度从高至低分别为：1：致命，2：严重，3：告警，4：提示，5：健康。
                     * @return Severity 严重程度。严重程度分为5级，按影响程度从高至低分别为：1：致命，2：严重，3：告警，4：提示，5：健康。
                     * 
                     */
                    int64_t GetSeverity() const;

                    /**
                     * 判断参数 Severity 是否已赋值
                     * @return Severity 是否已赋值
                     * 
                     */
                    bool SeverityHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
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
                     * 获取诊断建议，若无建议则输出为空。
                     * @return Suggestions 诊断建议，若无建议则输出为空。
                     * 
                     */
                    std::string GetSuggestions() const;

                    /**
                     * 判断参数 Suggestions 是否已赋值
                     * @return Suggestions 是否已赋值
                     * 
                     */
                    bool SuggestionsHasBeenSet() const;

                    /**
                     * 获取保留字段。
                     * @return Metric 保留字段。
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取结束时间。
                     * @return EndTime 结束时间。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 诊断项。
                     */
                    std::string m_diagItem;
                    bool m_diagItemHasBeenSet;

                    /**
                     * 诊断类型。
                     */
                    std::string m_diagType;
                    bool m_diagTypeHasBeenSet;

                    /**
                     * 事件 ID 。
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 诊断事件详情，若无附加解释信息则输出为空。
                     */
                    std::string m_explanation;
                    bool m_explanationHasBeenSet;

                    /**
                     * 诊断概要。
                     */
                    std::string m_outline;
                    bool m_outlineHasBeenSet;

                    /**
                     * 诊断出的问题。
                     */
                    std::string m_problem;
                    bool m_problemHasBeenSet;

                    /**
                     * 严重程度。严重程度分为5级，按影响程度从高至低分别为：1：致命，2：严重，3：告警，4：提示，5：健康。
                     */
                    int64_t m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 诊断建议，若无建议则输出为空。
                     */
                    std::string m_suggestions;
                    bool m_suggestionsHasBeenSet;

                    /**
                     * 保留字段。
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 结束时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBDIAGEVENTRESPONSE_H_

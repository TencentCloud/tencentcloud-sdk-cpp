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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_EVENTINFO_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_EVENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * 异常事件信息。
                */
                class EventInfo : public AbstractModel
                {
                public:
                    EventInfo();
                    ~EventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件 ID 。
                     * @return EventId 事件 ID 。
                     * 
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置事件 ID 。
                     * @param _eventId 事件 ID 。
                     * 
                     */
                    void SetEventId(const int64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取诊断类型。
                     * @return DiagType 诊断类型。
                     * 
                     */
                    std::string GetDiagType() const;

                    /**
                     * 设置诊断类型。
                     * @param _diagType 诊断类型。
                     * 
                     */
                    void SetDiagType(const std::string& _diagType);

                    /**
                     * 判断参数 DiagType 是否已赋值
                     * @return DiagType 是否已赋值
                     * 
                     */
                    bool DiagTypeHasBeenSet() const;

                    /**
                     * 获取开始时间。
                     * @return StartTime 开始时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间。
                     * @param _startTime 开始时间。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间。
                     * @return EndTime 结束时间。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间。
                     * @param _endTime 结束时间。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取概要。
                     * @return Outline 概要。
                     * 
                     */
                    std::string GetOutline() const;

                    /**
                     * 设置概要。
                     * @param _outline 概要。
                     * 
                     */
                    void SetOutline(const std::string& _outline);

                    /**
                     * 判断参数 Outline 是否已赋值
                     * @return Outline 是否已赋值
                     * 
                     */
                    bool OutlineHasBeenSet() const;

                    /**
                     * 获取严重程度。严重程度分为5级，按影响程度从高至低分别为：1：致命，2：严重，3：告警，4：提示，5：健康。
                     * @return Severity 严重程度。严重程度分为5级，按影响程度从高至低分别为：1：致命，2：严重，3：告警，4：提示，5：健康。
                     * 
                     */
                    int64_t GetSeverity() const;

                    /**
                     * 设置严重程度。严重程度分为5级，按影响程度从高至低分别为：1：致命，2：严重，3：告警，4：提示，5：健康。
                     * @param _severity 严重程度。严重程度分为5级，按影响程度从高至低分别为：1：致命，2：严重，3：告警，4：提示，5：健康。
                     * 
                     */
                    void SetSeverity(const int64_t& _severity);

                    /**
                     * 判断参数 Severity 是否已赋值
                     * @return Severity 是否已赋值
                     * 
                     */
                    bool SeverityHasBeenSet() const;

                    /**
                     * 获取扣分。
                     * @return ScoreLost 扣分。
                     * 
                     */
                    int64_t GetScoreLost() const;

                    /**
                     * 设置扣分。
                     * @param _scoreLost 扣分。
                     * 
                     */
                    void SetScoreLost(const int64_t& _scoreLost);

                    /**
                     * 判断参数 ScoreLost 是否已赋值
                     * @return ScoreLost 是否已赋值
                     * 
                     */
                    bool ScoreLostHasBeenSet() const;

                    /**
                     * 获取保留字段。
                     * @return Metric 保留字段。
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置保留字段。
                     * @param _metric 保留字段。
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取告警数目。
                     * @return Count 告警数目。
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置告警数目。
                     * @param _count 告警数目。
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 事件 ID 。
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 诊断类型。
                     */
                    std::string m_diagType;
                    bool m_diagTypeHasBeenSet;

                    /**
                     * 开始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 概要。
                     */
                    std::string m_outline;
                    bool m_outlineHasBeenSet;

                    /**
                     * 严重程度。严重程度分为5级，按影响程度从高至低分别为：1：致命，2：严重，3：告警，4：提示，5：健康。
                     */
                    int64_t m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * 扣分。
                     */
                    int64_t m_scoreLost;
                    bool m_scoreLostHasBeenSet;

                    /**
                     * 保留字段。
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 告警数目。
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_EVENTINFO_H_

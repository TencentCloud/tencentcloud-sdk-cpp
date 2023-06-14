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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_TIMERCONFIGURATION_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_TIMERCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/TimerValue.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 重复周期配置
                */
                class TimerConfiguration : public AbstractModel
                {
                public:
                    TimerConfiguration();
                    ~TimerConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取定时器重复周期类型（未定义0，单次1、按天2、按月3、按周4）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimerType 定时器重复周期类型（未定义0，单次1、按天2、按月3、按周4）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimerType() const;

                    /**
                     * 设置定时器重复周期类型（未定义0，单次1、按天2、按月3、按周4）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timerType 定时器重复周期类型（未定义0，单次1、按天2、按月3、按周4）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimerType(const int64_t& _timerType);

                    /**
                     * 判断参数 TimerType 是否已赋值
                     * @return TimerType 是否已赋值
                     * 
                     */
                    bool TimerTypeHasBeenSet() const;

                    /**
                     * 获取定时器取值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimerValue 定时器取值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TimerValue GetTimerValue() const;

                    /**
                     * 设置定时器取值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timerValue 定时器取值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimerValue(const TimerValue& _timerValue);

                    /**
                     * 判断参数 TimerValue 是否已赋值
                     * @return TimerValue 是否已赋值
                     * 
                     */
                    bool TimerValueHasBeenSet() const;

                    /**
                     * 获取定时器开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BeginTime 定时器开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置定时器开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _beginTime 定时器开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取定时器结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 定时器结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置定时器结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 定时器结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 定时器重复周期类型（未定义0，单次1、按天2、按月3、按周4）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timerType;
                    bool m_timerTypeHasBeenSet;

                    /**
                     * 定时器取值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TimerValue m_timerValue;
                    bool m_timerValueHasBeenSet;

                    /**
                     * 定时器开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 定时器结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_TIMERCONFIGURATION_H_

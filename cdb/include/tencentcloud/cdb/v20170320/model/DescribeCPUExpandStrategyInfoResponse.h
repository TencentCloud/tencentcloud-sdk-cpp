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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECPUEXPANDSTRATEGYINFORESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECPUEXPANDSTRATEGYINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/AutoStrategy.h>
#include <tencentcloud/cdb/v20170320/model/PeriodStrategy.h>
#include <tencentcloud/cdb/v20170320/model/TimeIntervalStrategy.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeCPUExpandStrategyInfo返回参数结构体
                */
                class DescribeCPUExpandStrategyInfoResponse : public AbstractModel
                {
                public:
                    DescribeCPUExpandStrategyInfoResponse();
                    ~DescribeCPUExpandStrategyInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取策略类型。输出值 auto、manual。如果返回为 NULL 说明尚未开通弹性扩容策略。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 策略类型。输出值 auto、manual。如果返回为 NULL 说明尚未开通弹性扩容策略。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取手动扩容的 CPU 。Type 为 manual 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpandCpu 手动扩容的 CPU 。Type 为 manual 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetExpandCpu() const;

                    /**
                     * 判断参数 ExpandCpu 是否已赋值
                     * @return ExpandCpu 是否已赋值
                     * 
                     */
                    bool ExpandCpuHasBeenSet() const;

                    /**
                     * 获取自动扩容策略。Type 为 auto 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoStrategy 自动扩容策略。Type 为 auto 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AutoStrategy GetAutoStrategy() const;

                    /**
                     * 判断参数 AutoStrategy 是否已赋值
                     * @return AutoStrategy 是否已赋值
                     * 
                     */
                    bool AutoStrategyHasBeenSet() const;

                    /**
                     * 获取按周期扩容策略。
                     * @return PeriodStrategy 按周期扩容策略。
                     * 
                     */
                    PeriodStrategy GetPeriodStrategy() const;

                    /**
                     * 判断参数 PeriodStrategy 是否已赋值
                     * @return PeriodStrategy 是否已赋值
                     * 
                     */
                    bool PeriodStrategyHasBeenSet() const;

                    /**
                     * 获取按时间段扩容策略。
                     * @return TimeIntervalStrategy 按时间段扩容策略。
                     * 
                     */
                    TimeIntervalStrategy GetTimeIntervalStrategy() const;

                    /**
                     * 判断参数 TimeIntervalStrategy 是否已赋值
                     * @return TimeIntervalStrategy 是否已赋值
                     * 
                     */
                    bool TimeIntervalStrategyHasBeenSet() const;

                private:

                    /**
                     * 策略类型。输出值 auto、manual。如果返回为 NULL 说明尚未开通弹性扩容策略。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 手动扩容的 CPU 。Type 为 manual 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_expandCpu;
                    bool m_expandCpuHasBeenSet;

                    /**
                     * 自动扩容策略。Type 为 auto 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AutoStrategy m_autoStrategy;
                    bool m_autoStrategyHasBeenSet;

                    /**
                     * 按周期扩容策略。
                     */
                    PeriodStrategy m_periodStrategy;
                    bool m_periodStrategyHasBeenSet;

                    /**
                     * 按时间段扩容策略。
                     */
                    TimeIntervalStrategy m_timeIntervalStrategy;
                    bool m_timeIntervalStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECPUEXPANDSTRATEGYINFORESPONSE_H_

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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEFLEETSTATISTICFLOWSRESPONSE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEFLEETSTATISTICFLOWSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/FleetStatisticFlows.h>
#include <tencentcloud/gse/v20191112/model/FleetStatisticTimes.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeFleetStatisticFlows返回参数结构体
                */
                class DescribeFleetStatisticFlowsResponse : public AbstractModel
                {
                public:
                    DescribeFleetStatisticFlowsResponse();
                    ~DescribeFleetStatisticFlowsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取流量统计列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsedFlowList 流量统计列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FleetStatisticFlows> GetUsedFlowList() const;

                    /**
                     * 判断参数 UsedFlowList 是否已赋值
                     * @return UsedFlowList 是否已赋值
                     * 
                     */
                    bool UsedFlowListHasBeenSet() const;

                    /**
                     * 获取时长统计列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsedTimeList 时长统计列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FleetStatisticTimes> GetUsedTimeList() const;

                    /**
                     * 判断参数 UsedTimeList 是否已赋值
                     * @return UsedTimeList 是否已赋值
                     * 
                     */
                    bool UsedTimeListHasBeenSet() const;

                    /**
                     * 获取记录总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 记录总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取统计时间类型，取值：小时和天
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeType 统计时间类型，取值：小时和天
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimeType() const;

                    /**
                     * 判断参数 TimeType 是否已赋值
                     * @return TimeType 是否已赋值
                     * 
                     */
                    bool TimeTypeHasBeenSet() const;

                private:

                    /**
                     * 流量统计列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FleetStatisticFlows> m_usedFlowList;
                    bool m_usedFlowListHasBeenSet;

                    /**
                     * 时长统计列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FleetStatisticTimes> m_usedTimeList;
                    bool m_usedTimeListHasBeenSet;

                    /**
                     * 记录总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 统计时间类型，取值：小时和天
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeType;
                    bool m_timeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEFLEETSTATISTICFLOWSRESPONSE_H_

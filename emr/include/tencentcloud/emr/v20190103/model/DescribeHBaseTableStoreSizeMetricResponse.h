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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHBASETABLESTORESIZEMETRICRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHBASETABLESTORESIZEMETRICRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/HBaseMetricData.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeHBaseTableStoreSizeMetric返回参数结构体
                */
                class DescribeHBaseTableStoreSizeMetricResponse : public AbstractModel
                {
                public:
                    DescribeHBaseTableStoreSizeMetricResponse();
                    ~DescribeHBaseTableStoreSizeMetricResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Hbase监控指标返回包装结构
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricDataList Hbase监控指标返回包装结构
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<HBaseMetricData> GetMetricDataList() const;

                    /**
                     * 判断参数 MetricDataList 是否已赋值
                     * @return MetricDataList 是否已赋值
                     * 
                     */
                    bool MetricDataListHasBeenSet() const;

                private:

                    /**
                     * Hbase监控指标返回包装结构
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<HBaseMetricData> m_metricDataList;
                    bool m_metricDataListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHBASETABLESTORESIZEMETRICRESPONSE_H_

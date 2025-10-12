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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_METRICDATA_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_METRICDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/TrendData.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 监控指标
                */
                class MetricData : public AbstractModel
                {
                public:
                    MetricData();
                    ~MetricData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标名称

- ConcurrencyUsage --- 并发使用率
- CpuCoreUsage --- cpu使用率
- CpuLoad --- cpu负载
- DevelopQueueTask --- 正在队列中的开发任务数量
- DevelopRunningTask --- 正在运行的开发任务数量
- DevelopSchedulingTask --- 正在调度的开发任务数量
- DiskUsage --- 磁盘使用情况
- DiskUsed --- 磁盘已用量
- MaximumConcurrency --- 最大并发
- MemoryLoad --- 内存负载
- MemoryUsage --- 内存使用量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricName 指标名称

- ConcurrencyUsage --- 并发使用率
- CpuCoreUsage --- cpu使用率
- CpuLoad --- cpu负载
- DevelopQueueTask --- 正在队列中的开发任务数量
- DevelopRunningTask --- 正在运行的开发任务数量
- DevelopSchedulingTask --- 正在调度的开发任务数量
- DiskUsage --- 磁盘使用情况
- DiskUsed --- 磁盘已用量
- MaximumConcurrency --- 最大并发
- MemoryLoad --- 内存负载
- MemoryUsage --- 内存使用量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名称

- ConcurrencyUsage --- 并发使用率
- CpuCoreUsage --- cpu使用率
- CpuLoad --- cpu负载
- DevelopQueueTask --- 正在队列中的开发任务数量
- DevelopRunningTask --- 正在运行的开发任务数量
- DevelopSchedulingTask --- 正在调度的开发任务数量
- DiskUsage --- 磁盘使用情况
- DiskUsed --- 磁盘已用量
- MaximumConcurrency --- 最大并发
- MemoryLoad --- 内存负载
- MemoryUsage --- 内存使用量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metricName 指标名称

- ConcurrencyUsage --- 并发使用率
- CpuCoreUsage --- cpu使用率
- CpuLoad --- cpu负载
- DevelopQueueTask --- 正在队列中的开发任务数量
- DevelopRunningTask --- 正在运行的开发任务数量
- DevelopSchedulingTask --- 正在调度的开发任务数量
- DiskUsage --- 磁盘使用情况
- DiskUsed --- 磁盘已用量
- MaximumConcurrency --- 最大并发
- MemoryLoad --- 内存负载
- MemoryUsage --- 内存使用量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取当前值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotValue 当前值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSnapshotValue() const;

                    /**
                     * 设置当前值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snapshotValue 当前值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSnapshotValue(const uint64_t& _snapshotValue);

                    /**
                     * 判断参数 SnapshotValue 是否已赋值
                     * @return SnapshotValue 是否已赋值
                     * 
                     */
                    bool SnapshotValueHasBeenSet() const;

                    /**
                     * 获取指标趋势
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrendList 指标趋势
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TrendData> GetTrendList() const;

                    /**
                     * 设置指标趋势
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trendList 指标趋势
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrendList(const std::vector<TrendData>& _trendList);

                    /**
                     * 判断参数 TrendList 是否已赋值
                     * @return TrendList 是否已赋值
                     * 
                     */
                    bool TrendListHasBeenSet() const;

                private:

                    /**
                     * 指标名称

- ConcurrencyUsage --- 并发使用率
- CpuCoreUsage --- cpu使用率
- CpuLoad --- cpu负载
- DevelopQueueTask --- 正在队列中的开发任务数量
- DevelopRunningTask --- 正在运行的开发任务数量
- DevelopSchedulingTask --- 正在调度的开发任务数量
- DiskUsage --- 磁盘使用情况
- DiskUsed --- 磁盘已用量
- MaximumConcurrency --- 最大并发
- MemoryLoad --- 内存负载
- MemoryUsage --- 内存使用量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 当前值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_snapshotValue;
                    bool m_snapshotValueHasBeenSet;

                    /**
                     * 指标趋势
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TrendData> m_trendList;
                    bool m_trendListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_METRICDATA_H_

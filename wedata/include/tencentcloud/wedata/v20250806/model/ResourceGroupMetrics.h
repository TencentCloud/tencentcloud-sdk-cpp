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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCEGROUPMETRICS_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCEGROUPMETRICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/MetricData.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 资源组监控指标
                */
                class ResourceGroupMetrics : public AbstractModel
                {
                public:
                    ResourceGroupMetrics();
                    ~ResourceGroupMetrics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源组规格相关：cpu个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuNum 资源组规格相关：cpu个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCpuNum() const;

                    /**
                     * 设置资源组规格相关：cpu个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuNum 资源组规格相关：cpu个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpuNum(const uint64_t& _cpuNum);

                    /**
                     * 判断参数 CpuNum 是否已赋值
                     * @return CpuNum 是否已赋值
                     * 
                     */
                    bool CpuNumHasBeenSet() const;

                    /**
                     * 获取资源组规格相关：磁盘规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskVolume 资源组规格相关：磁盘规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDiskVolume() const;

                    /**
                     * 设置资源组规格相关：磁盘规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskVolume 资源组规格相关：磁盘规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiskVolume(const uint64_t& _diskVolume);

                    /**
                     * 判断参数 DiskVolume 是否已赋值
                     * @return DiskVolume 是否已赋值
                     * 
                     */
                    bool DiskVolumeHasBeenSet() const;

                    /**
                     * 获取资源组规格相关：内存大小，单位:G
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemSize 资源组规格相关：内存大小，单位:G
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置资源组规格相关：内存大小，单位:G
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memSize 资源组规格相关：内存大小，单位:G
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemSize(const uint64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取资源组生命周期, 单位：天
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LifeCycle 资源组生命周期, 单位：天
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLifeCycle() const;

                    /**
                     * 设置资源组生命周期, 单位：天
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lifeCycle 资源组生命周期, 单位：天
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLifeCycle(const uint64_t& _lifeCycle);

                    /**
                     * 判断参数 LifeCycle 是否已赋值
                     * @return LifeCycle 是否已赋值
                     * 
                     */
                    bool LifeCycleHasBeenSet() const;

                    /**
                     * 获取资源组规格相关：最高并发
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaximumConcurrency 资源组规格相关：最高并发
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaximumConcurrency() const;

                    /**
                     * 设置资源组规格相关：最高并发
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maximumConcurrency 资源组规格相关：最高并发
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaximumConcurrency(const uint64_t& _maximumConcurrency);

                    /**
                     * 判断参数 MaximumConcurrency 是否已赋值
                     * @return MaximumConcurrency 是否已赋值
                     * 
                     */
                    bool MaximumConcurrencyHasBeenSet() const;

                    /**
                     * 获取资源组状态

- 0 --- 初始化中
- 1 --- 运行中
- 2 --- 运行异常
- 3 --- 释放中
- 4 --- 已释放
- 5 --- 创建中
- 6 --- 创建失败
- 7 --- 更新中
- 8 --- 更新失败
- 9 --- 已到期
- 10 --- 释放失败
- 11 --- 使用中
- 12 --- 未使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 资源组状态

- 0 --- 初始化中
- 1 --- 运行中
- 2 --- 运行异常
- 3 --- 释放中
- 4 --- 已释放
- 5 --- 创建中
- 6 --- 创建失败
- 7 --- 更新中
- 8 --- 更新失败
- 9 --- 已到期
- 10 --- 释放失败
- 11 --- 使用中
- 12 --- 未使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置资源组状态

- 0 --- 初始化中
- 1 --- 运行中
- 2 --- 运行异常
- 3 --- 释放中
- 4 --- 已释放
- 5 --- 创建中
- 6 --- 创建失败
- 7 --- 更新中
- 8 --- 更新失败
- 9 --- 已到期
- 10 --- 释放失败
- 11 --- 使用中
- 12 --- 未使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 资源组状态

- 0 --- 初始化中
- 1 --- 运行中
- 2 --- 运行异常
- 3 --- 释放中
- 4 --- 已释放
- 5 --- 创建中
- 6 --- 创建失败
- 7 --- 更新中
- 8 --- 更新失败
- 9 --- 已到期
- 10 --- 释放失败
- 11 --- 使用中
- 12 --- 未使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取指标详情
                     * @return MetricSnapshots 指标详情
                     * 
                     */
                    std::vector<MetricData> GetMetricSnapshots() const;

                    /**
                     * 设置指标详情
                     * @param _metricSnapshots 指标详情
                     * 
                     */
                    void SetMetricSnapshots(const std::vector<MetricData>& _metricSnapshots);

                    /**
                     * 判断参数 MetricSnapshots 是否已赋值
                     * @return MetricSnapshots 是否已赋值
                     * 
                     */
                    bool MetricSnapshotsHasBeenSet() const;

                private:

                    /**
                     * 资源组规格相关：cpu个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * 资源组规格相关：磁盘规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_diskVolume;
                    bool m_diskVolumeHasBeenSet;

                    /**
                     * 资源组规格相关：内存大小，单位:G
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * 资源组生命周期, 单位：天
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_lifeCycle;
                    bool m_lifeCycleHasBeenSet;

                    /**
                     * 资源组规格相关：最高并发
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maximumConcurrency;
                    bool m_maximumConcurrencyHasBeenSet;

                    /**
                     * 资源组状态

- 0 --- 初始化中
- 1 --- 运行中
- 2 --- 运行异常
- 3 --- 释放中
- 4 --- 已释放
- 5 --- 创建中
- 6 --- 创建失败
- 7 --- 更新中
- 8 --- 更新失败
- 9 --- 已到期
- 10 --- 释放失败
- 11 --- 使用中
- 12 --- 未使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 指标详情
                     */
                    std::vector<MetricData> m_metricSnapshots;
                    bool m_metricSnapshotsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCEGROUPMETRICS_H_

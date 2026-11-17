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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEPARTITIONMONITOROVERVIEWREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEPARTITIONMONITOROVERVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribePartitionMonitorOverview请求参数结构体
                */
                class DescribePartitionMonitorOverviewRequest : public AbstractModel
                {
                public:
                    DescribePartitionMonitorOverviewRequest();
                    ~DescribePartitionMonitorOverviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资源分区编码</p>
                     * @return PartitionCode <p>资源分区编码</p>
                     * 
                     */
                    std::string GetPartitionCode() const;

                    /**
                     * 设置<p>资源分区编码</p>
                     * @param _partitionCode <p>资源分区编码</p>
                     * 
                     */
                    void SetPartitionCode(const std::string& _partitionCode);

                    /**
                     * 判断参数 PartitionCode 是否已赋值
                     * @return PartitionCode 是否已赋值
                     * 
                     */
                    bool PartitionCodeHasBeenSet() const;

                    /**
                     * 获取<p>资源组（队列）名称，可选。不传时返回 partition 维度指标（含 pending_workloads / admission_wait_seconds / top_queue_by_cpu 排队卡片、<em>_limit_business 计费口径已使用量、</em><em>quota_total 配额、postpay_month_consumed_total 当月已消耗）；传入时切换为 queue 维度：仅返回 queue</em> 前缀指标（queue_<em><em>limit_business 计费口径已使用量 / queue</em></em>_admitted Kueue 对照口径 / queue_pending_workloads / queue_admission_wait_seconds）+ 该队列的配额指标（cpu_quota_total / memory_quota_total / gpu_quota_total / vram_quota_total，数值来自队列的 resource_usage 而非分区 resource_config）+ postpay_month_consumed_total</p>
                     * @return QueueName <p>资源组（队列）名称，可选。不传时返回 partition 维度指标（含 pending_workloads / admission_wait_seconds / top_queue_by_cpu 排队卡片、<em>_limit_business 计费口径已使用量、</em><em>quota_total 配额、postpay_month_consumed_total 当月已消耗）；传入时切换为 queue 维度：仅返回 queue</em> 前缀指标（queue_<em><em>limit_business 计费口径已使用量 / queue</em></em>_admitted Kueue 对照口径 / queue_pending_workloads / queue_admission_wait_seconds）+ 该队列的配额指标（cpu_quota_total / memory_quota_total / gpu_quota_total / vram_quota_total，数值来自队列的 resource_usage 而非分区 resource_config）+ postpay_month_consumed_total</p>
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置<p>资源组（队列）名称，可选。不传时返回 partition 维度指标（含 pending_workloads / admission_wait_seconds / top_queue_by_cpu 排队卡片、<em>_limit_business 计费口径已使用量、</em><em>quota_total 配额、postpay_month_consumed_total 当月已消耗）；传入时切换为 queue 维度：仅返回 queue</em> 前缀指标（queue_<em><em>limit_business 计费口径已使用量 / queue</em></em>_admitted Kueue 对照口径 / queue_pending_workloads / queue_admission_wait_seconds）+ 该队列的配额指标（cpu_quota_total / memory_quota_total / gpu_quota_total / vram_quota_total，数值来自队列的 resource_usage 而非分区 resource_config）+ postpay_month_consumed_total</p>
                     * @param _queueName <p>资源组（队列）名称，可选。不传时返回 partition 维度指标（含 pending_workloads / admission_wait_seconds / top_queue_by_cpu 排队卡片、<em>_limit_business 计费口径已使用量、</em><em>quota_total 配额、postpay_month_consumed_total 当月已消耗）；传入时切换为 queue 维度：仅返回 queue</em> 前缀指标（queue_<em><em>limit_business 计费口径已使用量 / queue</em></em>_admitted Kueue 对照口径 / queue_pending_workloads / queue_admission_wait_seconds）+ 该队列的配额指标（cpu_quota_total / memory_quota_total / gpu_quota_total / vram_quota_total，数值来自队列的 resource_usage 而非分区 resource_config）+ postpay_month_consumed_total</p>
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取<p>指标 key 过滤列表，为空则返回全部指标</p>
                     * @return MetricKeys <p>指标 key 过滤列表，为空则返回全部指标</p>
                     * 
                     */
                    std::vector<std::string> GetMetricKeys() const;

                    /**
                     * 设置<p>指标 key 过滤列表，为空则返回全部指标</p>
                     * @param _metricKeys <p>指标 key 过滤列表，为空则返回全部指标</p>
                     * 
                     */
                    void SetMetricKeys(const std::vector<std::string>& _metricKeys);

                    /**
                     * 判断参数 MetricKeys 是否已赋值
                     * @return MetricKeys 是否已赋值
                     * 
                     */
                    bool MetricKeysHasBeenSet() const;

                private:

                    /**
                     * <p>资源分区编码</p>
                     */
                    std::string m_partitionCode;
                    bool m_partitionCodeHasBeenSet;

                    /**
                     * <p>资源组（队列）名称，可选。不传时返回 partition 维度指标（含 pending_workloads / admission_wait_seconds / top_queue_by_cpu 排队卡片、<em>_limit_business 计费口径已使用量、</em><em>quota_total 配额、postpay_month_consumed_total 当月已消耗）；传入时切换为 queue 维度：仅返回 queue</em> 前缀指标（queue_<em><em>limit_business 计费口径已使用量 / queue</em></em>_admitted Kueue 对照口径 / queue_pending_workloads / queue_admission_wait_seconds）+ 该队列的配额指标（cpu_quota_total / memory_quota_total / gpu_quota_total / vram_quota_total，数值来自队列的 resource_usage 而非分区 resource_config）+ postpay_month_consumed_total</p>
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * <p>指标 key 过滤列表，为空则返回全部指标</p>
                     */
                    std::vector<std::string> m_metricKeys;
                    bool m_metricKeysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEPARTITIONMONITOROVERVIEWREQUEST_H_

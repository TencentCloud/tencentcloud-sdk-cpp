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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_WORKLOADGROUPCONFIG_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_WORKLOADGROUPCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 资源组相关配置
                */
                class WorkloadGroupConfig : public AbstractModel
                {
                public:
                    WorkloadGroupConfig();
                    ~WorkloadGroupConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资源组名称</p>
                     * @return WorkloadGroupName <p>资源组名称</p>
                     * 
                     */
                    std::string GetWorkloadGroupName() const;

                    /**
                     * 设置<p>资源组名称</p>
                     * @param _workloadGroupName <p>资源组名称</p>
                     * 
                     */
                    void SetWorkloadGroupName(const std::string& _workloadGroupName);

                    /**
                     * 判断参数 WorkloadGroupName 是否已赋值
                     * @return WorkloadGroupName 是否已赋值
                     * 
                     */
                    bool WorkloadGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>CPU权重</p>
                     * @return CpuShare <p>CPU权重</p>
                     * 
                     */
                    int64_t GetCpuShare() const;

                    /**
                     * 设置<p>CPU权重</p>
                     * @param _cpuShare <p>CPU权重</p>
                     * 
                     */
                    void SetCpuShare(const int64_t& _cpuShare);

                    /**
                     * 判断参数 CpuShare 是否已赋值
                     * @return CpuShare 是否已赋值
                     * 
                     */
                    bool CpuShareHasBeenSet() const;

                    /**
                     * 获取<p>内存限制，所有资源组的内存限制值之和应该小于等于100</p>
                     * @return MemoryLimit <p>内存限制，所有资源组的内存限制值之和应该小于等于100</p>
                     * 
                     */
                    int64_t GetMemoryLimit() const;

                    /**
                     * 设置<p>内存限制，所有资源组的内存限制值之和应该小于等于100</p>
                     * @param _memoryLimit <p>内存限制，所有资源组的内存限制值之和应该小于等于100</p>
                     * 
                     */
                    void SetMemoryLimit(const int64_t& _memoryLimit);

                    /**
                     * 判断参数 MemoryLimit 是否已赋值
                     * @return MemoryLimit 是否已赋值
                     * 
                     */
                    bool MemoryLimitHasBeenSet() const;

                    /**
                     * 获取<p>是否允许超配分配</p>
                     * @return EnableMemoryOverCommit <p>是否允许超配分配</p>
                     * 
                     */
                    bool GetEnableMemoryOverCommit() const;

                    /**
                     * 设置<p>是否允许超配分配</p>
                     * @param _enableMemoryOverCommit <p>是否允许超配分配</p>
                     * 
                     */
                    void SetEnableMemoryOverCommit(const bool& _enableMemoryOverCommit);

                    /**
                     * 判断参数 EnableMemoryOverCommit 是否已赋值
                     * @return EnableMemoryOverCommit 是否已赋值
                     * 
                     */
                    bool EnableMemoryOverCommitHasBeenSet() const;

                    /**
                     * 获取<p>cpu硬限制</p>
                     * @return CpuHardLimit <p>cpu硬限制</p>
                     * 
                     */
                    std::string GetCpuHardLimit() const;

                    /**
                     * 设置<p>cpu硬限制</p>
                     * @param _cpuHardLimit <p>cpu硬限制</p>
                     * 
                     */
                    void SetCpuHardLimit(const std::string& _cpuHardLimit);

                    /**
                     * 判断参数 CpuHardLimit 是否已赋值
                     * @return CpuHardLimit 是否已赋值
                     * 
                     */
                    bool CpuHardLimitHasBeenSet() const;

                    /**
                     * 获取<p>4.1+ 新增；默认值为 0（不预留），根据业务可设为 5/10</p>
                     * @return MinCpuPercent <p>4.1+ 新增；默认值为 0（不预留），根据业务可设为 5/10</p>
                     * 
                     */
                    int64_t GetMinCpuPercent() const;

                    /**
                     * 设置<p>4.1+ 新增；默认值为 0（不预留），根据业务可设为 5/10</p>
                     * @param _minCpuPercent <p>4.1+ 新增；默认值为 0（不预留），根据业务可设为 5/10</p>
                     * 
                     */
                    void SetMinCpuPercent(const int64_t& _minCpuPercent);

                    /**
                     * 判断参数 MinCpuPercent 是否已赋值
                     * @return MinCpuPercent 是否已赋值
                     * 
                     */
                    bool MinCpuPercentHasBeenSet() const;

                    /**
                     * 获取<p>4.1+ 新增；默认值为 0（不预留），根据业务可设为 5/10</p>
                     * @return MinMemoryPercent <p>4.1+ 新增；默认值为 0（不预留），根据业务可设为 5/10</p>
                     * 
                     */
                    int64_t GetMinMemoryPercent() const;

                    /**
                     * 设置<p>4.1+ 新增；默认值为 0（不预留），根据业务可设为 5/10</p>
                     * @param _minMemoryPercent <p>4.1+ 新增；默认值为 0（不预留），根据业务可设为 5/10</p>
                     * 
                     */
                    void SetMinMemoryPercent(const int64_t& _minMemoryPercent);

                    /**
                     * 判断参数 MinMemoryPercent 是否已赋值
                     * @return MinMemoryPercent 是否已赋值
                     * 
                     */
                    bool MinMemoryPercentHasBeenSet() const;

                    /**
                     * 获取<p>2.1+ 新增；不传走内核默认（Integer.MAX_VALUE=2147483647），建议按业务并发量配置</p>
                     * @return MaxConcurrencyNum <p>2.1+ 新增；不传走内核默认（Integer.MAX_VALUE=2147483647），建议按业务并发量配置</p>
                     * 
                     */
                    int64_t GetMaxConcurrencyNum() const;

                    /**
                     * 设置<p>2.1+ 新增；不传走内核默认（Integer.MAX_VALUE=2147483647），建议按业务并发量配置</p>
                     * @param _maxConcurrencyNum <p>2.1+ 新增；不传走内核默认（Integer.MAX_VALUE=2147483647），建议按业务并发量配置</p>
                     * 
                     */
                    void SetMaxConcurrencyNum(const int64_t& _maxConcurrencyNum);

                    /**
                     * 判断参数 MaxConcurrencyNum 是否已赋值
                     * @return MaxConcurrencyNum 是否已赋值
                     * 
                     */
                    bool MaxConcurrencyNumHasBeenSet() const;

                    /**
                     * 获取<p>2.1+ 新增；0=不排队，建议为 MaxConcurrencyNum 的 50%</p>
                     * @return MaxQueueSize <p>2.1+ 新增；0=不排队，建议为 MaxConcurrencyNum 的 50%</p>
                     * 
                     */
                    int64_t GetMaxQueueSize() const;

                    /**
                     * 设置<p>2.1+ 新增；0=不排队，建议为 MaxConcurrencyNum 的 50%</p>
                     * @param _maxQueueSize <p>2.1+ 新增；0=不排队，建议为 MaxConcurrencyNum 的 50%</p>
                     * 
                     */
                    void SetMaxQueueSize(const int64_t& _maxQueueSize);

                    /**
                     * 判断参数 MaxQueueSize 是否已赋值
                     * @return MaxQueueSize 是否已赋值
                     * 
                     */
                    bool MaxQueueSizeHasBeenSet() const;

                    /**
                     * 获取<p>2.1+ 新增；单位 ms，建议 5000（5s）</p>
                     * @return QueueTimeout <p>2.1+ 新增；单位 ms，建议 5000（5s）</p>
                     * 
                     */
                    int64_t GetQueueTimeout() const;

                    /**
                     * 设置<p>2.1+ 新增；单位 ms，建议 5000（5s）</p>
                     * @param _queueTimeout <p>2.1+ 新增；单位 ms，建议 5000（5s）</p>
                     * 
                     */
                    void SetQueueTimeout(const int64_t& _queueTimeout);

                    /**
                     * 判断参数 QueueTimeout 是否已赋值
                     * @return QueueTimeout 是否已赋值
                     * 
                     */
                    bool QueueTimeoutHasBeenSet() const;

                private:

                    /**
                     * <p>资源组名称</p>
                     */
                    std::string m_workloadGroupName;
                    bool m_workloadGroupNameHasBeenSet;

                    /**
                     * <p>CPU权重</p>
                     */
                    int64_t m_cpuShare;
                    bool m_cpuShareHasBeenSet;

                    /**
                     * <p>内存限制，所有资源组的内存限制值之和应该小于等于100</p>
                     */
                    int64_t m_memoryLimit;
                    bool m_memoryLimitHasBeenSet;

                    /**
                     * <p>是否允许超配分配</p>
                     */
                    bool m_enableMemoryOverCommit;
                    bool m_enableMemoryOverCommitHasBeenSet;

                    /**
                     * <p>cpu硬限制</p>
                     */
                    std::string m_cpuHardLimit;
                    bool m_cpuHardLimitHasBeenSet;

                    /**
                     * <p>4.1+ 新增；默认值为 0（不预留），根据业务可设为 5/10</p>
                     */
                    int64_t m_minCpuPercent;
                    bool m_minCpuPercentHasBeenSet;

                    /**
                     * <p>4.1+ 新增；默认值为 0（不预留），根据业务可设为 5/10</p>
                     */
                    int64_t m_minMemoryPercent;
                    bool m_minMemoryPercentHasBeenSet;

                    /**
                     * <p>2.1+ 新增；不传走内核默认（Integer.MAX_VALUE=2147483647），建议按业务并发量配置</p>
                     */
                    int64_t m_maxConcurrencyNum;
                    bool m_maxConcurrencyNumHasBeenSet;

                    /**
                     * <p>2.1+ 新增；0=不排队，建议为 MaxConcurrencyNum 的 50%</p>
                     */
                    int64_t m_maxQueueSize;
                    bool m_maxQueueSizeHasBeenSet;

                    /**
                     * <p>2.1+ 新增；单位 ms，建议 5000（5s）</p>
                     */
                    int64_t m_queueTimeout;
                    bool m_queueTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_WORKLOADGROUPCONFIG_H_

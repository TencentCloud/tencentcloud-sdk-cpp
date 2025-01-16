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
                     * 获取资源组名称
                     * @return WorkloadGroupName 资源组名称
                     * 
                     */
                    std::string GetWorkloadGroupName() const;

                    /**
                     * 设置资源组名称
                     * @param _workloadGroupName 资源组名称
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
                     * 获取CPU权重
                     * @return CpuShare CPU权重
                     * 
                     */
                    int64_t GetCpuShare() const;

                    /**
                     * 设置CPU权重
                     * @param _cpuShare CPU权重
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
                     * 获取内存限制，所有资源组的内存限制值之和应该小于等于100
                     * @return MemoryLimit 内存限制，所有资源组的内存限制值之和应该小于等于100
                     * 
                     */
                    int64_t GetMemoryLimit() const;

                    /**
                     * 设置内存限制，所有资源组的内存限制值之和应该小于等于100
                     * @param _memoryLimit 内存限制，所有资源组的内存限制值之和应该小于等于100
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
                     * 获取是否允许超配分配
                     * @return EnableMemoryOverCommit 是否允许超配分配
                     * 
                     */
                    bool GetEnableMemoryOverCommit() const;

                    /**
                     * 设置是否允许超配分配
                     * @param _enableMemoryOverCommit 是否允许超配分配
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
                     * 获取cpu硬限制
                     * @return CpuHardLimit cpu硬限制
                     * 
                     */
                    std::string GetCpuHardLimit() const;

                    /**
                     * 设置cpu硬限制
                     * @param _cpuHardLimit cpu硬限制
                     * 
                     */
                    void SetCpuHardLimit(const std::string& _cpuHardLimit);

                    /**
                     * 判断参数 CpuHardLimit 是否已赋值
                     * @return CpuHardLimit 是否已赋值
                     * 
                     */
                    bool CpuHardLimitHasBeenSet() const;

                private:

                    /**
                     * 资源组名称
                     */
                    std::string m_workloadGroupName;
                    bool m_workloadGroupNameHasBeenSet;

                    /**
                     * CPU权重
                     */
                    int64_t m_cpuShare;
                    bool m_cpuShareHasBeenSet;

                    /**
                     * 内存限制，所有资源组的内存限制值之和应该小于等于100
                     */
                    int64_t m_memoryLimit;
                    bool m_memoryLimitHasBeenSet;

                    /**
                     * 是否允许超配分配
                     */
                    bool m_enableMemoryOverCommit;
                    bool m_enableMemoryOverCommitHasBeenSet;

                    /**
                     * cpu硬限制
                     */
                    std::string m_cpuHardLimit;
                    bool m_cpuHardLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_WORKLOADGROUPCONFIG_H_

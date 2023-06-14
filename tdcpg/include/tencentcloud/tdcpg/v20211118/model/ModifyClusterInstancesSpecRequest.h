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

#ifndef TENCENTCLOUD_TDCPG_V20211118_MODEL_MODIFYCLUSTERINSTANCESSPECREQUEST_H_
#define TENCENTCLOUD_TDCPG_V20211118_MODEL_MODIFYCLUSTERINSTANCESSPECREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdcpg
    {
        namespace V20211118
        {
            namespace Model
            {
                /**
                * ModifyClusterInstancesSpec请求参数结构体
                */
                class ModifyClusterInstancesSpecRequest : public AbstractModel
                {
                public:
                    ModifyClusterInstancesSpecRequest();
                    ~ModifyClusterInstancesSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取实例ID列表，目前只支持单个实例修改
                     * @return InstanceIdSet 实例ID列表，目前只支持单个实例修改
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置实例ID列表，目前只支持单个实例修改
                     * @param _instanceIdSet 实例ID列表，目前只支持单个实例修改
                     * 
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     * 
                     */
                    bool InstanceIdSetHasBeenSet() const;

                    /**
                     * 获取修改后的CPU核数。取值参考文档【购买指南】
                     * @return CPU 修改后的CPU核数。取值参考文档【购买指南】
                     * 
                     */
                    uint64_t GetCPU() const;

                    /**
                     * 设置修改后的CPU核数。取值参考文档【购买指南】
                     * @param _cPU 修改后的CPU核数。取值参考文档【购买指南】
                     * 
                     */
                    void SetCPU(const uint64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取修改后的内存大小，单位GiB。取值参考文档【购买指南】
                     * @return Memory 修改后的内存大小，单位GiB。取值参考文档【购买指南】
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置修改后的内存大小，单位GiB。取值参考文档【购买指南】
                     * @param _memory 修改后的内存大小，单位GiB。取值参考文档【购买指南】
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取操作时机
 - IMMEDIATE：立即执行 
 - MAINTAIN_PERIOD：维护窗口期执行
                     * @return OperationTiming 操作时机
 - IMMEDIATE：立即执行 
 - MAINTAIN_PERIOD：维护窗口期执行
                     * 
                     */
                    std::string GetOperationTiming() const;

                    /**
                     * 设置操作时机
 - IMMEDIATE：立即执行 
 - MAINTAIN_PERIOD：维护窗口期执行
                     * @param _operationTiming 操作时机
 - IMMEDIATE：立即执行 
 - MAINTAIN_PERIOD：维护窗口期执行
                     * 
                     */
                    void SetOperationTiming(const std::string& _operationTiming);

                    /**
                     * 判断参数 OperationTiming 是否已赋值
                     * @return OperationTiming 是否已赋值
                     * 
                     */
                    bool OperationTimingHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 实例ID列表，目前只支持单个实例修改
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * 修改后的CPU核数。取值参考文档【购买指南】
                     */
                    uint64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * 修改后的内存大小，单位GiB。取值参考文档【购买指南】
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 操作时机
 - IMMEDIATE：立即执行 
 - MAINTAIN_PERIOD：维护窗口期执行
                     */
                    std::string m_operationTiming;
                    bool m_operationTimingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDCPG_V20211118_MODEL_MODIFYCLUSTERINSTANCESSPECREQUEST_H_

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

#ifndef TENCENTCLOUD_TDCPG_V20211118_MODEL_CREATECLUSTERINSTANCESREQUEST_H_
#define TENCENTCLOUD_TDCPG_V20211118_MODEL_CREATECLUSTERINSTANCESREQUEST_H_

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
                * CreateClusterInstances请求参数结构体
                */
                class CreateClusterInstancesRequest : public AbstractModel
                {
                public:
                    CreateClusterInstancesRequest();
                    ~CreateClusterInstancesRequest() = default;
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
                     * 获取CPU核数。取值参考文档【购买指南】
                     * @return CPU CPU核数。取值参考文档【购买指南】
                     * 
                     */
                    uint64_t GetCPU() const;

                    /**
                     * 设置CPU核数。取值参考文档【购买指南】
                     * @param _cPU CPU核数。取值参考文档【购买指南】
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
                     * 获取内存大小，单位GiB。取值参考文档【购买指南】
                     * @return Memory 内存大小，单位GiB。取值参考文档【购买指南】
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存大小，单位GiB。取值参考文档【购买指南】
                     * @param _memory 内存大小，单位GiB。取值参考文档【购买指南】
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
                     * 获取实例名，1-60个字符，可以包含中文、英文、数字和符号"-"、"_"、"."。不输入此参数时默认与InstanceId一致。
                     * @return InstanceName 实例名，1-60个字符，可以包含中文、英文、数字和符号"-"、"_"、"."。不输入此参数时默认与InstanceId一致。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名，1-60个字符，可以包含中文、英文、数字和符号"-"、"_"、"."。不输入此参数时默认与InstanceId一致。
                     * @param _instanceName 实例名，1-60个字符，可以包含中文、英文、数字和符号"-"、"_"、"."。不输入此参数时默认与InstanceId一致。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取新建实例的数量，默认为1。单集群下实例数量目前不能超过4个。
                     * @return InstanceCount 新建实例的数量，默认为1。单集群下实例数量目前不能超过4个。
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置新建实例的数量，默认为1。单集群下实例数量目前不能超过4个。
                     * @param _instanceCount 新建实例的数量，默认为1。单集群下实例数量目前不能超过4个。
                     * 
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * CPU核数。取值参考文档【购买指南】
                     */
                    uint64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * 内存大小，单位GiB。取值参考文档【购买指南】
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例名，1-60个字符，可以包含中文、英文、数字和符号"-"、"_"、"."。不输入此参数时默认与InstanceId一致。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 新建实例的数量，默认为1。单集群下实例数量目前不能超过4个。
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDCPG_V20211118_MODEL_CREATECLUSTERINSTANCESREQUEST_H_

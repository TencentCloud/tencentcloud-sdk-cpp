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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SETNODERESOURCECONFIGDEFAULTREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SETNODERESOURCECONFIGDEFAULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * SetNodeResourceConfigDefault请求参数结构体
                */
                class SetNodeResourceConfigDefaultRequest : public AbstractModel
                {
                public:
                    SetNodeResourceConfigDefaultRequest();
                    ~SetNodeResourceConfigDefaultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群实例Id
                     * @return InstanceId 集群实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群实例Id
                     * @param _instanceId 集群实例Id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取配置Id
                     * @return ResourceConfigId 配置Id
                     * 
                     */
                    uint64_t GetResourceConfigId() const;

                    /**
                     * 设置配置Id
                     * @param _resourceConfigId 配置Id
                     * 
                     */
                    void SetResourceConfigId(const uint64_t& _resourceConfigId);

                    /**
                     * 判断参数 ResourceConfigId 是否已赋值
                     * @return ResourceConfigId 是否已赋值
                     * 
                     */
                    bool ResourceConfigIdHasBeenSet() const;

                    /**
                     * 获取规格节点类型 CORE TASK ROUTER
                     * @return ResourceType 规格节点类型 CORE TASK ROUTER
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置规格节点类型 CORE TASK ROUTER
                     * @param _resourceType 规格节点类型 CORE TASK ROUTER
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取类型为ComputeResource和EMR以及默认，默认为EMR
                     * @return ResourceBaseType 类型为ComputeResource和EMR以及默认，默认为EMR
                     * 
                     */
                    std::string GetResourceBaseType() const;

                    /**
                     * 设置类型为ComputeResource和EMR以及默认，默认为EMR
                     * @param _resourceBaseType 类型为ComputeResource和EMR以及默认，默认为EMR
                     * 
                     */
                    void SetResourceBaseType(const std::string& _resourceBaseType);

                    /**
                     * 判断参数 ResourceBaseType 是否已赋值
                     * @return ResourceBaseType 是否已赋值
                     * 
                     */
                    bool ResourceBaseTypeHasBeenSet() const;

                    /**
                     * 获取计算资源id
                     * @return ComputeResourceId 计算资源id
                     * 
                     */
                    std::string GetComputeResourceId() const;

                    /**
                     * 设置计算资源id
                     * @param _computeResourceId 计算资源id
                     * 
                     */
                    void SetComputeResourceId(const std::string& _computeResourceId);

                    /**
                     * 判断参数 ComputeResourceId 是否已赋值
                     * @return ComputeResourceId 是否已赋值
                     * 
                     */
                    bool ComputeResourceIdHasBeenSet() const;

                    /**
                     * 获取硬件类型
                     * @return HardwareResourceType 硬件类型
                     * 
                     */
                    std::string GetHardwareResourceType() const;

                    /**
                     * 设置硬件类型
                     * @param _hardwareResourceType 硬件类型
                     * 
                     */
                    void SetHardwareResourceType(const std::string& _hardwareResourceType);

                    /**
                     * 判断参数 HardwareResourceType 是否已赋值
                     * @return HardwareResourceType 是否已赋值
                     * 
                     */
                    bool HardwareResourceTypeHasBeenSet() const;

                private:

                    /**
                     * 集群实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 配置Id
                     */
                    uint64_t m_resourceConfigId;
                    bool m_resourceConfigIdHasBeenSet;

                    /**
                     * 规格节点类型 CORE TASK ROUTER
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 类型为ComputeResource和EMR以及默认，默认为EMR
                     */
                    std::string m_resourceBaseType;
                    bool m_resourceBaseTypeHasBeenSet;

                    /**
                     * 计算资源id
                     */
                    std::string m_computeResourceId;
                    bool m_computeResourceIdHasBeenSet;

                    /**
                     * 硬件类型
                     */
                    std::string m_hardwareResourceType;
                    bool m_hardwareResourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SETNODERESOURCECONFIGDEFAULTREQUEST_H_

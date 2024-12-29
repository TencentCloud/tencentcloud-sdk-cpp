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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_ADDNODERESOURCECONFIGREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_ADDNODERESOURCECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Resource.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * AddNodeResourceConfig请求参数结构体
                */
                class AddNodeResourceConfigRequest : public AbstractModel
                {
                public:
                    AddNodeResourceConfigRequest();
                    ~AddNodeResourceConfigRequest() = default;
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
                     * 获取节点类型 CORE TASK ROUTER
                     * @return ResourceType 节点类型 CORE TASK ROUTER
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置节点类型 CORE TASK ROUTER
                     * @param _resourceType 节点类型 CORE TASK ROUTER
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
                     * 获取资源详情
                     * @return ResourceConfig 资源详情
                     * 
                     */
                    Resource GetResourceConfig() const;

                    /**
                     * 设置资源详情
                     * @param _resourceConfig 资源详情
                     * 
                     */
                    void SetResourceConfig(const Resource& _resourceConfig);

                    /**
                     * 判断参数 ResourceConfig 是否已赋值
                     * @return ResourceConfig 是否已赋值
                     * 
                     */
                    bool ResourceConfigHasBeenSet() const;

                    /**
                     * 获取付费模式
                     * @return PayMode 付费模式
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费模式
                     * @param _payMode 付费模式
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取是否默认配置,DEFAULT,BACKUP,不填默认不是默认配置
                     * @return IsDefault 是否默认配置,DEFAULT,BACKUP,不填默认不是默认配置
                     * 
                     */
                    std::string GetIsDefault() const;

                    /**
                     * 设置是否默认配置,DEFAULT,BACKUP,不填默认不是默认配置
                     * @param _isDefault 是否默认配置,DEFAULT,BACKUP,不填默认不是默认配置
                     * 
                     */
                    void SetIsDefault(const std::string& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取地域ID
                     * @return ZoneId 地域ID
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置地域ID
                     * @param _zoneId 地域ID
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取添加多个规格时，第1个规格详情在ResourceConfig参数，第2-n个在MultipleResourceConfig参数
                     * @return MultipleResourceConfig 添加多个规格时，第1个规格详情在ResourceConfig参数，第2-n个在MultipleResourceConfig参数
                     * 
                     */
                    std::vector<Resource> GetMultipleResourceConfig() const;

                    /**
                     * 设置添加多个规格时，第1个规格详情在ResourceConfig参数，第2-n个在MultipleResourceConfig参数
                     * @param _multipleResourceConfig 添加多个规格时，第1个规格详情在ResourceConfig参数，第2-n个在MultipleResourceConfig参数
                     * 
                     */
                    void SetMultipleResourceConfig(const std::vector<Resource>& _multipleResourceConfig);

                    /**
                     * 判断参数 MultipleResourceConfig 是否已赋值
                     * @return MultipleResourceConfig 是否已赋值
                     * 
                     */
                    bool MultipleResourceConfigHasBeenSet() const;

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
                     * 节点类型 CORE TASK ROUTER
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源详情
                     */
                    Resource m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                    /**
                     * 付费模式
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 是否默认配置,DEFAULT,BACKUP,不填默认不是默认配置
                     */
                    std::string m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 地域ID
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 添加多个规格时，第1个规格详情在ResourceConfig参数，第2-n个在MultipleResourceConfig参数
                     */
                    std::vector<Resource> m_multipleResourceConfig;
                    bool m_multipleResourceConfigHasBeenSet;

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

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_ADDNODERESOURCECONFIGREQUEST_H_

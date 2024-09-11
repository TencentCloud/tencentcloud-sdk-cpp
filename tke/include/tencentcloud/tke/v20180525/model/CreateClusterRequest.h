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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ClusterCIDRSettings.h>
#include <tencentcloud/tke/v20180525/model/RunInstancesForNode.h>
#include <tencentcloud/tke/v20180525/model/ClusterBasicSettings.h>
#include <tencentcloud/tke/v20180525/model/ClusterAdvancedSettings.h>
#include <tencentcloud/tke/v20180525/model/InstanceAdvancedSettings.h>
#include <tencentcloud/tke/v20180525/model/ExistedInstancesForNode.h>
#include <tencentcloud/tke/v20180525/model/InstanceDataDiskMountSetting.h>
#include <tencentcloud/tke/v20180525/model/ExtensionAddon.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreateCluster请求参数结构体
                */
                class CreateClusterRequest : public AbstractModel
                {
                public:
                    CreateClusterRequest();
                    ~CreateClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER。
                     * @return ClusterType 集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER。
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER。
                     * @param _clusterType 集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER。
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取集群容器网络配置信息
                     * @return ClusterCIDRSettings 集群容器网络配置信息
                     * 
                     */
                    ClusterCIDRSettings GetClusterCIDRSettings() const;

                    /**
                     * 设置集群容器网络配置信息
                     * @param _clusterCIDRSettings 集群容器网络配置信息
                     * 
                     */
                    void SetClusterCIDRSettings(const ClusterCIDRSettings& _clusterCIDRSettings);

                    /**
                     * 判断参数 ClusterCIDRSettings 是否已赋值
                     * @return ClusterCIDRSettings 是否已赋值
                     * 
                     */
                    bool ClusterCIDRSettingsHasBeenSet() const;

                    /**
                     * 获取CVM创建透传参数，json化字符串格式，详见[CVM创建实例](https://cloud.tencent.com/document/product/213/15730)接口。总机型(包括地域)数量不超过10个，相同机型(地域)购买多台机器可以通过设置参数中RunInstances中InstanceCount来实现。
                     * @return RunInstancesForNode CVM创建透传参数，json化字符串格式，详见[CVM创建实例](https://cloud.tencent.com/document/product/213/15730)接口。总机型(包括地域)数量不超过10个，相同机型(地域)购买多台机器可以通过设置参数中RunInstances中InstanceCount来实现。
                     * 
                     */
                    std::vector<RunInstancesForNode> GetRunInstancesForNode() const;

                    /**
                     * 设置CVM创建透传参数，json化字符串格式，详见[CVM创建实例](https://cloud.tencent.com/document/product/213/15730)接口。总机型(包括地域)数量不超过10个，相同机型(地域)购买多台机器可以通过设置参数中RunInstances中InstanceCount来实现。
                     * @param _runInstancesForNode CVM创建透传参数，json化字符串格式，详见[CVM创建实例](https://cloud.tencent.com/document/product/213/15730)接口。总机型(包括地域)数量不超过10个，相同机型(地域)购买多台机器可以通过设置参数中RunInstances中InstanceCount来实现。
                     * 
                     */
                    void SetRunInstancesForNode(const std::vector<RunInstancesForNode>& _runInstancesForNode);

                    /**
                     * 判断参数 RunInstancesForNode 是否已赋值
                     * @return RunInstancesForNode 是否已赋值
                     * 
                     */
                    bool RunInstancesForNodeHasBeenSet() const;

                    /**
                     * 获取集群的基本配置信息
                     * @return ClusterBasicSettings 集群的基本配置信息
                     * 
                     */
                    ClusterBasicSettings GetClusterBasicSettings() const;

                    /**
                     * 设置集群的基本配置信息
                     * @param _clusterBasicSettings 集群的基本配置信息
                     * 
                     */
                    void SetClusterBasicSettings(const ClusterBasicSettings& _clusterBasicSettings);

                    /**
                     * 判断参数 ClusterBasicSettings 是否已赋值
                     * @return ClusterBasicSettings 是否已赋值
                     * 
                     */
                    bool ClusterBasicSettingsHasBeenSet() const;

                    /**
                     * 获取集群高级配置信息
                     * @return ClusterAdvancedSettings 集群高级配置信息
                     * 
                     */
                    ClusterAdvancedSettings GetClusterAdvancedSettings() const;

                    /**
                     * 设置集群高级配置信息
                     * @param _clusterAdvancedSettings 集群高级配置信息
                     * 
                     */
                    void SetClusterAdvancedSettings(const ClusterAdvancedSettings& _clusterAdvancedSettings);

                    /**
                     * 判断参数 ClusterAdvancedSettings 是否已赋值
                     * @return ClusterAdvancedSettings 是否已赋值
                     * 
                     */
                    bool ClusterAdvancedSettingsHasBeenSet() const;

                    /**
                     * 获取节点高级配置信息
                     * @return InstanceAdvancedSettings 节点高级配置信息
                     * 
                     */
                    InstanceAdvancedSettings GetInstanceAdvancedSettings() const;

                    /**
                     * 设置节点高级配置信息
                     * @param _instanceAdvancedSettings 节点高级配置信息
                     * 
                     */
                    void SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings);

                    /**
                     * 判断参数 InstanceAdvancedSettings 是否已赋值
                     * @return InstanceAdvancedSettings 是否已赋值
                     * 
                     */
                    bool InstanceAdvancedSettingsHasBeenSet() const;

                    /**
                     * 获取已存在实例的配置信息。所有实例必须在同一个VPC中，最大数量不超过100，不支持添加竞价实例。
                     * @return ExistedInstancesForNode 已存在实例的配置信息。所有实例必须在同一个VPC中，最大数量不超过100，不支持添加竞价实例。
                     * 
                     */
                    std::vector<ExistedInstancesForNode> GetExistedInstancesForNode() const;

                    /**
                     * 设置已存在实例的配置信息。所有实例必须在同一个VPC中，最大数量不超过100，不支持添加竞价实例。
                     * @param _existedInstancesForNode 已存在实例的配置信息。所有实例必须在同一个VPC中，最大数量不超过100，不支持添加竞价实例。
                     * 
                     */
                    void SetExistedInstancesForNode(const std::vector<ExistedInstancesForNode>& _existedInstancesForNode);

                    /**
                     * 判断参数 ExistedInstancesForNode 是否已赋值
                     * @return ExistedInstancesForNode 是否已赋值
                     * 
                     */
                    bool ExistedInstancesForNodeHasBeenSet() const;

                    /**
                     * 获取CVM类型和其对应的数据盘挂载配置信息
                     * @return InstanceDataDiskMountSettings CVM类型和其对应的数据盘挂载配置信息
                     * 
                     */
                    std::vector<InstanceDataDiskMountSetting> GetInstanceDataDiskMountSettings() const;

                    /**
                     * 设置CVM类型和其对应的数据盘挂载配置信息
                     * @param _instanceDataDiskMountSettings CVM类型和其对应的数据盘挂载配置信息
                     * 
                     */
                    void SetInstanceDataDiskMountSettings(const std::vector<InstanceDataDiskMountSetting>& _instanceDataDiskMountSettings);

                    /**
                     * 判断参数 InstanceDataDiskMountSettings 是否已赋值
                     * @return InstanceDataDiskMountSettings 是否已赋值
                     * 
                     */
                    bool InstanceDataDiskMountSettingsHasBeenSet() const;

                    /**
                     * 获取需要安装的扩展组件信息
                     * @return ExtensionAddons 需要安装的扩展组件信息
                     * 
                     */
                    std::vector<ExtensionAddon> GetExtensionAddons() const;

                    /**
                     * 设置需要安装的扩展组件信息
                     * @param _extensionAddons 需要安装的扩展组件信息
                     * 
                     */
                    void SetExtensionAddons(const std::vector<ExtensionAddon>& _extensionAddons);

                    /**
                     * 判断参数 ExtensionAddons 是否已赋值
                     * @return ExtensionAddons 是否已赋值
                     * 
                     */
                    bool ExtensionAddonsHasBeenSet() const;

                    /**
                     * 获取本地专用集群Id
                     * @return CdcId 本地专用集群Id
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置本地专用集群Id
                     * @param _cdcId 本地专用集群Id
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                private:

                    /**
                     * 集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER。
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 集群容器网络配置信息
                     */
                    ClusterCIDRSettings m_clusterCIDRSettings;
                    bool m_clusterCIDRSettingsHasBeenSet;

                    /**
                     * CVM创建透传参数，json化字符串格式，详见[CVM创建实例](https://cloud.tencent.com/document/product/213/15730)接口。总机型(包括地域)数量不超过10个，相同机型(地域)购买多台机器可以通过设置参数中RunInstances中InstanceCount来实现。
                     */
                    std::vector<RunInstancesForNode> m_runInstancesForNode;
                    bool m_runInstancesForNodeHasBeenSet;

                    /**
                     * 集群的基本配置信息
                     */
                    ClusterBasicSettings m_clusterBasicSettings;
                    bool m_clusterBasicSettingsHasBeenSet;

                    /**
                     * 集群高级配置信息
                     */
                    ClusterAdvancedSettings m_clusterAdvancedSettings;
                    bool m_clusterAdvancedSettingsHasBeenSet;

                    /**
                     * 节点高级配置信息
                     */
                    InstanceAdvancedSettings m_instanceAdvancedSettings;
                    bool m_instanceAdvancedSettingsHasBeenSet;

                    /**
                     * 已存在实例的配置信息。所有实例必须在同一个VPC中，最大数量不超过100，不支持添加竞价实例。
                     */
                    std::vector<ExistedInstancesForNode> m_existedInstancesForNode;
                    bool m_existedInstancesForNodeHasBeenSet;

                    /**
                     * CVM类型和其对应的数据盘挂载配置信息
                     */
                    std::vector<InstanceDataDiskMountSetting> m_instanceDataDiskMountSettings;
                    bool m_instanceDataDiskMountSettingsHasBeenSet;

                    /**
                     * 需要安装的扩展组件信息
                     */
                    std::vector<ExtensionAddon> m_extensionAddons;
                    bool m_extensionAddonsHasBeenSet;

                    /**
                     * 本地专用集群Id
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERREQUEST_H_

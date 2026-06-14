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
                     * 获取<p>集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER。</p>
                     * @return ClusterType <p>集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER。</p>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER。</p>
                     * @param _clusterType <p>集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER。</p>
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
                     * 获取<p>集群容器网络配置信息</p>
                     * @return ClusterCIDRSettings <p>集群容器网络配置信息</p>
                     * 
                     */
                    ClusterCIDRSettings GetClusterCIDRSettings() const;

                    /**
                     * 设置<p>集群容器网络配置信息</p>
                     * @param _clusterCIDRSettings <p>集群容器网络配置信息</p>
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
                     * 获取<p>CVM创建透传参数，json化字符串格式，详见<a href="https://cloud.tencent.com/document/product/213/15730">CVM创建实例</a>接口。总机型(包括地域)数量不超过10个，相同机型(地域)购买多台机器可以通过设置参数中RunInstances中InstanceCount来实现。</p>
                     * @return RunInstancesForNode <p>CVM创建透传参数，json化字符串格式，详见<a href="https://cloud.tencent.com/document/product/213/15730">CVM创建实例</a>接口。总机型(包括地域)数量不超过10个，相同机型(地域)购买多台机器可以通过设置参数中RunInstances中InstanceCount来实现。</p>
                     * 
                     */
                    std::vector<RunInstancesForNode> GetRunInstancesForNode() const;

                    /**
                     * 设置<p>CVM创建透传参数，json化字符串格式，详见<a href="https://cloud.tencent.com/document/product/213/15730">CVM创建实例</a>接口。总机型(包括地域)数量不超过10个，相同机型(地域)购买多台机器可以通过设置参数中RunInstances中InstanceCount来实现。</p>
                     * @param _runInstancesForNode <p>CVM创建透传参数，json化字符串格式，详见<a href="https://cloud.tencent.com/document/product/213/15730">CVM创建实例</a>接口。总机型(包括地域)数量不超过10个，相同机型(地域)购买多台机器可以通过设置参数中RunInstances中InstanceCount来实现。</p>
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
                     * 获取<p>集群的基本配置信息</p>
                     * @return ClusterBasicSettings <p>集群的基本配置信息</p>
                     * 
                     */
                    ClusterBasicSettings GetClusterBasicSettings() const;

                    /**
                     * 设置<p>集群的基本配置信息</p>
                     * @param _clusterBasicSettings <p>集群的基本配置信息</p>
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
                     * 获取<p>集群高级配置信息</p>
                     * @return ClusterAdvancedSettings <p>集群高级配置信息</p>
                     * 
                     */
                    ClusterAdvancedSettings GetClusterAdvancedSettings() const;

                    /**
                     * 设置<p>集群高级配置信息</p>
                     * @param _clusterAdvancedSettings <p>集群高级配置信息</p>
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
                     * 获取<p>节点高级配置信息</p>
                     * @return InstanceAdvancedSettings <p>节点高级配置信息</p>
                     * 
                     */
                    InstanceAdvancedSettings GetInstanceAdvancedSettings() const;

                    /**
                     * 设置<p>节点高级配置信息</p>
                     * @param _instanceAdvancedSettings <p>节点高级配置信息</p>
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
                     * 获取<p>已存在实例的配置信息。所有实例必须在同一个VPC中，最大数量不超过 50，不支持添加竞价实例。</p>
                     * @return ExistedInstancesForNode <p>已存在实例的配置信息。所有实例必须在同一个VPC中，最大数量不超过 50，不支持添加竞价实例。</p>
                     * 
                     */
                    std::vector<ExistedInstancesForNode> GetExistedInstancesForNode() const;

                    /**
                     * 设置<p>已存在实例的配置信息。所有实例必须在同一个VPC中，最大数量不超过 50，不支持添加竞价实例。</p>
                     * @param _existedInstancesForNode <p>已存在实例的配置信息。所有实例必须在同一个VPC中，最大数量不超过 50，不支持添加竞价实例。</p>
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
                     * 获取<p>CVM类型和其对应的数据盘挂载配置信息</p>
                     * @return InstanceDataDiskMountSettings <p>CVM类型和其对应的数据盘挂载配置信息</p>
                     * 
                     */
                    std::vector<InstanceDataDiskMountSetting> GetInstanceDataDiskMountSettings() const;

                    /**
                     * 设置<p>CVM类型和其对应的数据盘挂载配置信息</p>
                     * @param _instanceDataDiskMountSettings <p>CVM类型和其对应的数据盘挂载配置信息</p>
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
                     * 获取<p>需要安装的扩展组件信息</p>
                     * @return ExtensionAddons <p>需要安装的扩展组件信息</p>
                     * 
                     */
                    std::vector<ExtensionAddon> GetExtensionAddons() const;

                    /**
                     * 设置<p>需要安装的扩展组件信息</p>
                     * @param _extensionAddons <p>需要安装的扩展组件信息</p>
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
                     * 获取<p>本地专用集群Id</p>
                     * @return CdcId <p>本地专用集群Id</p>
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置<p>本地专用集群Id</p>
                     * @param _cdcId <p>本地专用集群Id</p>
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取<p>屏蔽安装指定Addon组件，填写相应的AddonName</p>
                     * @return DisableAddons <p>屏蔽安装指定Addon组件，填写相应的AddonName</p>
                     * 
                     */
                    std::vector<std::string> GetDisableAddons() const;

                    /**
                     * 设置<p>屏蔽安装指定Addon组件，填写相应的AddonName</p>
                     * @param _disableAddons <p>屏蔽安装指定Addon组件，填写相应的AddonName</p>
                     * 
                     */
                    void SetDisableAddons(const std::vector<std::string>& _disableAddons);

                    /**
                     * 判断参数 DisableAddons 是否已赋值
                     * @return DisableAddons 是否已赋值
                     * 
                     */
                    bool DisableAddonsHasBeenSet() const;

                private:

                    /**
                     * <p>集群类型，托管集群：MANAGED_CLUSTER，独立集群：INDEPENDENT_CLUSTER。</p>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>集群容器网络配置信息</p>
                     */
                    ClusterCIDRSettings m_clusterCIDRSettings;
                    bool m_clusterCIDRSettingsHasBeenSet;

                    /**
                     * <p>CVM创建透传参数，json化字符串格式，详见<a href="https://cloud.tencent.com/document/product/213/15730">CVM创建实例</a>接口。总机型(包括地域)数量不超过10个，相同机型(地域)购买多台机器可以通过设置参数中RunInstances中InstanceCount来实现。</p>
                     */
                    std::vector<RunInstancesForNode> m_runInstancesForNode;
                    bool m_runInstancesForNodeHasBeenSet;

                    /**
                     * <p>集群的基本配置信息</p>
                     */
                    ClusterBasicSettings m_clusterBasicSettings;
                    bool m_clusterBasicSettingsHasBeenSet;

                    /**
                     * <p>集群高级配置信息</p>
                     */
                    ClusterAdvancedSettings m_clusterAdvancedSettings;
                    bool m_clusterAdvancedSettingsHasBeenSet;

                    /**
                     * <p>节点高级配置信息</p>
                     */
                    InstanceAdvancedSettings m_instanceAdvancedSettings;
                    bool m_instanceAdvancedSettingsHasBeenSet;

                    /**
                     * <p>已存在实例的配置信息。所有实例必须在同一个VPC中，最大数量不超过 50，不支持添加竞价实例。</p>
                     */
                    std::vector<ExistedInstancesForNode> m_existedInstancesForNode;
                    bool m_existedInstancesForNodeHasBeenSet;

                    /**
                     * <p>CVM类型和其对应的数据盘挂载配置信息</p>
                     */
                    std::vector<InstanceDataDiskMountSetting> m_instanceDataDiskMountSettings;
                    bool m_instanceDataDiskMountSettingsHasBeenSet;

                    /**
                     * <p>需要安装的扩展组件信息</p>
                     */
                    std::vector<ExtensionAddon> m_extensionAddons;
                    bool m_extensionAddonsHasBeenSet;

                    /**
                     * <p>本地专用集群Id</p>
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * <p>屏蔽安装指定Addon组件，填写相应的AddonName</p>
                     */
                    std::vector<std::string> m_disableAddons;
                    bool m_disableAddonsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERREQUEST_H_

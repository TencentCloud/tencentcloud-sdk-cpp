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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKCLUSTERINFOITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKCLUSTERINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 网络集群资产返回的结构体
                */
                class NetworkClusterInfoItem : public AbstractModel
                {
                public:
                    NetworkClusterInfoItem();
                    ~NetworkClusterInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
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
                     * 获取集群名字
                     * @return ClusterName 集群名字
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名字
                     * @param _clusterName 集群名字
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取集群版本
                     * @return ClusterVersion 集群版本
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置集群版本
                     * @param _clusterVersion 集群版本
                     * 
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     * 
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取集群操作系统
                     * @return ClusterOs 集群操作系统
                     * 
                     */
                    std::string GetClusterOs() const;

                    /**
                     * 设置集群操作系统
                     * @param _clusterOs 集群操作系统
                     * 
                     */
                    void SetClusterOs(const std::string& _clusterOs);

                    /**
                     * 判断参数 ClusterOs 是否已赋值
                     * @return ClusterOs 是否已赋值
                     * 
                     */
                    bool ClusterOsHasBeenSet() const;

                    /**
                     * 获取集群类型
                     * @return ClusterType 集群类型
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型
                     * @param _clusterType 集群类型
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
                     * 获取集群区域
                     * @return Region 集群区域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置集群区域
                     * @param _region 集群区域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取集群网络插件
                     * @return NetworkPolicyPlugin 集群网络插件
                     * 
                     */
                    std::string GetNetworkPolicyPlugin() const;

                    /**
                     * 设置集群网络插件
                     * @param _networkPolicyPlugin 集群网络插件
                     * 
                     */
                    void SetNetworkPolicyPlugin(const std::string& _networkPolicyPlugin);

                    /**
                     * 判断参数 NetworkPolicyPlugin 是否已赋值
                     * @return NetworkPolicyPlugin 是否已赋值
                     * 
                     */
                    bool NetworkPolicyPluginHasBeenSet() const;

                    /**
                     * 获取集群状态
                     * @return ClusterStatus 集群状态
                     * 
                     */
                    std::string GetClusterStatus() const;

                    /**
                     * 设置集群状态
                     * @param _clusterStatus 集群状态
                     * 
                     */
                    void SetClusterStatus(const std::string& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取总策略数量
                     * @return TotalRuleCount 总策略数量
                     * 
                     */
                    int64_t GetTotalRuleCount() const;

                    /**
                     * 设置总策略数量
                     * @param _totalRuleCount 总策略数量
                     * 
                     */
                    void SetTotalRuleCount(const int64_t& _totalRuleCount);

                    /**
                     * 判断参数 TotalRuleCount 是否已赋值
                     * @return TotalRuleCount 是否已赋值
                     * 
                     */
                    bool TotalRuleCountHasBeenSet() const;

                    /**
                     * 获取已开启策略数量
                     * @return EnableRuleCount 已开启策略数量
                     * 
                     */
                    int64_t GetEnableRuleCount() const;

                    /**
                     * 设置已开启策略数量
                     * @param _enableRuleCount 已开启策略数量
                     * 
                     */
                    void SetEnableRuleCount(const int64_t& _enableRuleCount);

                    /**
                     * 判断参数 EnableRuleCount 是否已赋值
                     * @return EnableRuleCount 是否已赋值
                     * 
                     */
                    bool EnableRuleCountHasBeenSet() const;

                    /**
                     * 获取集群网络插件状态，正常：Running 不正常：Error
                     * @return NetworkPolicyPluginStatus 集群网络插件状态，正常：Running 不正常：Error
                     * 
                     */
                    std::string GetNetworkPolicyPluginStatus() const;

                    /**
                     * 设置集群网络插件状态，正常：Running 不正常：Error
                     * @param _networkPolicyPluginStatus 集群网络插件状态，正常：Running 不正常：Error
                     * 
                     */
                    void SetNetworkPolicyPluginStatus(const std::string& _networkPolicyPluginStatus);

                    /**
                     * 判断参数 NetworkPolicyPluginStatus 是否已赋值
                     * @return NetworkPolicyPluginStatus 是否已赋值
                     * 
                     */
                    bool NetworkPolicyPluginStatusHasBeenSet() const;

                    /**
                     * 获取集群网络插件错误信息
                     * @return NetworkPolicyPluginError 集群网络插件错误信息
                     * 
                     */
                    std::string GetNetworkPolicyPluginError() const;

                    /**
                     * 设置集群网络插件错误信息
                     * @param _networkPolicyPluginError 集群网络插件错误信息
                     * 
                     */
                    void SetNetworkPolicyPluginError(const std::string& _networkPolicyPluginError);

                    /**
                     * 判断参数 NetworkPolicyPluginError 是否已赋值
                     * @return NetworkPolicyPluginError 是否已赋值
                     * 
                     */
                    bool NetworkPolicyPluginErrorHasBeenSet() const;

                    /**
                     * 获取容器网络插件
                     * @return ClusterNetworkSettings 容器网络插件
                     * 
                     */
                    std::string GetClusterNetworkSettings() const;

                    /**
                     * 设置容器网络插件
                     * @param _clusterNetworkSettings 容器网络插件
                     * 
                     */
                    void SetClusterNetworkSettings(const std::string& _clusterNetworkSettings);

                    /**
                     * 判断参数 ClusterNetworkSettings 是否已赋值
                     * @return ClusterNetworkSettings 是否已赋值
                     * 
                     */
                    bool ClusterNetworkSettingsHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名字
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群版本
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * 集群操作系统
                     */
                    std::string m_clusterOs;
                    bool m_clusterOsHasBeenSet;

                    /**
                     * 集群类型
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 集群区域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 集群网络插件
                     */
                    std::string m_networkPolicyPlugin;
                    bool m_networkPolicyPluginHasBeenSet;

                    /**
                     * 集群状态
                     */
                    std::string m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * 总策略数量
                     */
                    int64_t m_totalRuleCount;
                    bool m_totalRuleCountHasBeenSet;

                    /**
                     * 已开启策略数量
                     */
                    int64_t m_enableRuleCount;
                    bool m_enableRuleCountHasBeenSet;

                    /**
                     * 集群网络插件状态，正常：Running 不正常：Error
                     */
                    std::string m_networkPolicyPluginStatus;
                    bool m_networkPolicyPluginStatusHasBeenSet;

                    /**
                     * 集群网络插件错误信息
                     */
                    std::string m_networkPolicyPluginError;
                    bool m_networkPolicyPluginErrorHasBeenSet;

                    /**
                     * 容器网络插件
                     */
                    std::string m_clusterNetworkSettings;
                    bool m_clusterNetworkSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKCLUSTERINFOITEM_H_

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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/AutoUpgradeClusterLevel.h>
#include <tencentcloud/tke/v20180525/model/ClusterProperty.h>
#include <tencentcloud/tke/v20180525/model/SecurityModeConfig.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ModifyClusterAttribute请求参数结构体
                */
                class ModifyClusterAttributeRequest : public AbstractModel
                {
                public:
                    ModifyClusterAttributeRequest();
                    ~ModifyClusterAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/457/31862">DescribeClusters</a></p>
                     * @return ClusterId <p>集群ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/457/31862">DescribeClusters</a></p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/457/31862">DescribeClusters</a></p>
                     * @param _clusterId <p>集群ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/457/31862">DescribeClusters</a></p>
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
                     * 获取<p>集群所属项目</p>
                     * @return ProjectId <p>集群所属项目</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>集群所属项目</p>
                     * @param _projectId <p>集群所属项目</p>
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>集群名称,字符长度50</p>
                     * @return ClusterName <p>集群名称,字符长度50</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名称,字符长度50</p>
                     * @param _clusterName <p>集群名称,字符长度50</p>
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
                     * 获取<p>集群描述</p>
                     * @return ClusterDesc <p>集群描述</p>
                     * 
                     */
                    std::string GetClusterDesc() const;

                    /**
                     * 设置<p>集群描述</p>
                     * @param _clusterDesc <p>集群描述</p>
                     * 
                     */
                    void SetClusterDesc(const std::string& _clusterDesc);

                    /**
                     * 判断参数 ClusterDesc 是否已赋值
                     * @return ClusterDesc 是否已赋值
                     * 
                     */
                    bool ClusterDescHasBeenSet() const;

                    /**
                     * 获取<p>集群等级，等级类型：L20、L50、L100、L200、L500、L1000、L3000、L5000</p>
                     * @return ClusterLevel <p>集群等级，等级类型：L20、L50、L100、L200、L500、L1000、L3000、L5000</p>
                     * 
                     */
                    std::string GetClusterLevel() const;

                    /**
                     * 设置<p>集群等级，等级类型：L20、L50、L100、L200、L500、L1000、L3000、L5000</p>
                     * @param _clusterLevel <p>集群等级，等级类型：L20、L50、L100、L200、L500、L1000、L3000、L5000</p>
                     * 
                     */
                    void SetClusterLevel(const std::string& _clusterLevel);

                    /**
                     * 判断参数 ClusterLevel 是否已赋值
                     * @return ClusterLevel 是否已赋值
                     * 
                     */
                    bool ClusterLevelHasBeenSet() const;

                    /**
                     * 获取<p>自动变配集群等级</p>
                     * @return AutoUpgradeClusterLevel <p>自动变配集群等级</p>
                     * 
                     */
                    AutoUpgradeClusterLevel GetAutoUpgradeClusterLevel() const;

                    /**
                     * 设置<p>自动变配集群等级</p>
                     * @param _autoUpgradeClusterLevel <p>自动变配集群等级</p>
                     * 
                     */
                    void SetAutoUpgradeClusterLevel(const AutoUpgradeClusterLevel& _autoUpgradeClusterLevel);

                    /**
                     * 判断参数 AutoUpgradeClusterLevel 是否已赋值
                     * @return AutoUpgradeClusterLevel 是否已赋值
                     * 
                     */
                    bool AutoUpgradeClusterLevelHasBeenSet() const;

                    /**
                     * 获取<p>是否开启QGPU共享</p>
                     * @return QGPUShareEnable <p>是否开启QGPU共享</p>
                     * 
                     */
                    bool GetQGPUShareEnable() const;

                    /**
                     * 设置<p>是否开启QGPU共享</p>
                     * @param _qGPUShareEnable <p>是否开启QGPU共享</p>
                     * 
                     */
                    void SetQGPUShareEnable(const bool& _qGPUShareEnable);

                    /**
                     * 判断参数 QGPUShareEnable 是否已赋值
                     * @return QGPUShareEnable 是否已赋值
                     * 
                     */
                    bool QGPUShareEnableHasBeenSet() const;

                    /**
                     * 获取<p>集群属性</p>
                     * @return ClusterProperty <p>集群属性</p>
                     * 
                     */
                    ClusterProperty GetClusterProperty() const;

                    /**
                     * 设置<p>集群属性</p>
                     * @param _clusterProperty <p>集群属性</p>
                     * 
                     */
                    void SetClusterProperty(const ClusterProperty& _clusterProperty);

                    /**
                     * 判断参数 ClusterProperty 是否已赋值
                     * @return ClusterProperty 是否已赋值
                     * 
                     */
                    bool ClusterPropertyHasBeenSet() const;

                    /**
                     * 获取<p>集群是否启用高可用模式。用于指导跨可用区资源打散等高可用策略的执行</p>
                     * @return IsHighAvailability <p>集群是否启用高可用模式。用于指导跨可用区资源打散等高可用策略的执行</p>
                     * 
                     */
                    bool GetIsHighAvailability() const;

                    /**
                     * 设置<p>集群是否启用高可用模式。用于指导跨可用区资源打散等高可用策略的执行</p>
                     * @param _isHighAvailability <p>集群是否启用高可用模式。用于指导跨可用区资源打散等高可用策略的执行</p>
                     * 
                     */
                    void SetIsHighAvailability(const bool& _isHighAvailability);

                    /**
                     * 判断参数 IsHighAvailability 是否已赋值
                     * @return IsHighAvailability 是否已赋值
                     * 
                     */
                    bool IsHighAvailabilityHasBeenSet() const;

                    /**
                     * 获取<p>集群安全模式配置</p>
                     * @return SecurityModeConfig <p>集群安全模式配置</p>
                     * 
                     */
                    SecurityModeConfig GetSecurityModeConfig() const;

                    /**
                     * 设置<p>集群安全模式配置</p>
                     * @param _securityModeConfig <p>集群安全模式配置</p>
                     * 
                     */
                    void SetSecurityModeConfig(const SecurityModeConfig& _securityModeConfig);

                    /**
                     * 判断参数 SecurityModeConfig 是否已赋值
                     * @return SecurityModeConfig 是否已赋值
                     * 
                     */
                    bool SecurityModeConfigHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/457/31862">DescribeClusters</a></p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>集群所属项目</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>集群名称,字符长度50</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>集群描述</p>
                     */
                    std::string m_clusterDesc;
                    bool m_clusterDescHasBeenSet;

                    /**
                     * <p>集群等级，等级类型：L20、L50、L100、L200、L500、L1000、L3000、L5000</p>
                     */
                    std::string m_clusterLevel;
                    bool m_clusterLevelHasBeenSet;

                    /**
                     * <p>自动变配集群等级</p>
                     */
                    AutoUpgradeClusterLevel m_autoUpgradeClusterLevel;
                    bool m_autoUpgradeClusterLevelHasBeenSet;

                    /**
                     * <p>是否开启QGPU共享</p>
                     */
                    bool m_qGPUShareEnable;
                    bool m_qGPUShareEnableHasBeenSet;

                    /**
                     * <p>集群属性</p>
                     */
                    ClusterProperty m_clusterProperty;
                    bool m_clusterPropertyHasBeenSet;

                    /**
                     * <p>集群是否启用高可用模式。用于指导跨可用区资源打散等高可用策略的执行</p>
                     */
                    bool m_isHighAvailability;
                    bool m_isHighAvailabilityHasBeenSet;

                    /**
                     * <p>集群安全模式配置</p>
                     */
                    SecurityModeConfig m_securityModeConfig;
                    bool m_securityModeConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERATTRIBUTEREQUEST_H_

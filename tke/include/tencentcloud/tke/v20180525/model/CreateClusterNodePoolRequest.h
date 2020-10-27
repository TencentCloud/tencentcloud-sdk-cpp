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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERNODEPOOLREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERNODEPOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/InstanceAdvancedSettings.h>
#include <tencentcloud/tke/v20180525/model/Label.h>
#include <tencentcloud/tke/v20180525/model/Taint.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreateClusterNodePool请求参数结构体
                */
                class CreateClusterNodePoolRequest : public AbstractModel
                {
                public:
                    CreateClusterNodePoolRequest();
                    ~CreateClusterNodePoolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取cluster id
                     * @return ClusterId cluster id
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置cluster id
                     * @param ClusterId cluster id
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取AutoScalingGroupPara AS组参数
                     * @return AutoScalingGroupPara AutoScalingGroupPara AS组参数
                     */
                    std::string GetAutoScalingGroupPara() const;

                    /**
                     * 设置AutoScalingGroupPara AS组参数
                     * @param AutoScalingGroupPara AutoScalingGroupPara AS组参数
                     */
                    void SetAutoScalingGroupPara(const std::string& _autoScalingGroupPara);

                    /**
                     * 判断参数 AutoScalingGroupPara 是否已赋值
                     * @return AutoScalingGroupPara 是否已赋值
                     */
                    bool AutoScalingGroupParaHasBeenSet() const;

                    /**
                     * 获取LaunchConfigurePara 运行参数
                     * @return LaunchConfigurePara LaunchConfigurePara 运行参数
                     */
                    std::string GetLaunchConfigurePara() const;

                    /**
                     * 设置LaunchConfigurePara 运行参数
                     * @param LaunchConfigurePara LaunchConfigurePara 运行参数
                     */
                    void SetLaunchConfigurePara(const std::string& _launchConfigurePara);

                    /**
                     * 判断参数 LaunchConfigurePara 是否已赋值
                     * @return LaunchConfigurePara 是否已赋值
                     */
                    bool LaunchConfigureParaHasBeenSet() const;

                    /**
                     * 获取InstanceAdvancedSettings 示例参数
                     * @return InstanceAdvancedSettings InstanceAdvancedSettings 示例参数
                     */
                    InstanceAdvancedSettings GetInstanceAdvancedSettings() const;

                    /**
                     * 设置InstanceAdvancedSettings 示例参数
                     * @param InstanceAdvancedSettings InstanceAdvancedSettings 示例参数
                     */
                    void SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings);

                    /**
                     * 判断参数 InstanceAdvancedSettings 是否已赋值
                     * @return InstanceAdvancedSettings 是否已赋值
                     */
                    bool InstanceAdvancedSettingsHasBeenSet() const;

                    /**
                     * 获取是否启用自动伸缩
                     * @return EnableAutoscale 是否启用自动伸缩
                     */
                    bool GetEnableAutoscale() const;

                    /**
                     * 设置是否启用自动伸缩
                     * @param EnableAutoscale 是否启用自动伸缩
                     */
                    void SetEnableAutoscale(const bool& _enableAutoscale);

                    /**
                     * 判断参数 EnableAutoscale 是否已赋值
                     * @return EnableAutoscale 是否已赋值
                     */
                    bool EnableAutoscaleHasBeenSet() const;

                    /**
                     * 获取节点池名称
                     * @return Name 节点池名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置节点池名称
                     * @param Name 节点池名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Labels标签
                     * @return Labels Labels标签
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置Labels标签
                     * @param Labels Labels标签
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取Taints互斥
                     * @return Taints Taints互斥
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置Taints互斥
                     * @param Taints Taints互斥
                     */
                    void SetTaints(const std::vector<Taint>& _taints);

                    /**
                     * 判断参数 Taints 是否已赋值
                     * @return Taints 是否已赋值
                     */
                    bool TaintsHasBeenSet() const;

                private:

                    /**
                     * cluster id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * AutoScalingGroupPara AS组参数
                     */
                    std::string m_autoScalingGroupPara;
                    bool m_autoScalingGroupParaHasBeenSet;

                    /**
                     * LaunchConfigurePara 运行参数
                     */
                    std::string m_launchConfigurePara;
                    bool m_launchConfigureParaHasBeenSet;

                    /**
                     * InstanceAdvancedSettings 示例参数
                     */
                    InstanceAdvancedSettings m_instanceAdvancedSettings;
                    bool m_instanceAdvancedSettingsHasBeenSet;

                    /**
                     * 是否启用自动伸缩
                     */
                    bool m_enableAutoscale;
                    bool m_enableAutoscaleHasBeenSet;

                    /**
                     * 节点池名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Labels标签
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Taints互斥
                     */
                    std::vector<Taint> m_taints;
                    bool m_taintsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERNODEPOOLREQUEST_H_

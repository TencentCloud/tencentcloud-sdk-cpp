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
#include <tencentcloud/tke/v20180525/model/AnnotationValue.h>
#include <tencentcloud/tke/v20180525/model/Tag.h>


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
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置cluster id
                     * @param _clusterId cluster id
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
                     * 获取AutoScalingGroupPara AS组参数，参考 https://cloud.tencent.com/document/product/377/20440
                     * @return AutoScalingGroupPara AutoScalingGroupPara AS组参数，参考 https://cloud.tencent.com/document/product/377/20440
                     * 
                     */
                    std::string GetAutoScalingGroupPara() const;

                    /**
                     * 设置AutoScalingGroupPara AS组参数，参考 https://cloud.tencent.com/document/product/377/20440
                     * @param _autoScalingGroupPara AutoScalingGroupPara AS组参数，参考 https://cloud.tencent.com/document/product/377/20440
                     * 
                     */
                    void SetAutoScalingGroupPara(const std::string& _autoScalingGroupPara);

                    /**
                     * 判断参数 AutoScalingGroupPara 是否已赋值
                     * @return AutoScalingGroupPara 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupParaHasBeenSet() const;

                    /**
                     * 获取LaunchConfigurePara 运行参数，参考 https://cloud.tencent.com/document/product/377/20447
                     * @return LaunchConfigurePara LaunchConfigurePara 运行参数，参考 https://cloud.tencent.com/document/product/377/20447
                     * 
                     */
                    std::string GetLaunchConfigurePara() const;

                    /**
                     * 设置LaunchConfigurePara 运行参数，参考 https://cloud.tencent.com/document/product/377/20447
                     * @param _launchConfigurePara LaunchConfigurePara 运行参数，参考 https://cloud.tencent.com/document/product/377/20447
                     * 
                     */
                    void SetLaunchConfigurePara(const std::string& _launchConfigurePara);

                    /**
                     * 判断参数 LaunchConfigurePara 是否已赋值
                     * @return LaunchConfigurePara 是否已赋值
                     * 
                     */
                    bool LaunchConfigureParaHasBeenSet() const;

                    /**
                     * 获取InstanceAdvancedSettings
                     * @return InstanceAdvancedSettings InstanceAdvancedSettings
                     * 
                     */
                    InstanceAdvancedSettings GetInstanceAdvancedSettings() const;

                    /**
                     * 设置InstanceAdvancedSettings
                     * @param _instanceAdvancedSettings InstanceAdvancedSettings
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
                     * 获取是否启用自动伸缩
                     * @return EnableAutoscale 是否启用自动伸缩
                     * 
                     */
                    bool GetEnableAutoscale() const;

                    /**
                     * 设置是否启用自动伸缩
                     * @param _enableAutoscale 是否启用自动伸缩
                     * 
                     */
                    void SetEnableAutoscale(const bool& _enableAutoscale);

                    /**
                     * 判断参数 EnableAutoscale 是否已赋值
                     * @return EnableAutoscale 是否已赋值
                     * 
                     */
                    bool EnableAutoscaleHasBeenSet() const;

                    /**
                     * 获取节点池名称
                     * @return Name 节点池名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置节点池名称
                     * @param _name 节点池名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Labels标签
                     * @return Labels Labels标签
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置Labels标签
                     * @param _labels Labels标签
                     * 
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取Taints互斥
                     * @return Taints Taints互斥
                     * 
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置Taints互斥
                     * @param _taints Taints互斥
                     * 
                     */
                    void SetTaints(const std::vector<Taint>& _taints);

                    /**
                     * 判断参数 Taints 是否已赋值
                     * @return Taints 是否已赋值
                     * 
                     */
                    bool TaintsHasBeenSet() const;

                    /**
                     * 获取节点Annotation 列表
                     * @return Annotations 节点Annotation 列表
                     * 
                     */
                    std::vector<AnnotationValue> GetAnnotations() const;

                    /**
                     * 设置节点Annotation 列表
                     * @param _annotations 节点Annotation 列表
                     * 
                     */
                    void SetAnnotations(const std::vector<AnnotationValue>& _annotations);

                    /**
                     * 判断参数 Annotations 是否已赋值
                     * @return Annotations 是否已赋值
                     * 
                     */
                    bool AnnotationsHasBeenSet() const;

                    /**
                     * 获取节点池纬度运行时类型及版本
                     * @return ContainerRuntime 节点池纬度运行时类型及版本
                     * 
                     */
                    std::string GetContainerRuntime() const;

                    /**
                     * 设置节点池纬度运行时类型及版本
                     * @param _containerRuntime 节点池纬度运行时类型及版本
                     * 
                     */
                    void SetContainerRuntime(const std::string& _containerRuntime);

                    /**
                     * 判断参数 ContainerRuntime 是否已赋值
                     * @return ContainerRuntime 是否已赋值
                     * 
                     */
                    bool ContainerRuntimeHasBeenSet() const;

                    /**
                     * 获取运行时版本
                     * @return RuntimeVersion 运行时版本
                     * 
                     */
                    std::string GetRuntimeVersion() const;

                    /**
                     * 设置运行时版本
                     * @param _runtimeVersion 运行时版本
                     * 
                     */
                    void SetRuntimeVersion(const std::string& _runtimeVersion);

                    /**
                     * 判断参数 RuntimeVersion 是否已赋值
                     * @return RuntimeVersion 是否已赋值
                     * 
                     */
                    bool RuntimeVersionHasBeenSet() const;

                    /**
                     * 获取节点池os，当为自定义镜像时，传镜像id；否则为公共镜像的osName
                     * @return NodePoolOs 节点池os，当为自定义镜像时，传镜像id；否则为公共镜像的osName
                     * 
                     */
                    std::string GetNodePoolOs() const;

                    /**
                     * 设置节点池os，当为自定义镜像时，传镜像id；否则为公共镜像的osName
                     * @param _nodePoolOs 节点池os，当为自定义镜像时，传镜像id；否则为公共镜像的osName
                     * 
                     */
                    void SetNodePoolOs(const std::string& _nodePoolOs);

                    /**
                     * 判断参数 NodePoolOs 是否已赋值
                     * @return NodePoolOs 是否已赋值
                     * 
                     */
                    bool NodePoolOsHasBeenSet() const;

                    /**
                     * 获取容器的镜像版本，"DOCKER_CUSTOMIZE"(容器定制版),"GENERAL"(普通版本，默认值)
                     * @return OsCustomizeType 容器的镜像版本，"DOCKER_CUSTOMIZE"(容器定制版),"GENERAL"(普通版本，默认值)
                     * 
                     */
                    std::string GetOsCustomizeType() const;

                    /**
                     * 设置容器的镜像版本，"DOCKER_CUSTOMIZE"(容器定制版),"GENERAL"(普通版本，默认值)
                     * @param _osCustomizeType 容器的镜像版本，"DOCKER_CUSTOMIZE"(容器定制版),"GENERAL"(普通版本，默认值)
                     * 
                     */
                    void SetOsCustomizeType(const std::string& _osCustomizeType);

                    /**
                     * 判断参数 OsCustomizeType 是否已赋值
                     * @return OsCustomizeType 是否已赋值
                     * 
                     */
                    bool OsCustomizeTypeHasBeenSet() const;

                    /**
                     * 获取资源标签
                     * @return Tags 资源标签
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置资源标签
                     * @param _tags 资源标签
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取删除保护开关
                     * @return DeletionProtection 删除保护开关
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置删除保护开关
                     * @param _deletionProtection 删除保护开关
                     * 
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                private:

                    /**
                     * cluster id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * AutoScalingGroupPara AS组参数，参考 https://cloud.tencent.com/document/product/377/20440
                     */
                    std::string m_autoScalingGroupPara;
                    bool m_autoScalingGroupParaHasBeenSet;

                    /**
                     * LaunchConfigurePara 运行参数，参考 https://cloud.tencent.com/document/product/377/20447
                     */
                    std::string m_launchConfigurePara;
                    bool m_launchConfigureParaHasBeenSet;

                    /**
                     * InstanceAdvancedSettings
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

                    /**
                     * 节点Annotation 列表
                     */
                    std::vector<AnnotationValue> m_annotations;
                    bool m_annotationsHasBeenSet;

                    /**
                     * 节点池纬度运行时类型及版本
                     */
                    std::string m_containerRuntime;
                    bool m_containerRuntimeHasBeenSet;

                    /**
                     * 运行时版本
                     */
                    std::string m_runtimeVersion;
                    bool m_runtimeVersionHasBeenSet;

                    /**
                     * 节点池os，当为自定义镜像时，传镜像id；否则为公共镜像的osName
                     */
                    std::string m_nodePoolOs;
                    bool m_nodePoolOsHasBeenSet;

                    /**
                     * 容器的镜像版本，"DOCKER_CUSTOMIZE"(容器定制版),"GENERAL"(普通版本，默认值)
                     */
                    std::string m_osCustomizeType;
                    bool m_osCustomizeTypeHasBeenSet;

                    /**
                     * 资源标签
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 删除保护开关
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERNODEPOOLREQUEST_H_

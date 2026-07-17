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
                     * 获取<p>cluster id</p>
                     * @return ClusterId <p>cluster id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>cluster id</p>
                     * @param _clusterId <p>cluster id</p>
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
                     * 获取<p>AutoScalingGroupPara AS组参数，参考 https://cloud.tencent.com/document/product/377/20440</p>
                     * @return AutoScalingGroupPara <p>AutoScalingGroupPara AS组参数，参考 https://cloud.tencent.com/document/product/377/20440</p>
                     * 
                     */
                    std::string GetAutoScalingGroupPara() const;

                    /**
                     * 设置<p>AutoScalingGroupPara AS组参数，参考 https://cloud.tencent.com/document/product/377/20440</p>
                     * @param _autoScalingGroupPara <p>AutoScalingGroupPara AS组参数，参考 https://cloud.tencent.com/document/product/377/20440</p>
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
                     * 获取<p>LaunchConfigurePara 运行参数，参考 https://cloud.tencent.com/document/product/377/20447</p>
                     * @return LaunchConfigurePara <p>LaunchConfigurePara 运行参数，参考 https://cloud.tencent.com/document/product/377/20447</p>
                     * 
                     */
                    std::string GetLaunchConfigurePara() const;

                    /**
                     * 设置<p>LaunchConfigurePara 运行参数，参考 https://cloud.tencent.com/document/product/377/20447</p>
                     * @param _launchConfigurePara <p>LaunchConfigurePara 运行参数，参考 https://cloud.tencent.com/document/product/377/20447</p>
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
                     * 获取<p>InstanceAdvancedSettings</p>
                     * @return InstanceAdvancedSettings <p>InstanceAdvancedSettings</p>
                     * 
                     */
                    InstanceAdvancedSettings GetInstanceAdvancedSettings() const;

                    /**
                     * 设置<p>InstanceAdvancedSettings</p>
                     * @param _instanceAdvancedSettings <p>InstanceAdvancedSettings</p>
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
                     * 获取<p>是否启用自动伸缩</p>
                     * @return EnableAutoscale <p>是否启用自动伸缩</p>
                     * 
                     */
                    bool GetEnableAutoscale() const;

                    /**
                     * 设置<p>是否启用自动伸缩</p>
                     * @param _enableAutoscale <p>是否启用自动伸缩</p>
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
                     * 获取<p>节点池名称</p>
                     * @return Name <p>节点池名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>节点池名称</p>
                     * @param _name <p>节点池名称</p>
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
                     * 获取<p>Labels标签</p>
                     * @return Labels <p>Labels标签</p>
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置<p>Labels标签</p>
                     * @param _labels <p>Labels标签</p>
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
                     * 获取<p>Taints互斥</p>
                     * @return Taints <p>Taints互斥</p>
                     * 
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置<p>Taints互斥</p>
                     * @param _taints <p>Taints互斥</p>
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
                     * 获取<p>节点Annotation 列表</p>
                     * @return Annotations <p>节点Annotation 列表</p>
                     * 
                     */
                    std::vector<AnnotationValue> GetAnnotations() const;

                    /**
                     * 设置<p>节点Annotation 列表</p>
                     * @param _annotations <p>节点Annotation 列表</p>
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
                     * 获取<p>节点池纬度运行时类型及版本</p>
                     * @return ContainerRuntime <p>节点池纬度运行时类型及版本</p>
                     * 
                     */
                    std::string GetContainerRuntime() const;

                    /**
                     * 设置<p>节点池纬度运行时类型及版本</p>
                     * @param _containerRuntime <p>节点池纬度运行时类型及版本</p>
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
                     * 获取<p>运行时版本</p>
                     * @return RuntimeVersion <p>运行时版本</p>
                     * 
                     */
                    std::string GetRuntimeVersion() const;

                    /**
                     * 设置<p>运行时版本</p>
                     * @param _runtimeVersion <p>运行时版本</p>
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
                     * 获取<p>节点池os，当为自定义镜像时，传镜像id；否则为公共镜像的osName</p>
                     * @return NodePoolOs <p>节点池os，当为自定义镜像时，传镜像id；否则为公共镜像的osName</p>
                     * 
                     */
                    std::string GetNodePoolOs() const;

                    /**
                     * 设置<p>节点池os，当为自定义镜像时，传镜像id；否则为公共镜像的osName</p>
                     * @param _nodePoolOs <p>节点池os，当为自定义镜像时，传镜像id；否则为公共镜像的osName</p>
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
                     * 获取<p>容器的镜像版本，&quot;DOCKER_CUSTOMIZE&quot;(容器定制版),&quot;GENERAL&quot;(普通版本，默认值)</p>
                     * @return OsCustomizeType <p>容器的镜像版本，&quot;DOCKER_CUSTOMIZE&quot;(容器定制版),&quot;GENERAL&quot;(普通版本，默认值)</p>
                     * 
                     */
                    std::string GetOsCustomizeType() const;

                    /**
                     * 设置<p>容器的镜像版本，&quot;DOCKER_CUSTOMIZE&quot;(容器定制版),&quot;GENERAL&quot;(普通版本，默认值)</p>
                     * @param _osCustomizeType <p>容器的镜像版本，&quot;DOCKER_CUSTOMIZE&quot;(容器定制版),&quot;GENERAL&quot;(普通版本，默认值)</p>
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
                     * 获取<p>资源标签</p>
                     * @return Tags <p>资源标签</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>资源标签</p>
                     * @param _tags <p>资源标签</p>
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
                     * 获取<p>删除保护开关</p>
                     * @return DeletionProtection <p>删除保护开关</p>
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置<p>删除保护开关</p>
                     * @param _deletionProtection <p>删除保护开关</p>
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
                     * <p>cluster id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>AutoScalingGroupPara AS组参数，参考 https://cloud.tencent.com/document/product/377/20440</p>
                     */
                    std::string m_autoScalingGroupPara;
                    bool m_autoScalingGroupParaHasBeenSet;

                    /**
                     * <p>LaunchConfigurePara 运行参数，参考 https://cloud.tencent.com/document/product/377/20447</p>
                     */
                    std::string m_launchConfigurePara;
                    bool m_launchConfigureParaHasBeenSet;

                    /**
                     * <p>InstanceAdvancedSettings</p>
                     */
                    InstanceAdvancedSettings m_instanceAdvancedSettings;
                    bool m_instanceAdvancedSettingsHasBeenSet;

                    /**
                     * <p>是否启用自动伸缩</p>
                     */
                    bool m_enableAutoscale;
                    bool m_enableAutoscaleHasBeenSet;

                    /**
                     * <p>节点池名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Labels标签</p>
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>Taints互斥</p>
                     */
                    std::vector<Taint> m_taints;
                    bool m_taintsHasBeenSet;

                    /**
                     * <p>节点Annotation 列表</p>
                     */
                    std::vector<AnnotationValue> m_annotations;
                    bool m_annotationsHasBeenSet;

                    /**
                     * <p>节点池纬度运行时类型及版本</p>
                     */
                    std::string m_containerRuntime;
                    bool m_containerRuntimeHasBeenSet;

                    /**
                     * <p>运行时版本</p>
                     */
                    std::string m_runtimeVersion;
                    bool m_runtimeVersionHasBeenSet;

                    /**
                     * <p>节点池os，当为自定义镜像时，传镜像id；否则为公共镜像的osName</p>
                     */
                    std::string m_nodePoolOs;
                    bool m_nodePoolOsHasBeenSet;

                    /**
                     * <p>容器的镜像版本，&quot;DOCKER_CUSTOMIZE&quot;(容器定制版),&quot;GENERAL&quot;(普通版本，默认值)</p>
                     */
                    std::string m_osCustomizeType;
                    bool m_osCustomizeTypeHasBeenSet;

                    /**
                     * <p>资源标签</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>删除保护开关</p>
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERNODEPOOLREQUEST_H_

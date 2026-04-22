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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CLOUDRESOURCE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CLOUDRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/VolumeSetting.h>
#include <tencentcloud/emr/v20190103/model/ExternalAccess.h>
#include <tencentcloud/emr/v20190103/model/NodeAffinity.h>
#include <tencentcloud/emr/v20190103/model/Disk.h>
#include <tencentcloud/emr/v20190103/model/Toleration.h>
#include <tencentcloud/emr/v20190103/model/PodAffinitySpec.h>
#include <tencentcloud/emr/v20190103/model/TopologySpreadConstraint.h>
#include <tencentcloud/emr/v20190103/model/StringMap.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 容器集群Pod请求资源信息
                */
                class CloudResource : public AbstractModel
                {
                public:
                    CloudResource();
                    ~CloudResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>组件角色名</p>
                     * @return ComponentName <p>组件角色名</p>
                     * 
                     */
                    std::string GetComponentName() const;

                    /**
                     * 设置<p>组件角色名</p>
                     * @param _componentName <p>组件角色名</p>
                     * 
                     */
                    void SetComponentName(const std::string& _componentName);

                    /**
                     * 判断参数 ComponentName 是否已赋值
                     * @return ComponentName 是否已赋值
                     * 
                     */
                    bool ComponentNameHasBeenSet() const;

                    /**
                     * 获取<p>pod请求数量</p>
                     * @return PodNumber <p>pod请求数量</p>
                     * 
                     */
                    int64_t GetPodNumber() const;

                    /**
                     * 设置<p>pod请求数量</p>
                     * @param _podNumber <p>pod请求数量</p>
                     * 
                     */
                    void SetPodNumber(const int64_t& _podNumber);

                    /**
                     * 判断参数 PodNumber 是否已赋值
                     * @return PodNumber 是否已赋值
                     * 
                     */
                    bool PodNumberHasBeenSet() const;

                    /**
                     * 获取<p>Cpu请求数量最大值</p>
                     * @return LimitCpu <p>Cpu请求数量最大值</p>
                     * 
                     */
                    int64_t GetLimitCpu() const;

                    /**
                     * 设置<p>Cpu请求数量最大值</p>
                     * @param _limitCpu <p>Cpu请求数量最大值</p>
                     * 
                     */
                    void SetLimitCpu(const int64_t& _limitCpu);

                    /**
                     * 判断参数 LimitCpu 是否已赋值
                     * @return LimitCpu 是否已赋值
                     * 
                     */
                    bool LimitCpuHasBeenSet() const;

                    /**
                     * 获取<p>内存请求数量最大值</p>
                     * @return LimitMemory <p>内存请求数量最大值</p>
                     * 
                     */
                    int64_t GetLimitMemory() const;

                    /**
                     * 设置<p>内存请求数量最大值</p>
                     * @param _limitMemory <p>内存请求数量最大值</p>
                     * 
                     */
                    void SetLimitMemory(const int64_t& _limitMemory);

                    /**
                     * 判断参数 LimitMemory 是否已赋值
                     * @return LimitMemory 是否已赋值
                     * 
                     */
                    bool LimitMemoryHasBeenSet() const;

                    /**
                     * 获取<p>服务名称，如HIVE</p>
                     * @return Service <p>服务名称，如HIVE</p>
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置<p>服务名称，如HIVE</p>
                     * @param _service <p>服务名称，如HIVE</p>
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取<p>数据卷目录设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeDir <p>数据卷目录设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VolumeSetting GetVolumeDir() const;

                    /**
                     * 设置<p>数据卷目录设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeDir <p>数据卷目录设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVolumeDir(const VolumeSetting& _volumeDir);

                    /**
                     * 判断参数 VolumeDir 是否已赋值
                     * @return VolumeDir 是否已赋值
                     * 
                     */
                    bool VolumeDirHasBeenSet() const;

                    /**
                     * 获取<p>组件外部访问设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalAccess <p>组件外部访问设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExternalAccess GetExternalAccess() const;

                    /**
                     * 设置<p>组件外部访问设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalAccess <p>组件外部访问设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalAccess(const ExternalAccess& _externalAccess);

                    /**
                     * 判断参数 ExternalAccess 是否已赋值
                     * @return ExternalAccess 是否已赋值
                     * 
                     */
                    bool ExternalAccessHasBeenSet() const;

                    /**
                     * 获取<p>节点亲和性设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Affinity <p>节点亲和性设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NodeAffinity GetAffinity() const;

                    /**
                     * 设置<p>节点亲和性设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _affinity <p>节点亲和性设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAffinity(const NodeAffinity& _affinity);

                    /**
                     * 判断参数 Affinity 是否已赋值
                     * @return Affinity 是否已赋值
                     * 
                     */
                    bool AffinityHasBeenSet() const;

                    /**
                     * 获取<p>所选数据盘信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Disks <p>所选数据盘信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Disk> GetDisks() const;

                    /**
                     * 设置<p>所选数据盘信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _disks <p>所选数据盘信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisks(const std::vector<Disk>& _disks);

                    /**
                     * 判断参数 Disks 是否已赋值
                     * @return Disks 是否已赋值
                     * 
                     */
                    bool DisksHasBeenSet() const;

                    /**
                     * 获取<p>容忍</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tolerations <p>容忍</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Toleration> GetTolerations() const;

                    /**
                     * 设置<p>容忍</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tolerations <p>容忍</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTolerations(const std::vector<Toleration>& _tolerations);

                    /**
                     * 判断参数 Tolerations 是否已赋值
                     * @return Tolerations 是否已赋值
                     * 
                     */
                    bool TolerationsHasBeenSet() const;

                    /**
                     * 获取<p>pod亲和性</p>
                     * @return PodAffinity <p>pod亲和性</p>
                     * 
                     */
                    PodAffinitySpec GetPodAffinity() const;

                    /**
                     * 设置<p>pod亲和性</p>
                     * @param _podAffinity <p>pod亲和性</p>
                     * 
                     */
                    void SetPodAffinity(const PodAffinitySpec& _podAffinity);

                    /**
                     * 判断参数 PodAffinity 是否已赋值
                     * @return PodAffinity 是否已赋值
                     * 
                     */
                    bool PodAffinityHasBeenSet() const;

                    /**
                     * 获取<p>pod反亲和性</p>
                     * @return PodAntiAffinity <p>pod反亲和性</p>
                     * 
                     */
                    PodAffinitySpec GetPodAntiAffinity() const;

                    /**
                     * 设置<p>pod反亲和性</p>
                     * @param _podAntiAffinity <p>pod反亲和性</p>
                     * 
                     */
                    void SetPodAntiAffinity(const PodAffinitySpec& _podAntiAffinity);

                    /**
                     * 判断参数 PodAntiAffinity 是否已赋值
                     * @return PodAntiAffinity 是否已赋值
                     * 
                     */
                    bool PodAntiAffinityHasBeenSet() const;

                    /**
                     * 获取<p>拓扑分布约束</p>
                     * @return TopologySpreadConstraints <p>拓扑分布约束</p>
                     * 
                     */
                    std::vector<TopologySpreadConstraint> GetTopologySpreadConstraints() const;

                    /**
                     * 设置<p>拓扑分布约束</p>
                     * @param _topologySpreadConstraints <p>拓扑分布约束</p>
                     * 
                     */
                    void SetTopologySpreadConstraints(const std::vector<TopologySpreadConstraint>& _topologySpreadConstraints);

                    /**
                     * 判断参数 TopologySpreadConstraints 是否已赋值
                     * @return TopologySpreadConstraints 是否已赋值
                     * 
                     */
                    bool TopologySpreadConstraintsHasBeenSet() const;

                    /**
                     * 获取<p>pod标签</p>
                     * @return PodLabels <p>pod标签</p>
                     * 
                     */
                    std::vector<StringMap> GetPodLabels() const;

                    /**
                     * 设置<p>pod标签</p>
                     * @param _podLabels <p>pod标签</p>
                     * 
                     */
                    void SetPodLabels(const std::vector<StringMap>& _podLabels);

                    /**
                     * 判断参数 PodLabels 是否已赋值
                     * @return PodLabels 是否已赋值
                     * 
                     */
                    bool PodLabelsHasBeenSet() const;

                    /**
                     * 获取<p>是否创建默认raycluster</p>
                     * @return EnableDefaultRayCluster <p>是否创建默认raycluster</p>
                     * 
                     */
                    bool GetEnableDefaultRayCluster() const;

                    /**
                     * 设置<p>是否创建默认raycluster</p>
                     * @param _enableDefaultRayCluster <p>是否创建默认raycluster</p>
                     * 
                     */
                    void SetEnableDefaultRayCluster(const bool& _enableDefaultRayCluster);

                    /**
                     * 判断参数 EnableDefaultRayCluster 是否已赋值
                     * @return EnableDefaultRayCluster 是否已赋值
                     * 
                     */
                    bool EnableDefaultRayClusterHasBeenSet() const;

                private:

                    /**
                     * <p>组件角色名</p>
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                    /**
                     * <p>pod请求数量</p>
                     */
                    int64_t m_podNumber;
                    bool m_podNumberHasBeenSet;

                    /**
                     * <p>Cpu请求数量最大值</p>
                     */
                    int64_t m_limitCpu;
                    bool m_limitCpuHasBeenSet;

                    /**
                     * <p>内存请求数量最大值</p>
                     */
                    int64_t m_limitMemory;
                    bool m_limitMemoryHasBeenSet;

                    /**
                     * <p>服务名称，如HIVE</p>
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * <p>数据卷目录设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VolumeSetting m_volumeDir;
                    bool m_volumeDirHasBeenSet;

                    /**
                     * <p>组件外部访问设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExternalAccess m_externalAccess;
                    bool m_externalAccessHasBeenSet;

                    /**
                     * <p>节点亲和性设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NodeAffinity m_affinity;
                    bool m_affinityHasBeenSet;

                    /**
                     * <p>所选数据盘信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Disk> m_disks;
                    bool m_disksHasBeenSet;

                    /**
                     * <p>容忍</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Toleration> m_tolerations;
                    bool m_tolerationsHasBeenSet;

                    /**
                     * <p>pod亲和性</p>
                     */
                    PodAffinitySpec m_podAffinity;
                    bool m_podAffinityHasBeenSet;

                    /**
                     * <p>pod反亲和性</p>
                     */
                    PodAffinitySpec m_podAntiAffinity;
                    bool m_podAntiAffinityHasBeenSet;

                    /**
                     * <p>拓扑分布约束</p>
                     */
                    std::vector<TopologySpreadConstraint> m_topologySpreadConstraints;
                    bool m_topologySpreadConstraintsHasBeenSet;

                    /**
                     * <p>pod标签</p>
                     */
                    std::vector<StringMap> m_podLabels;
                    bool m_podLabelsHasBeenSet;

                    /**
                     * <p>是否创建默认raycluster</p>
                     */
                    bool m_enableDefaultRayCluster;
                    bool m_enableDefaultRayClusterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CLOUDRESOURCE_H_

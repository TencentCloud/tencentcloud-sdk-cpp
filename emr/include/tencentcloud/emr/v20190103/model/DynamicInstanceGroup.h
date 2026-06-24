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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DYNAMICINSTANCEGROUP_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DYNAMICINSTANCEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/CBSVolume.h>
#include <tencentcloud/emr/v20190103/model/CFSVolume.h>
#include <tencentcloud/emr/v20190103/model/COSVolume.h>
#include <tencentcloud/emr/v20190103/model/VolumeMount.h>
#include <tencentcloud/emr/v20190103/model/TkeLabel.h>
#include <tencentcloud/emr/v20190103/model/Toleration.h>
#include <tencentcloud/emr/v20190103/model/NameValue.h>
#include <tencentcloud/emr/v20190103/model/CFSTurboVolume.h>
#include <tencentcloud/emr/v20190103/model/GooseFSVolume.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 创建DynamicInstance提交的表单数据中的group部分
                */
                class DynamicInstanceGroup : public AbstractModel
                {
                public:
                    DynamicInstanceGroup();
                    ~DynamicInstanceGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资源组类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupType <p>资源组类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置<p>资源组类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupType <p>资源组类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取<p>资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName <p>资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupName <p>资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取<p>pod cpu核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodCpu <p>pod cpu核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPodCpu() const;

                    /**
                     * 设置<p>pod cpu核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podCpu <p>pod cpu核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPodCpu(const uint64_t& _podCpu);

                    /**
                     * 判断参数 PodCpu 是否已赋值
                     * @return PodCpu 是否已赋值
                     * 
                     */
                    bool PodCpuHasBeenSet() const;

                    /**
                     * 获取<p>pod mem大小（GB）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodMem <p>pod mem大小（GB）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPodMem() const;

                    /**
                     * 设置<p>pod mem大小（GB）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podMem <p>pod mem大小（GB）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPodMem(const uint64_t& _podMem);

                    /**
                     * 判断参数 PodMem 是否已赋值
                     * @return PodMem 是否已赋值
                     * 
                     */
                    bool PodMemHasBeenSet() const;

                    /**
                     * 获取<p>pod gpu类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodGpuType <p>pod gpu类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPodGpuType() const;

                    /**
                     * 设置<p>pod gpu类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podGpuType <p>pod gpu类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPodGpuType(const std::string& _podGpuType);

                    /**
                     * 判断参数 PodGpuType 是否已赋值
                     * @return PodGpuType 是否已赋值
                     * 
                     */
                    bool PodGpuTypeHasBeenSet() const;

                    /**
                     * 获取<p>pod gpu块数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodGpu <p>pod gpu块数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPodGpu() const;

                    /**
                     * 设置<p>pod gpu块数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podGpu <p>pod gpu块数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPodGpu(const uint64_t& _podGpu);

                    /**
                     * 判断参数 PodGpu 是否已赋值
                     * @return PodGpu 是否已赋值
                     * 
                     */
                    bool PodGpuHasBeenSet() const;

                    /**
                     * 获取<p>pod个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodNum <p>pod个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPodNum() const;

                    /**
                     * 设置<p>pod个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podNum <p>pod个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPodNum(const uint64_t& _podNum);

                    /**
                     * 判断参数 PodNum 是否已赋值
                     * @return PodNum 是否已赋值
                     * 
                     */
                    bool PodNumHasBeenSet() const;

                    /**
                     * 获取<p>pod弹性最小个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinPodNum <p>pod弹性最小个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMinPodNum() const;

                    /**
                     * 设置<p>pod弹性最小个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minPodNum <p>pod弹性最小个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinPodNum(const uint64_t& _minPodNum);

                    /**
                     * 判断参数 MinPodNum 是否已赋值
                     * @return MinPodNum 是否已赋值
                     * 
                     */
                    bool MinPodNumHasBeenSet() const;

                    /**
                     * 获取<p>pod弹性最大个数，当MaxPodNum &gt; MinPodNum时，默认表示开启弹性扩缩容，将在范围内扩缩容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxPodNum <p>pod弹性最大个数，当MaxPodNum &gt; MinPodNum时，默认表示开启弹性扩缩容，将在范围内扩缩容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxPodNum() const;

                    /**
                     * 设置<p>pod弹性最大个数，当MaxPodNum &gt; MinPodNum时，默认表示开启弹性扩缩容，将在范围内扩缩容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxPodNum <p>pod弹性最大个数，当MaxPodNum &gt; MinPodNum时，默认表示开启弹性扩缩容，将在范围内扩缩容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxPodNum(const uint64_t& _maxPodNum);

                    /**
                     * 判断参数 MaxPodNum 是否已赋值
                     * @return MaxPodNum 是否已赋值
                     * 
                     */
                    bool MaxPodNumHasBeenSet() const;

                    /**
                     * 获取<p>是否支持存储配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportPV <p>是否支持存储配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSupportPV() const;

                    /**
                     * 设置<p>是否支持存储配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportPV <p>是否支持存储配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSupportPV(const bool& _supportPV);

                    /**
                     * 判断参数 SupportPV 是否已赋值
                     * @return SupportPV 是否已赋值
                     * 
                     */
                    bool SupportPVHasBeenSet() const;

                    /**
                     * 获取<p>cbs存储卷列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CBSVolumes <p>cbs存储卷列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CBSVolume> GetCBSVolumes() const;

                    /**
                     * 设置<p>cbs存储卷列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cBSVolumes <p>cbs存储卷列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCBSVolumes(const std::vector<CBSVolume>& _cBSVolumes);

                    /**
                     * 判断参数 CBSVolumes 是否已赋值
                     * @return CBSVolumes 是否已赋值
                     * 
                     */
                    bool CBSVolumesHasBeenSet() const;

                    /**
                     * 获取<p>cfs存储卷列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CFSVolumes <p>cfs存储卷列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CFSVolume> GetCFSVolumes() const;

                    /**
                     * 设置<p>cfs存储卷列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cFSVolumes <p>cfs存储卷列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCFSVolumes(const std::vector<CFSVolume>& _cFSVolumes);

                    /**
                     * 判断参数 CFSVolumes 是否已赋值
                     * @return CFSVolumes 是否已赋值
                     * 
                     */
                    bool CFSVolumesHasBeenSet() const;

                    /**
                     * 获取<p>cos存储卷列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return COSVolumes <p>cos存储卷列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<COSVolume> GetCOSVolumes() const;

                    /**
                     * 设置<p>cos存储卷列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cOSVolumes <p>cos存储卷列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCOSVolumes(const std::vector<COSVolume>& _cOSVolumes);

                    /**
                     * 判断参数 COSVolumes 是否已赋值
                     * @return COSVolumes 是否已赋值
                     * 
                     */
                    bool COSVolumesHasBeenSet() const;

                    /**
                     * 获取<p>挂载卷列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeMounts <p>挂载卷列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<VolumeMount> GetVolumeMounts() const;

                    /**
                     * 设置<p>挂载卷列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeMounts <p>挂载卷列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVolumeMounts(const std::vector<VolumeMount>& _volumeMounts);

                    /**
                     * 判断参数 VolumeMounts 是否已赋值
                     * @return VolumeMounts 是否已赋值
                     * 
                     */
                    bool VolumeMountsHasBeenSet() const;

                    /**
                     * 获取<p>pod标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Labels <p>pod标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TkeLabel> GetLabels() const;

                    /**
                     * 设置<p>pod标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labels <p>pod标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabels(const std::vector<TkeLabel>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取<p>Tolerations定义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tolerations <p>Tolerations定义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Toleration> GetTolerations() const;

                    /**
                     * 设置<p>Tolerations定义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tolerations <p>Tolerations定义</p>
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
                     * 获取<p>环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Envs <p>环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NameValue> GetEnvs() const;

                    /**
                     * 设置<p>环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _envs <p>环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnvs(const std::vector<NameValue>& _envs);

                    /**
                     * 判断参数 Envs 是否已赋值
                     * @return Envs 是否已赋值
                     * 
                     */
                    bool EnvsHasBeenSet() const;

                    /**
                     * 获取<p>节点调度策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulingPolicy <p>节点调度策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchedulingPolicy() const;

                    /**
                     * 设置<p>节点调度策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulingPolicy <p>节点调度策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchedulingPolicy(const std::string& _schedulingPolicy);

                    /**
                     * 判断参数 SchedulingPolicy 是否已赋值
                     * @return SchedulingPolicy 是否已赋值
                     * 
                     */
                    bool SchedulingPolicyHasBeenSet() const;

                    /**
                     * 获取<p>资源标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceLabel <p>资源标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceLabel() const;

                    /**
                     * 设置<p>资源标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceLabel <p>资源标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceLabel(const std::string& _resourceLabel);

                    /**
                     * 判断参数 ResourceLabel 是否已赋值
                     * @return ResourceLabel 是否已赋值
                     * 
                     */
                    bool ResourceLabelHasBeenSet() const;

                    /**
                     * 获取<p>GPU资源厂商key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodGpuResourceKey <p>GPU资源厂商key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPodGpuResourceKey() const;

                    /**
                     * 设置<p>GPU资源厂商key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podGpuResourceKey <p>GPU资源厂商key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPodGpuResourceKey(const std::string& _podGpuResourceKey);

                    /**
                     * 判断参数 PodGpuResourceKey 是否已赋值
                     * @return PodGpuResourceKey 是否已赋值
                     * 
                     */
                    bool PodGpuResourceKeyHasBeenSet() const;

                    /**
                     * 获取<p>CFS Turbo 挂载列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CFSTurboVolumes <p>CFS Turbo 挂载列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CFSTurboVolume> GetCFSTurboVolumes() const;

                    /**
                     * 设置<p>CFS Turbo 挂载列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cFSTurboVolumes <p>CFS Turbo 挂载列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCFSTurboVolumes(const std::vector<CFSTurboVolume>& _cFSTurboVolumes);

                    /**
                     * 判断参数 CFSTurboVolumes 是否已赋值
                     * @return CFSTurboVolumes 是否已赋值
                     * 
                     */
                    bool CFSTurboVolumesHasBeenSet() const;

                    /**
                     * 获取<p>GooseFS盘</p>
                     * @return GooseFSVolumes <p>GooseFS盘</p>
                     * 
                     */
                    std::vector<GooseFSVolume> GetGooseFSVolumes() const;

                    /**
                     * 设置<p>GooseFS盘</p>
                     * @param _gooseFSVolumes <p>GooseFS盘</p>
                     * 
                     */
                    void SetGooseFSVolumes(const std::vector<GooseFSVolume>& _gooseFSVolumes);

                    /**
                     * 判断参数 GooseFSVolumes 是否已赋值
                     * @return GooseFSVolumes 是否已赋值
                     * 
                     */
                    bool GooseFSVolumesHasBeenSet() const;

                    /**
                     * 获取<p>启动前指令</p>
                     * @return PreStartCommand <p>启动前指令</p>
                     * 
                     */
                    std::string GetPreStartCommand() const;

                    /**
                     * 设置<p>启动前指令</p>
                     * @param _preStartCommand <p>启动前指令</p>
                     * 
                     */
                    void SetPreStartCommand(const std::string& _preStartCommand);

                    /**
                     * 判断参数 PreStartCommand 是否已赋值
                     * @return PreStartCommand 是否已赋值
                     * 
                     */
                    bool PreStartCommandHasBeenSet() const;

                    /**
                     * 获取<p>Ray启动前指令</p>
                     * @return RayStartParams <p>Ray启动前指令</p>
                     * 
                     */
                    std::string GetRayStartParams() const;

                    /**
                     * 设置<p>Ray启动前指令</p>
                     * @param _rayStartParams <p>Ray启动前指令</p>
                     * 
                     */
                    void SetRayStartParams(const std::string& _rayStartParams);

                    /**
                     * 判断参数 RayStartParams 是否已赋值
                     * @return RayStartParams 是否已赋值
                     * 
                     */
                    bool RayStartParamsHasBeenSet() const;

                private:

                    /**
                     * <p>资源组类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * <p>资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>pod cpu核数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_podCpu;
                    bool m_podCpuHasBeenSet;

                    /**
                     * <p>pod mem大小（GB）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_podMem;
                    bool m_podMemHasBeenSet;

                    /**
                     * <p>pod gpu类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_podGpuType;
                    bool m_podGpuTypeHasBeenSet;

                    /**
                     * <p>pod gpu块数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_podGpu;
                    bool m_podGpuHasBeenSet;

                    /**
                     * <p>pod个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_podNum;
                    bool m_podNumHasBeenSet;

                    /**
                     * <p>pod弹性最小个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_minPodNum;
                    bool m_minPodNumHasBeenSet;

                    /**
                     * <p>pod弹性最大个数，当MaxPodNum &gt; MinPodNum时，默认表示开启弹性扩缩容，将在范围内扩缩容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxPodNum;
                    bool m_maxPodNumHasBeenSet;

                    /**
                     * <p>是否支持存储配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_supportPV;
                    bool m_supportPVHasBeenSet;

                    /**
                     * <p>cbs存储卷列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CBSVolume> m_cBSVolumes;
                    bool m_cBSVolumesHasBeenSet;

                    /**
                     * <p>cfs存储卷列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CFSVolume> m_cFSVolumes;
                    bool m_cFSVolumesHasBeenSet;

                    /**
                     * <p>cos存储卷列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<COSVolume> m_cOSVolumes;
                    bool m_cOSVolumesHasBeenSet;

                    /**
                     * <p>挂载卷列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VolumeMount> m_volumeMounts;
                    bool m_volumeMountsHasBeenSet;

                    /**
                     * <p>pod标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TkeLabel> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>Tolerations定义</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Toleration> m_tolerations;
                    bool m_tolerationsHasBeenSet;

                    /**
                     * <p>环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NameValue> m_envs;
                    bool m_envsHasBeenSet;

                    /**
                     * <p>节点调度策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulingPolicy;
                    bool m_schedulingPolicyHasBeenSet;

                    /**
                     * <p>资源标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceLabel;
                    bool m_resourceLabelHasBeenSet;

                    /**
                     * <p>GPU资源厂商key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_podGpuResourceKey;
                    bool m_podGpuResourceKeyHasBeenSet;

                    /**
                     * <p>CFS Turbo 挂载列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CFSTurboVolume> m_cFSTurboVolumes;
                    bool m_cFSTurboVolumesHasBeenSet;

                    /**
                     * <p>GooseFS盘</p>
                     */
                    std::vector<GooseFSVolume> m_gooseFSVolumes;
                    bool m_gooseFSVolumesHasBeenSet;

                    /**
                     * <p>启动前指令</p>
                     */
                    std::string m_preStartCommand;
                    bool m_preStartCommandHasBeenSet;

                    /**
                     * <p>Ray启动前指令</p>
                     */
                    std::string m_rayStartParams;
                    bool m_rayStartParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DYNAMICINSTANCEGROUP_H_

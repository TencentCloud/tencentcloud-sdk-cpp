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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_AUTOSCALERESOURCECONF_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_AUTOSCALERESOURCECONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/AutoScaleGroupAdvanceAttrs.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 弹性扩缩容规格配置
                */
                class AutoScaleResourceConf : public AbstractModel
                {
                public:
                    AutoScaleResourceConf();
                    ~AutoScaleResourceConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>配置ID。</p>
                     * @return Id <p>配置ID。</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>配置ID。</p>
                     * @param _id <p>配置ID。</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>集群实例ID。</p>
                     * @return ClusterId <p>集群实例ID。</p>
                     * 
                     */
                    int64_t GetClusterId() const;

                    /**
                     * 设置<p>集群实例ID。</p>
                     * @param _clusterId <p>集群实例ID。</p>
                     * 
                     */
                    void SetClusterId(const int64_t& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>自动扩缩容保留最小实例数。</p>
                     * @return ScaleLowerBound <p>自动扩缩容保留最小实例数。</p>
                     * 
                     */
                    int64_t GetScaleLowerBound() const;

                    /**
                     * 设置<p>自动扩缩容保留最小实例数。</p>
                     * @param _scaleLowerBound <p>自动扩缩容保留最小实例数。</p>
                     * 
                     */
                    void SetScaleLowerBound(const int64_t& _scaleLowerBound);

                    /**
                     * 判断参数 ScaleLowerBound 是否已赋值
                     * @return ScaleLowerBound 是否已赋值
                     * 
                     */
                    bool ScaleLowerBoundHasBeenSet() const;

                    /**
                     * 获取<p>自动扩缩容最大实例数。</p>
                     * @return ScaleUpperBound <p>自动扩缩容最大实例数。</p>
                     * 
                     */
                    int64_t GetScaleUpperBound() const;

                    /**
                     * 设置<p>自动扩缩容最大实例数。</p>
                     * @param _scaleUpperBound <p>自动扩缩容最大实例数。</p>
                     * 
                     */
                    void SetScaleUpperBound(const int64_t& _scaleUpperBound);

                    /**
                     * 判断参数 ScaleUpperBound 是否已赋值
                     * @return ScaleUpperBound 是否已赋值
                     * 
                     */
                    bool ScaleUpperBoundHasBeenSet() const;

                    /**
                     * 获取<p>扩容规则类型，1为按负载指标扩容规则，2为按时间扩容规则</p>
                     * @return StrategyType <p>扩容规则类型，1为按负载指标扩容规则，2为按时间扩容规则</p>
                     * 
                     */
                    int64_t GetStrategyType() const;

                    /**
                     * 设置<p>扩容规则类型，1为按负载指标扩容规则，2为按时间扩容规则</p>
                     * @param _strategyType <p>扩容规则类型，1为按负载指标扩容规则，2为按时间扩容规则</p>
                     * 
                     */
                    void SetStrategyType(const int64_t& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取<p>下次可扩容时间。</p>
                     * @return NextTimeCanScale <p>下次可扩容时间。</p>
                     * 
                     */
                    uint64_t GetNextTimeCanScale() const;

                    /**
                     * 设置<p>下次可扩容时间。</p>
                     * @param _nextTimeCanScale <p>下次可扩容时间。</p>
                     * 
                     */
                    void SetNextTimeCanScale(const uint64_t& _nextTimeCanScale);

                    /**
                     * 判断参数 NextTimeCanScale 是否已赋值
                     * @return NextTimeCanScale 是否已赋值
                     * 
                     */
                    bool NextTimeCanScaleHasBeenSet() const;

                    /**
                     * 获取<p>优雅缩容开关</p>
                     * @return GraceDownFlag <p>优雅缩容开关</p>
                     * 
                     */
                    bool GetGraceDownFlag() const;

                    /**
                     * 设置<p>优雅缩容开关</p>
                     * @param _graceDownFlag <p>优雅缩容开关</p>
                     * 
                     */
                    void SetGraceDownFlag(const bool& _graceDownFlag);

                    /**
                     * 判断参数 GraceDownFlag 是否已赋值
                     * @return GraceDownFlag 是否已赋值
                     * 
                     */
                    bool GraceDownFlagHasBeenSet() const;

                    /**
                     * 获取<p>&quot;CVM&quot;表示规格全部使用CVM相关类型，&quot;POD&quot;表示规格使用容器相关类型,默认为&quot;CVM&quot;。</p>
                     * @return HardwareType <p>&quot;CVM&quot;表示规格全部使用CVM相关类型，&quot;POD&quot;表示规格使用容器相关类型,默认为&quot;CVM&quot;。</p>
                     * 
                     */
                    std::string GetHardwareType() const;

                    /**
                     * 设置<p>&quot;CVM&quot;表示规格全部使用CVM相关类型，&quot;POD&quot;表示规格使用容器相关类型,默认为&quot;CVM&quot;。</p>
                     * @param _hardwareType <p>&quot;CVM&quot;表示规格全部使用CVM相关类型，&quot;POD&quot;表示规格使用容器相关类型,默认为&quot;CVM&quot;。</p>
                     * 
                     */
                    void SetHardwareType(const std::string& _hardwareType);

                    /**
                     * 判断参数 HardwareType 是否已赋值
                     * @return HardwareType 是否已赋值
                     * 
                     */
                    bool HardwareTypeHasBeenSet() const;

                    /**
                     * 获取<p>&quot;POSTPAY&quot;表示只使用按量计费，&quot;SPOT_FIRST&quot;表示竞价实例优先，只有HardwareType为&quot;HOST&quot;时支持竞价实例优先，&quot;POD&quot;只支持纯按量计费。</p>
                     * @return PayMode <p>&quot;POSTPAY&quot;表示只使用按量计费，&quot;SPOT_FIRST&quot;表示竞价实例优先，只有HardwareType为&quot;HOST&quot;时支持竞价实例优先，&quot;POD&quot;只支持纯按量计费。</p>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>&quot;POSTPAY&quot;表示只使用按量计费，&quot;SPOT_FIRST&quot;表示竞价实例优先，只有HardwareType为&quot;HOST&quot;时支持竞价实例优先，&quot;POD&quot;只支持纯按量计费。</p>
                     * @param _payMode <p>&quot;POSTPAY&quot;表示只使用按量计费，&quot;SPOT_FIRST&quot;表示竞价实例优先，只有HardwareType为&quot;HOST&quot;时支持竞价实例优先，&quot;POD&quot;只支持纯按量计费。</p>
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>竞价实例优先的场景下，按量计费资源数量的最低百分比，整数</p>
                     * @return PostPayPercentMin <p>竞价实例优先的场景下，按量计费资源数量的最低百分比，整数</p>
                     * 
                     */
                    int64_t GetPostPayPercentMin() const;

                    /**
                     * 设置<p>竞价实例优先的场景下，按量计费资源数量的最低百分比，整数</p>
                     * @param _postPayPercentMin <p>竞价实例优先的场景下，按量计费资源数量的最低百分比，整数</p>
                     * 
                     */
                    void SetPostPayPercentMin(const int64_t& _postPayPercentMin);

                    /**
                     * 判断参数 PostPayPercentMin 是否已赋值
                     * @return PostPayPercentMin 是否已赋值
                     * 
                     */
                    bool PostPayPercentMinHasBeenSet() const;

                    /**
                     * 获取<p>预设资源类型为HOST时，支持勾选“资源不足时切换POD”；支持取消勾选；0表示默认不勾选（0），1表示勾选</p>
                     * @return ChangeToPod <p>预设资源类型为HOST时，支持勾选“资源不足时切换POD”；支持取消勾选；0表示默认不勾选（0），1表示勾选</p>
                     * 
                     */
                    int64_t GetChangeToPod() const;

                    /**
                     * 设置<p>预设资源类型为HOST时，支持勾选“资源不足时切换POD”；支持取消勾选；0表示默认不勾选（0），1表示勾选</p>
                     * @param _changeToPod <p>预设资源类型为HOST时，支持勾选“资源不足时切换POD”；支持取消勾选；0表示默认不勾选（0），1表示勾选</p>
                     * 
                     */
                    void SetChangeToPod(const int64_t& _changeToPod);

                    /**
                     * 判断参数 ChangeToPod 是否已赋值
                     * @return ChangeToPod 是否已赋值
                     * 
                     */
                    bool ChangeToPodHasBeenSet() const;

                    /**
                     * 获取<p>伸缩组名</p>
                     * @return GroupName <p>伸缩组名</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>伸缩组名</p>
                     * @param _groupName <p>伸缩组名</p>
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
                     * 获取<p>标签</p>
                     * @return YarnNodeLabel <p>标签</p>
                     * 
                     */
                    std::string GetYarnNodeLabel() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _yarnNodeLabel <p>标签</p>
                     * 
                     */
                    void SetYarnNodeLabel(const std::string& _yarnNodeLabel);

                    /**
                     * 判断参数 YarnNodeLabel 是否已赋值
                     * @return YarnNodeLabel 是否已赋值
                     * 
                     */
                    bool YarnNodeLabelHasBeenSet() const;

                    /**
                     * 获取<p>对应的计算组</p>
                     * @return WarehouseName <p>对应的计算组</p>
                     * 
                     */
                    std::string GetWarehouseName() const;

                    /**
                     * 设置<p>对应的计算组</p>
                     * @param _warehouseName <p>对应的计算组</p>
                     * 
                     */
                    void SetWarehouseName(const std::string& _warehouseName);

                    /**
                     * 判断参数 WarehouseName 是否已赋值
                     * @return WarehouseName 是否已赋值
                     * 
                     */
                    bool WarehouseNameHasBeenSet() const;

                    /**
                     * 获取<p>伸缩组状态</p>
                     * @return GroupStatus <p>伸缩组状态</p>
                     * 
                     */
                    int64_t GetGroupStatus() const;

                    /**
                     * 设置<p>伸缩组状态</p>
                     * @param _groupStatus <p>伸缩组状态</p>
                     * 
                     */
                    void SetGroupStatus(const int64_t& _groupStatus);

                    /**
                     * 判断参数 GroupStatus 是否已赋值
                     * @return GroupStatus 是否已赋值
                     * 
                     */
                    bool GroupStatusHasBeenSet() const;

                    /**
                     * 获取<p>并行伸缩 0关闭；1开启</p>
                     * @return Parallel <p>并行伸缩 0关闭；1开启</p>
                     * 
                     */
                    int64_t GetParallel() const;

                    /**
                     * 设置<p>并行伸缩 0关闭；1开启</p>
                     * @param _parallel <p>并行伸缩 0关闭；1开启</p>
                     * 
                     */
                    void SetParallel(const int64_t& _parallel);

                    /**
                     * 判断参数 Parallel 是否已赋值
                     * @return Parallel 是否已赋值
                     * 
                     */
                    bool ParallelHasBeenSet() const;

                    /**
                     * 获取<p>是否支持MNode</p>
                     * @return EnableMNode <p>是否支持MNode</p>
                     * 
                     */
                    int64_t GetEnableMNode() const;

                    /**
                     * 设置<p>是否支持MNode</p>
                     * @param _enableMNode <p>是否支持MNode</p>
                     * 
                     */
                    void SetEnableMNode(const int64_t& _enableMNode);

                    /**
                     * 判断参数 EnableMNode 是否已赋值
                     * @return EnableMNode 是否已赋值
                     * 
                     */
                    bool EnableMNodeHasBeenSet() const;

                    /**
                     * 获取<p>伸缩组更多设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraAdvanceAttrs <p>伸缩组更多设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AutoScaleGroupAdvanceAttrs GetExtraAdvanceAttrs() const;

                    /**
                     * 设置<p>伸缩组更多设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraAdvanceAttrs <p>伸缩组更多设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtraAdvanceAttrs(const AutoScaleGroupAdvanceAttrs& _extraAdvanceAttrs);

                    /**
                     * 判断参数 ExtraAdvanceAttrs 是否已赋值
                     * @return ExtraAdvanceAttrs 是否已赋值
                     * 
                     */
                    bool ExtraAdvanceAttrsHasBeenSet() const;

                    /**
                     * 获取<p>自定义主机名</p>
                     * @return CustomNodeName <p>自定义主机名</p>
                     * 
                     */
                    std::string GetCustomNodeName() const;

                    /**
                     * 设置<p>自定义主机名</p>
                     * @param _customNodeName <p>自定义主机名</p>
                     * 
                     */
                    void SetCustomNodeName(const std::string& _customNodeName);

                    /**
                     * 判断参数 CustomNodeName 是否已赋值
                     * @return CustomNodeName 是否已赋值
                     * 
                     */
                    bool CustomNodeNameHasBeenSet() const;

                private:

                    /**
                     * <p>配置ID。</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>集群实例ID。</p>
                     */
                    int64_t m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>自动扩缩容保留最小实例数。</p>
                     */
                    int64_t m_scaleLowerBound;
                    bool m_scaleLowerBoundHasBeenSet;

                    /**
                     * <p>自动扩缩容最大实例数。</p>
                     */
                    int64_t m_scaleUpperBound;
                    bool m_scaleUpperBoundHasBeenSet;

                    /**
                     * <p>扩容规则类型，1为按负载指标扩容规则，2为按时间扩容规则</p>
                     */
                    int64_t m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * <p>下次可扩容时间。</p>
                     */
                    uint64_t m_nextTimeCanScale;
                    bool m_nextTimeCanScaleHasBeenSet;

                    /**
                     * <p>优雅缩容开关</p>
                     */
                    bool m_graceDownFlag;
                    bool m_graceDownFlagHasBeenSet;

                    /**
                     * <p>&quot;CVM&quot;表示规格全部使用CVM相关类型，&quot;POD&quot;表示规格使用容器相关类型,默认为&quot;CVM&quot;。</p>
                     */
                    std::string m_hardwareType;
                    bool m_hardwareTypeHasBeenSet;

                    /**
                     * <p>&quot;POSTPAY&quot;表示只使用按量计费，&quot;SPOT_FIRST&quot;表示竞价实例优先，只有HardwareType为&quot;HOST&quot;时支持竞价实例优先，&quot;POD&quot;只支持纯按量计费。</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>竞价实例优先的场景下，按量计费资源数量的最低百分比，整数</p>
                     */
                    int64_t m_postPayPercentMin;
                    bool m_postPayPercentMinHasBeenSet;

                    /**
                     * <p>预设资源类型为HOST时，支持勾选“资源不足时切换POD”；支持取消勾选；0表示默认不勾选（0），1表示勾选</p>
                     */
                    int64_t m_changeToPod;
                    bool m_changeToPodHasBeenSet;

                    /**
                     * <p>伸缩组名</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::string m_yarnNodeLabel;
                    bool m_yarnNodeLabelHasBeenSet;

                    /**
                     * <p>对应的计算组</p>
                     */
                    std::string m_warehouseName;
                    bool m_warehouseNameHasBeenSet;

                    /**
                     * <p>伸缩组状态</p>
                     */
                    int64_t m_groupStatus;
                    bool m_groupStatusHasBeenSet;

                    /**
                     * <p>并行伸缩 0关闭；1开启</p>
                     */
                    int64_t m_parallel;
                    bool m_parallelHasBeenSet;

                    /**
                     * <p>是否支持MNode</p>
                     */
                    int64_t m_enableMNode;
                    bool m_enableMNodeHasBeenSet;

                    /**
                     * <p>伸缩组更多设置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AutoScaleGroupAdvanceAttrs m_extraAdvanceAttrs;
                    bool m_extraAdvanceAttrsHasBeenSet;

                    /**
                     * <p>自定义主机名</p>
                     */
                    std::string m_customNodeName;
                    bool m_customNodeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_AUTOSCALERESOURCECONF_H_
